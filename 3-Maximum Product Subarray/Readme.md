# Maximum Product of Subarray

This repository contains a C++ implementation for finding the maximum product of a subarray within an array.

## Algorithm Overview

The maximum product of subarray problem is solved using a dynamic programming approach. The algorithm follows these steps:

1. Initialize two variables `max_prod` and `min_prod` to store the maximum and minimum product of subarrays ending at the current index, respectively.
2. Initialize a variable `max_so_far` to store the maximum product found so far.
3. Iterate through each element of the array:
   - Update `max_prod` and `min_prod` by considering three cases: multiplying the current element with `max_prod`, `min_prod`, or the current element itself.
   - Update `max_so_far` with the maximum of `max_so_far` and `max_prod`.
4. Return `max_so_far` as the result.

## Implementation Details

The implementation is done in C++ and consists of a single main function. Here are the key points:

- Read the size of the array `n`.
- Read the elements of the array `nums`.
- Initialize `max_prod`, `min_prod`, and `max_so_far`.
- Iterate through the array to update `max_prod`, `min_prod`, and `max_so_far`.
- Output the value of `max_so_far`.


## Example

Suppose we have the following array:

```
Input:
6
2 3 -2 4 -1 0

Output:
48
```

This indicates that the maximum product of a subarray within the array [2, 3, -2, 4, -1, 0] is 48.

