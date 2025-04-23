# Libft

Libft is a custom C library created at [42 Porto](https://www.42porto.com). It provides implementations for common C standard library functions and some additional utilities. The goal is to reinforce the understanding of memory management, pointers, and data structures.

---

## 📁 Project Structure

- `libft.h` - Header file with function prototypes and macros
- `*.c` - Source files containing function implementations
- `Makefile` - Build management and compilation rules

---

## ⚙️ Key Features

- **Re-implementing standard C functions**  
  Includes functions for string manipulation, memory operations, and character checks.

- **Memory management functions**  
  Functions like `ft_memcpy`, `ft_memmove`, `ft_calloc` are re-implemented.

- **String handling**  
  Includes `ft_strdup`, `ft_strjoin`, `ft_substr`, `ft_strtrim`, etc.

- **Linked list implementation**  
  Functions to create, manipulate, and iterate through a custom linked list (`t_list`).

---

## 🔧 Usage

1. **Compile the library:**
   ```bash
   make        # Build the libft.a static library
   make clean  # Remove object files
   make fclean # Remove all compiled files
   make re     # Rebuild everything from scratch

