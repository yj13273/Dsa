# Traversal of 2D Array

Rectangular 2D Array: A rectangular 2D array is a 2D structure where every row has the **same** number of columns.
Non-Rectangular 2D Array: A non-rectangular (jagged) 2D array is a 2D structure where rows have **different** numbers of columns.

Row-Major Order: Store all elements of row 0, then row 1, then row 2, …
Used by C, C++, Java, JS, Python, Rust, Lua, Ruby, Dart.

Column-Major Order: Store all elements of column 0, then column 1, then column 2, …
Used by FORTRAN, MATLAB, R, Julia.

----------

1. Row wise traversal
2. Column wise traversal
3. Reverse row-wise traversal
4. Reverse column-wise traversal
5. Flattened 1D Traversal
6. Flattened 1D Traversal from end
7. Diagonal traversal
8. Anti-diagonal traversal
9. Zig-Zag/ Snake traversal
10. Spiral Traversal (Clockwise)
11. Spiral Traversal (Anticlockwise)
12. Boundary Traversal (Edges Only)

----------


`vector<vector<int>> v = {{ 1,  2,  3,  4},{ 5,  6,  7,  8},{ 9, 10, 11, 12}};  m = rows = 3, n = columns = 4`

1. Row Wise Traversal

```c++
for (int i = 0; i < m; i++){
    for (int j = 0; j < n; j++){
        cout << v[i][j];
    }
}
```

2. Column Wise Traversal
```c++
for (int i = 0; i < n; i++){
    for (int j = 0; j < m; j++){
        cout << v[i][j];
    }
}
```
3. Reverse row-wise traversal

```c++
for (int i = m-1; i >= 0; i--){
    for (int j = n-1; j >= 0; j--){
        cout << v[i][j];
    }
}
```

4. Reverse column-wise traversal

```c++
for (int i = n-1; i >= 0; i--){
    for (int j = m-1; j >= 0; j--){
        cout << v[i][j];
    }
}
```
5. Flattened 1D Traversal

In flattened array, we have **m*n** elements.
indexing: k = 0 ... m*n-1
row (i) = k / n;
col (j) = k % n;

```c++
for (int k = 0; k < m*n; i++){
    cout << v[k / n][k % n];
}
```
6. Flattened 1D Traversal from end

```c++
for (int k = m*n - 1; k >= 0; k--){
    cout << v[k / n][k % n];
}
```

7. **Diagonal Traversal**
A diagonal is a set of elements in a 2D array that lie on a straight line where the row and column indices change together in a fixed pattern.


```c++
vector<vector<int>> v = {
    { 1,  2,  3,  4},
    { 5,  6,  7,  8},
    { 9, 10, 11, 12}
    };  
```

```c++
for (int i = 0; )
```

