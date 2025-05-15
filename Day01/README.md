### ✅ Day 01 - Basics of Time Complexity & C++ STL

````md
# 📅 Day 1: Time Complexity & C++ Basics

Welcome to Day 1 of my 30-Day DSA Revision Challenge!  
Today, I revised the fundamentals of **asymptotic analysis**, explored the **trade-offs between time and space complexity**, and brushed up on **C++ basics**, including data types, conditionals, loops, and functions.

---

## ⏱️ Time & Space Complexity

### 📘 Asymptotic Notations

- **O (Big-O):** Worst-case time complexity
- **Ω (Omega):** Best-case time complexity
- **Θ (Theta):** Average-case time complexity

### ⚖️ Common Time Complexities

| Complexity | Name         | Example Use Case           |
| ---------- | ------------ | -------------------------- |
| O(1)       | Constant     | Accessing an array element |
| O(log n)   | Logarithmic  | Binary Search              |
| O(n)       | Linear       | Single loop traversal      |
| O(n log n) | Linearithmic | Merge Sort, Quick Sort     |
| O(n²)      | Quadratic    | Nested loops               |
| O(2ⁿ)      | Exponential  | Recursion with two calls   |

---

## 📐 Master Theorem (Recurrence Relations)

Used to determine time complexity of recursive algorithms in the form:

T(n) = aT(n/b) + O(n^d)

Where:

- `a ≥ 1`, `b > 1`, and `d ≥ 0`

### ✅ Case Analysis:

1. **If** `a > b^d`
   → `T(n) = Θ(n^log_b a)`

   - Recursive work dominates

2. **If** `a == b^d`
   → `T(n) = Θ(n^d * log n)`

   - Both recursive and non-recursive work contribute equally

3. **If** `a < b^d`
   → `T(n) = Θ(n^d)`
   - Non-recursive work dominates

> 📌 Additional Methods:

- **Substitution Method**
- **Amortized Analysis**

---

## 💻 C++ Basics Recap

### 🔗 Header Files

```cpp
#include <iostream>  // Standard headers
#include "custom.h"  // Custom headers
```
````

### 🏷️ Namespaces

```cpp
using namespace std;
```

### 🧠 Data Types

| Type     | Description               |
| -------- | ------------------------- |
| `int`    | Integer numbers           |
| `float`  | Single precision decimals |
| `double` | Double precision decimals |
| `char`   | Single character          |
| `string` | String of characters      |
| `bool`   | Boolean values            |
| `struct` | User-defined type         |
| `enum`   | Named integral constants  |

---

## 🧮 Control Flow

### ✅ Conditionals

```cpp
if (condition) {
    // code
} else if (other_condition) {
    // code
} else {
    // fallback
}

switch (value) {
    case 1: break;
    case 2: break;
    default: break;
}
```

### 🔁 Loops

```cpp
for (int i = 0; i < n; i++) {
    // loop code
}

for (auto num : nums) {
    // range-based loop
}

while (condition) {
    // while loop
}

do {
    // do-while loop
} while (condition);
```

---

## 🔧 Functions

```cpp
return_type function_name(parameter_type parameter) {
    // function code
    return result;
}
```

### Lambda Function

```cpp
[](parameter_type param) -> return_type {
    // lambda code
}
```

---

## 🧱 Classes & Objects

```cpp
class ClassName {
public:
    ClassName() {
        // constructor
    }

    ~ClassName() {
        // destructor
    }
};
```

---

## ✅ Summary

Today, I covered:

- Asymptotic notations (O, Ω, Θ)
- Common time complexities and their examples
- Correct usage of the Master Theorem for recurrence relations
- Core C++ syntax including data types, conditionals, loops, functions, and class structure
- Introduction to Standard Template Library (STL) basics
