# DSA Lab 2: Dynamic Memory Management, Pointers, and TDD in C++

**Course:** Data Structures and Algorithms (CS-250)  
**Institution:** SEECS — NUST  

---

## Overview

This repository contains the completed implementations and test suites for **Lab 02**, focusing on dynamic memory allocation on the heap (`new` / `delete`), pointer manipulation, and Test-Driven Development (TDD) using C++ assertions.

---

## Lab Tasks Summary

| Task | File | Description | Memory Concept |
| :--- | :--- | :--- | :--- |
| **Task 1** | `hello.cpp` | Starter program establishing environment and Git workflow | Basic Execution |
| **Task 2** | `salary.cpp` | Dynamic salary calculation with dynamic array allocation | Heap (`new[]` / `delete[]`) |
| **Task 3** | `analyzepointer.cpp` | Inspection of memory addresses and pointed-to values | Stack vs. Heap addresses |
| **Task 4** | `string_reverse.cpp` | In-place string reversal using standard library algorithms | Dynamic String Allocation |
| **Task 5** | `is_sorted.cpp` | Verification of sorted arrays using Test-Driven Development (TDD) | Pointers & Assertions |

---

## Task 5: Test-Driven Development (TDD) Cycle

Task 5 was developed following strict TDD practices:

1. **Write Test First:** Authored 8 test cases using `assert()` covering sorted, unsorted, duplicate, single-element, descending, negative, empty, and identical-element arrays.
2. **Initial Run (Fail):** Ran tests against an incomplete `isSorted()` stub function returning `false`, confirming test assertion failures.
3. **Implementation:** Implemented adjacent element comparison (`arr[i] > arr[i + 1]`).
4. **Final Run (Pass):** Re-ran the test suite to confirm all 8 assertion cases passed successfully.

---

## Compilation & Execution

To compile and run any task using MinGW GCC (`g++`):

```powershell
# Task 1
g++ hello.cpp -o hello
.\hello

# Task 2
g++ salary.cpp -o salary
.\salary

# Task 3
g++ analyzepointer.cpp -o analyzepointer
.\analyzepointer

# Task 4
g++ string_reverse.cpp -o string_reverse
.\string_reverse

# Task 5 (TDD Tests)
g++ is_sorted.cpp -o is_sorted
.\is_sorted