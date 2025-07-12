# 🧮 push_swap

`push_swap` is a sorting algorithm project from the 42 school curriculum. The goal is to sort a list of integers using a restricted set of stack operations, while producing the smallest number of instructions possible.

---

## 🚀 Project Overview

This program takes a sequence of integers as input and sorts them using two stacks (`a` and `b`) and the following allowed operations:

- `sa`, `sb`, `ss` — Swap the first two elements
- `pa`, `pb` — Push from one stack to another
- `ra`, `rb`, `rr` — Rotate (shift up)
- `rra`, `rrb`, `rrr` — Reverse rotate (shift down)

The program outputs the list of operations used to sort the integers.

---

## 🔧 Implementation

### ✅ Algorithms used

- **Radix Sort** (binary-index based):
  - Efficient for large sets of numbers (100–500 elements).
  - Operates in O(n log n) time using bitwise comparisons and stack manipulation.
  - Each element is assigned an index based on its sorted position.
  - The algorithm iterates over each bit from LSB to MSB and distributes elements between the two stacks accordingly.

### ⚙️ Indexing System

Before sorting, all integers are:
- Transformed into an indexed array (normalized form),
- Sorted,
- Then re-assigned as `index` values in the stack nodes for more efficient bitwise comparison.

---

## 🧪 Trying the Turkish Algorithm

I explored implementing a **chunk-based sorting algorithm**, sometimes referred to as the "Turk algorithm" in 42 circles. While the approach is clever (dividing elements into chunks and pushing/pulling them in optimal ranges), it became **difficult to handle all edge cases clearly** at this stage.

So for now, I chose to focus on a solid and optimized Radix implementation.

---

## 📁 Project Structure

```bash
.
├── algorithm/         # Sorting algorithms (radix, etc.)
├── init/              # Stack initialization and indexing
├── input/             # Input parsing and validation
├── operations/        # All stack operations
├── utils/             # Utility functions (split, list tools, etc.)
├── main.c             # Entry point
├── Makefile
└── README.md
