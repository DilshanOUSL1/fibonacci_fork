# Fibonacci Sequence Generator using fork() System Call

A C program demonstrating Linux process management where:

- The **parent process** creates a **child** using `fork()`
- The **child process** computes the **Fibonacci sequence**
- The **parent** waits for child completion using `wait()`
- The program **validates user input** to accept only non-negative integers

---

## 📋 Prerequisites

### For Linux/Unix/macOS:
```bash
	# Debian/Ubuntu
		1.sudo apt-get update 
		2.sudo apt-get install gcc # Debian/Ubuntu
	# macOS
	brew install gcc git                                 
```

### For Windows:
**Recommended (WSL Method):**

1. Install WSL2
2. Install Ubuntu from Microsoft Store  
3. Open Ubuntu terminal and run:
   ```bash
   sudo apt update 
   sudo apt install gcc
   ```

**Alternative (VirtualBox Method):**

1. Download Ubuntu ISO: 
2. Create a VM using VirtualBox  
3. Follow the Linux instructions inside the VM  

---

## 🚀 Getting Started

### Clone the repository
```bash
git clone https://github.com/DilshanOUSL1/fibonacci_fork
cd fibonacci_fork
```

### Compile the program
```bash
gcc fibonacci_fork.c -o fibonacci
```

### Run the program
```bash
./fibonacci
```

### Example (generates first 5 Fibonacci numbers)
```bash
./fibonacci
```
```text
Enter the number of Fibbancci terms: 5
```
---

## ✅ Expected Output

```text
Parent process - PID: 1234
Created child process with PID: 1235
Child process - PID: 1235
Fibonacci sequence: [0, 1, 1, 2, 3]
Child process 1235 has completed.
```

---

## 📁 File Structure

```text
.
├── fibonacci_fork.c    # Main program source
├── README.md           # This instruction file
└── Pseudo_code.txt     # Optional
```

---

## 🛠 Troubleshooting

- **Command not found:** Ensure `gcc` is installed (verify with `gcc --version`)
- **Permission denied:** Run `chmod +x fibonacci`
- **Invalid input:** Program only accepts non-negative integers

---

## 📄 License

**MIT License** - Free for educational use
