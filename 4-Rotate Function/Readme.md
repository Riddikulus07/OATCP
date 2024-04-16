# Rotate Function

This repository contains a C++ implementation of a rotate function, which computes the maximum value of the function F after performing rotations on an array.

## Overview

The rotate function F is defined as follows:
F(0) = (a[0] * 0) + (a[1] * 1) + (a[2] * 2) + ... + (a[n-1] * (n-1))
F(1) = (a[n-1] * 0) + (a[0] * 1) + (a[1] * 2) + ... + (a[n-2] * (n-1))
F(2) = (a[n-2] * 0) + (a[n-1] * 1) + (a[0] * 2) + ... + (a[n-3] * (n-1))
...
F(n-1) = (a[1] * 0) + (a[2] * 1) + (a[3] * 2) + ... + (a[0] * (n-1))

The goal of the rotate function is to find the maximum value of F after performing rotations on the array 'a'.

## Implementation Details

The implementation is done in C++ and consists of the following steps:
1. Read the size of the array 'n'.
2. Read the elements of the array 'a'.
3. Compute the initial value of F(0).
4. Compute the value of F(i) for each rotation 'i' from 1 to 'n-1'.
5. Keep track of the maximum value of F encountered.
6. Output the maximum value of F.


## Example

Suppose we have the following array:

```
Input:
5
4 3 2 6 7

Output:
38
```

This indicates that after performing rotations on the array [4, 3, 2, 6, 7], the maximum value of the rotate function is 38.
