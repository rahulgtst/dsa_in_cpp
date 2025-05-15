# 📅 Day 2: Arrays & Common Operations

Welcome to Day 2 of my 30-Day DSA Revision Challenge!  
Today, I revised **1D and 2D Arrays**, practiced array traversal, manipulation, and important matrix-based operations. I also explored standard problems that frequently appear in interviews based on arrays.

## 🔢 1D Arrays

### 📘 Basics

- Fixed-size collection of elements of the same type
- Elements stored in contiguous memory
- Zero-based indexing

```cpp
int arr[5] = {1, 2, 3, 4, 5};
for (int i = 0; i < 5; ++i) {
    cout << arr[i] << " ";
}
```

### ✅ Operations

- **Traversal:** Using `for` and range-based loops
- **Search:**

  - Linear Search → O(n)
  - Binary Search (sorted arrays only) → O(log n)

- **Sorting:**

  - Bubble, Insertion, Selection → O(n²)
  - `sort()` from STL → O(n log n)

- **Updating and Modifying Elements**
- **Finding max/min, prefix sum, etc.**

## 🧭 2D Arrays (Multi-Dimensional Arrays)

### 📘 Basics

- Grid-like data structure with rows and columns
- Can be declared statically or dynamically using `vector<vector<int>>`

```cpp
int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
vector<vector<int>> matrix(2, vector<int>(3, 0)); // dynamic 2D array
```

### ✅ Operations

- **Input/Output** using nested loops
- **Row-wise and Column-wise Traversal**
- **Matrix Transpose**

```cpp
for (int i = 0; i < n; ++i)
    for (int j = i + 1; j < n; ++j)
        swap(matrix[i][j], matrix[j][i]);
```

- **Matrix Rotation (90° Clockwise)**
  → Transpose + Reverse each row

```cpp
for (int i = 0; i < n; ++i)
    reverse(matrix[i].begin(), matrix[i].end());
```

- **Set Matrix Zeroes**
  If any element is 0, set entire row and column to 0
- **Spiral Order Traversal**
- **Searching in a sorted matrix**

## 💡 Common Array/Matrix-Based Problems

| Problem             | Topic             | Type         |
| ------------------- | ----------------- | ------------ |
| Transpose Matrix    | Matrix            | 🧠 Logic     |
| Rotate Matrix 90°   | Matrix            | In-place     |
| Set Matrix Zeroes   | Matrix            | Optimization |
| Spiral Matrix       | Traversal Pattern | Simulation   |
| Search in 2D Matrix | Binary Search     | Efficient    |
| Number of Islands   | Matrix + DFS/BFS  | Graph Logic  |

## ✅ Summary

Today, I covered:

- Basics and operations of 1D arrays
- Sorting and searching techniques
- Multi-dimensional arrays and matrix operations
- Important 2D problems like transpose, rotate, and search
- Real-world matrix traversal strategies used in interviews
