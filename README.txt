# Libft

A custom C standard library implementation developed at [42 Porto](https://www.42porto.com).  
This project focuses on mastering low-level memory manipulation, pointer logic, and basic data structures.

---

## 📁 Project Structure

- `libft.h` – Function prototypes and macros  
- `*.c` – Function implementations  
- `Makefile` – Compilation and rule management

---

## ⚙️ Features

### Part 1 – Libc Functions
Re-implementations of standard C library functions, such as:
- Character checks
- String manipulation
- Memory operations
- Conversion functions

### Part 2 – Additional Utilities
- String join, split, trim, etc.
- Advanced memory functions

### Bonus Part – Linked Lists
Custom implementation of a singly linked list and common operations:
- Creation, addition, iteration
- Mapping, deletion

---

## 🔧 Usage

```bash
make        # Compiles libft into libft.a
make clean  # Removes object files
make fclean # Removes object files and libft.a
make re     # Recompiles everything from scratch
