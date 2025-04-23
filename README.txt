# Libft - 42 Porto

## 🌟 **General Description**  
Libft is a custom implementation of essential C standard library functions. It was developed as part of the **42 Porto** curriculum to reinforce low-level programming skills, focusing on memory management, pointers, and data structures.

The library includes several functions for string manipulation, memory operations, and linked list management, designed to improve your understanding of how to work with C at a deeper level.

---

## 🛠 **How It Works**

### **1️⃣ Standard C Functions**  
Libft re-implements common C standard library functions, such as:  
- **String manipulation**  
  Functions like `ft_strlen`, `ft_strcpy`, `ft_strcat`, and `ft_strdup` for handling strings.  
- **Memory operations**  
  Functions like `ft_memcpy`, `ft_memmove`, and `ft_calloc` to handle memory copying, moving, and allocation.  
- **Character handling**  
  Functions like `ft_isdigit`, `ft_isalpha`, and `ft_tolower` to perform character checks.

### **2️⃣ Additional Utilities**  
- **String functions**  
  Functions like `ft_strjoin`, `ft_substr`, `ft_strtrim`, to manipulate strings.  
- **Linked List**  
  Implementing a custom linked list (`t_list`) with operations like `ft_lstnew`, `ft_lstadd_front`, `ft_lstiter`, and more.

### **3️⃣ Usage**  
Once compiled, you can use any of these functions by including `libft.h` in your project:
```c
#include "libft.h"
