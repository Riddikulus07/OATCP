# Bersu Ball

This repository contains a C++ implementation for finding the longest subsequence between two sequences where the absolute difference between corresponding elements is at most 1.

## Algorithm Overview

We initialize a dynamic programming (DP) table `dp` of size `101x101` to store the length of the longest subsequence ending at each index `(i, j)` of the two sequences.

We define a recursive function `fn(i, j)` to compute the length of the longest subsequence ending at index `(i, j)`. Within this function:
- If either `i` exceeds the size of the first sequence or `j` exceeds the size of the second sequence, we return 0.
- If the length at index `(i, j)` is already computed (not equal to -1), we return the stored value.
- We consider three cases:
  - If the absolute difference between the elements at indices `i` and `j` is at most 1, we can extend the subsequence by including these elements. We recursively call `fn(i+1, j+1)` and add 1 to the result.
  - We can skip the current element in the first sequence and try to extend the subsequence from the next element in the first sequence by calling `fn(i+1, j)`.
  - Similarly, we can skip the current element in the second sequence and try to extend the subsequence from the next element in the second sequence by calling `fn(i, j+1)`.
- We update the DP table at index `(i, j)` with the maximum of these three cases.

The result is obtained by calling `fn(0, 0)`.

In the `main` function:
- We read the size of the first sequence `n` and the elements of the first sequence.
- We read the size of the second sequence `m` and the elements of the second sequence.
- We sort both sequences.
- We output the length of the longest subsequence computed using the `fn` function.

## Example

Suppose we have the following input:

```
First Sequence:
5
1 4 7 8 10
Second Sequence:
4
2 3 9 11
```

The output will be:

```
2
```

This indicates that the longest subsequence between the given sequences has a length of 2.
