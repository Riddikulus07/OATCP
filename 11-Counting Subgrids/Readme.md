# Counting Subgrids

This repository contains a C++ implementation for counting subgrids in a given matrix. The problem involves counting the number of subgrids in a matrix where each subgrid consists of only 1s.

## Algorithm Overview

The algorithm follows these steps:

1. Read the input matrix `b` from the input file `sample_in.txt`.
2. Calculate the dimensions `n` of the input matrix.
3. Initialize an empty vector `row` of size `n` to store the integer representation of each row of the matrix.
4. Convert each row of the matrix into an integer representation by treating each row as a binary number.
5. Iterate through each pair of rows in the matrix and count the number of common set bits between them using the bitwise AND operation.
6. Calculate the number of subgrids formed by the common set bits by using the formula `(bits * (bits - 1)) / 2`.
7. Add the count of subgrids formed by each pair of rows to the total count.
8. Output the total count of subgrids to the output file `sample_out.txt`.

## Implementation Details

The implementation is done in C++ and consists of a single main function. Here are the key points:

- Read the input matrix `b` from the input file `sample_in.txt`.
- Convert each row of the matrix into an integer representation.
- Iterate through each pair of rows and count the number of common set bits.
- Calculate the number of subgrids formed by each pair of rows and add them to the total count.
- Output the total count of subgrids to the output file `sample_out.txt`.

## Example

Suppose we have the following input:

```
Input:
3
1 0 1
1 1 1
1 1 0
```

Using the algorithm described above, the total count of subgrids formed by 1s in the given matrix is 14.

## Conclusion

This algorithm efficiently solves the problem of counting subgrids in a given matrix where each subgrid consists of only 1s.