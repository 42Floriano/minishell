# 🐚 Minishell - 42 Project

Minishell is a minimalistic UNIX shell inspired by **Bash**. It is a **42 school project** designed to deepen understanding of process management, pipes, file descriptors, and signal handling in C.

---

## 📌 What is a Shell?
A **shell** is a command-line interpreter that allows users to interact with the operating system by executing commands. It manages processes, file operations, and system calls, providing a user-friendly interface for executing programs and scripts.

## 📌 Project Overview
Minishell is a recreation of a simplified version of the **Bash** shell. The goal of this project was to implement core shell functionalities, including command execution, environment variable handling, input/output redirections, and process management while respecting the constraints of a UNIX-based shell.

- **Language**: C
- **Compilation**: `gcc -Wall -Wextra -Werror`
- **Libraries Used**: `readline`
- **Status**: Mandatory part completed (Bonus not implemented)

---

## 📁 Repository Structure

```
├── includes/          # Header files
├── srcs/              # Source code files
├── Makefile           # Compilation rules
├── README.md          # Project documentation
└── en.subject.pdf     # Project subject file
```

---

## 🚀 Getting Started

### 🔧 Dependencies
Ensure that you have the `readline` library installed before compiling the project.

For **Debian/Ubuntu**:
```sh
sudo apt-get install libreadline-dev
```

For **MacOS**:
```sh
brew install readline
```

---

## 🏗️ Installation

Clone the repository and compile the project using Make:

```sh
git clone https://github.com/42Floriano/minishell.git
cd minishell
make
```

This will generate the `minishell` executable.

---

## 🎮 How to Use

Run `minishell`:
```sh
./minishell
```

### 🕹️ Features
✅ Display a prompt when waiting for a new command
✅ Execute shell commands via `execve`
✅ Handle environment variables (`$HOME`, `$USER`, etc.)
✅ Implement built-in commands
✅ Handle pipes (`|`) and redirections (`>`, `<`, `>>`, `<<`)
✅ Properly handle **signals** (`Ctrl+C`, `Ctrl+D`, `Ctrl+\`)
✅ Exit status management (`$?`)
❌ **Bonus features not implemented** (&&, ||, wildcard expansion)

---

## 🔧 Built-in Commands
Minishell supports the following built-in commands:

| Command  | Description |
|----------|-------------|
| `echo`   | Print text to the terminal, supports `-n` flag |
| `cd`     | Change directory |
| `pwd`    | Print the current directory |
| `export` | Export an environment variable |
| `unset`  | Remove an environment variable |
| `env`    | Display the environment variables |
| `exit`   | Exit the shell |

---

## 🛑 Known Issues
- Some complex redirections may cause unexpected behavior.
- Command history may not persist across sessions.

---

## 📌 Credits
- **42Floriano** ([@42Floriano](https://github.com/42Floriano))
- **Avdul** ([@aavduli](https://github.com/aavduli))

---

## 🏆 Acknowledgments
This project was built as part of **42 School**, and serves as an introduction to shell implementation and UNIX internals.

---

🔗 [GitHub Repository](https://github.com/42Floriano/minishell)

