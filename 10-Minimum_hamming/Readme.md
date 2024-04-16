# Minimum Hamming

This repository contains a C++ implementation for solving the minimum hamming problem. The problem involves finding the minimum Hamming distance between all pairs of integers in an array.

## Algorithm Overview

The algorithm follows these steps:

1. Read the input vector `v` containing integers from the input file `input2.txt`.
2. Calculate the size `n` of the input vector.
3. Initialize a variable `ans` to store the minimum Hamming distance.
4. Iterate through each bit position from 0 to 31:
   - Initialize a variable `cnt` to count the number of integers with the bit set at the current bit position.
   - Iterate through each integer in the input vector and count the number of integers with the bit set at the current bit position.
   - Update `ans` by adding the product of `cnt` and `(n - cnt)`.
5. Output the result `ans` to the output file `output2.txt`.

## Implementation Details

The implementation is done in C++ and consists of a single main function. Here are the key points:

- Read the input vector `v` from the input file `input2.txt`.
- Calculate the size `n` of the input vector.
- Iterate through each bit position and count the number of integers with the bit set at that position.
- Calculate the minimum Hamming distance using the counts of set and unset bits.
- Output the result to the output file `output2.txt`.

## Example

Suppose we have the following input:

```
Input:
1 3 6
```
```
Output:
4
```
Using the algorithm described above, the minimum Hamming distance between all pairs of integers in the array [1, 3, 6] is 4.

## Conclusion

This algorithm efficiently solves the problem of finding the minimum Hamming distance between all pairs of integers in an array.
