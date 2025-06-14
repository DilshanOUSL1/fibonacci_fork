#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

void fibonacci(int n) {
    int a = 0, b = 1, c;
    printf("Fibonacci sequence:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}


int main() {
    int n;
    pid_t pid;

    // Get input
    printf("Enter the number of Fibonacci terms: ");
    scanf("%d", &n);

    // Validate input
    while (n < 0) {
        printf("Please enter a positive number: ");
        scanf("%d", &n);
    }

    // Create child process
    pid = fork();

    if (pid == 0) {
        // Child process
        printf("\n[Child Process]\n");
        printf("PID: %d, PPID: %d\n", getpid(), getppid());
        sleep(10); // It will give time to check /proc/<pid>/status
        fibonacci(n);
    } else if (pid > 0) {
        // Parent process
        printf("\n[Parent Process]\n");
        printf("PID: %d, Child PID: %d\n", getpid(), pid);
        sleep(10); // It give time to check /proc/<pid>/status
        wait(NULL);
        printf("Parent process: Child with PID %d has finished.\n", pid);
    } else {
        perror("Cannot create child process");
        return 1;
    }

    return 0;
}
