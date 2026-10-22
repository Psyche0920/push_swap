<!-- repository-badges:start -->
<div align="center">

[![Contributors](https://img.shields.io/github/contributors/Psyche0920/push_swap?style=for-the-badge)](https://github.com/Psyche0920/push_swap/graphs/contributors)
[![Forks](https://img.shields.io/github/forks/Psyche0920/push_swap?style=for-the-badge)](https://github.com/Psyche0920/push_swap/forks)
[![Stars](https://img.shields.io/github/stars/Psyche0920/push_swap?style=for-the-badge)](https://github.com/Psyche0920/push_swap/stargazers)
[![Issues](https://img.shields.io/github/issues/Psyche0920/push_swap?style=for-the-badge)](https://github.com/Psyche0920/push_swap/issues)
[![License](https://img.shields.io/badge/license-not_specified-lightgrey?style=for-the-badge)](https://github.com/Psyche0920/push_swap)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-Weijia_Han-0A66C2?style=for-the-badge&logo=linkedin)](https://www.linkedin.com/in/weijia-han-6162581b5/)

</div>
<!-- repository-badges:end -->

# 🔥 push_swap

<p align="center">
  Sorting integers using two stacks and constrained operations  
  <br>
  <i>42 School Project · C · Data Structures · Algorithm Optimization</i>
</p>

---

## 📌 Overview

`push_swap` is a 42 project where the goal is to sort a list of integers in ascending order using:

* two stacks (`a` and `b`)
* a restricted set of operations
* the smallest possible number of moves

The program outputs the sequence of instructions required to sort the input.

---

## ⚙️ Allowed Operations

```txt
sa   swap top 2 elements of stack a
sb   swap top 2 elements of stack b
ss   sa + sb

pa   push top of b to a
pb   push top of a to b

ra   rotate a
rb   rotate b
rr   ra + rb

rra  reverse rotate a
rrb  reverse rotate b
rrr  rra + rrb
```

---

## 🧩 Project Structure

```bash
push_swap/
├── src/
│   ├── check_input.c
│   ├── init_list.c
│   ├── linked_list.c
│   ├── push.c
│   ├── push_swap.c
│   ├── r_rotate.c
│   ├── rotate.c
│   ├── sort_util.c
│   ├── sorting.c
│   ├── supporting.c
│   └── swap.c
│
├── include/
│   └── push_swap.h
│
├── libft/
│   └── (libft source files)
│
├── Makefile
└── README.md
```

---

## 🛠️ Module Overview

### 🔹 Main Program

**`push_swap.c`**

* Entry point of the program
* Handles argument parsing
* Initializes stack A
* Launches sorting process
* Prints operations

---

### 🔹 Input Handling

**`check_input.c`**

* Validates input
* Detects:

  * non-numeric values
  * duplicates
  * overflow / underflow
  * invalid formats

---

### 🔹 Data Structure

**`init_list.c` / `linked_list.c`**

* Builds and manages stack structure
* Uses a **linked list representation**
* Supports efficient push/rotate operations

---

### 🔹 Operations

Each operation is implemented in a dedicated file:

* `swap.c` → `sa`, `sb`, `ss`
* `push.c` → `pa`, `pb`
* `rotate.c` → `ra`, `rb`, `rr`
* `r_rotate.c` → `rra`, `rrb`, `rrr`

---

### 🔹 Sorting Logic

**`sorting.c`**

* Core algorithm controlling the sorting process
* Decides which operations to apply

**`sort_util.c`**

* Helper functions for sorting logic
* Stack analysis and decision support

---

### 🔹 Utilities

**`supporting.c`**

* General helper functions
* Shared logic across modules

---

### 🔹 Header

**`include/push_swap.h`**

* Structure definitions
* Function prototypes
* Shared macros and constants

---

### 🔹 Libft Integration

**`libft/`**

* Custom utility library
* Provides functions such as:

  * string handling
  * memory management
  * conversions

Used to avoid reimplementing common utilities.

---

### 🔹 Build System

**`Makefile`**

* Compiles:

  * project source files
  * `libft`
* Produces executable:

```bash
push_swap
```

Common commands:

```bash
make
make clean
make fclean
make re
```

---

## 🔄 Execution Flow

```txt
input arguments
      ↓
validation (check_input)
      ↓
stack initialization
      ↓
sorting algorithm
      ↓
operations output
```

---

## 🚀 Usage

```bash
./push_swap 3 2 1
```

or:

```bash
ARG="3 2 1"
./push_swap $ARG
```

---

## 🧪 Testing

```bash
ARG="3 2 1"
./push_swap $ARG | ./checker $ARG
```

Expected result:

```txt
OK
```

---

## ⚠️ Error Handling

The program handles:

* invalid input
* duplicates
* integer overflow
* memory allocation failures

It avoids:

* segmentation faults
* memory leaks
* undefined behavior

---

## 📚 42 Constraints

* Only allowed operations can be used
* No direct sorting functions
* Must print valid instructions
* Must manage memory correctly

Allowed functions:

```txt
malloc
free
write
read
exit
```

---

## 🎯 Learning Outcomes

* Stack-based algorithm design
* Linked list manipulation
* Problem solving under constraints
* Operation cost optimization
* Defensive programming
* Modular C architecture

---

## 👤 Author

Psyche0920
https://github.com/Psyche0920

---

<p align="center">
  ⭐ If you find this project useful, feel free to star it!
</p>
