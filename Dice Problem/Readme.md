# Dice Sum

This repository contains a C++ implementation for computing the number of ways to obtain a desired sum by throwing a dice.

## Algorithm Overview

We create a vector dp of integers to store the number of ways to obtain each sum from 0 to n, initialized to 0.

There is only one way to get a sum of 0, which is by not throwing the dice. So, we set dp[0] to 1.

We iterate through each possible outcome of throwing a dice (from 1 to 6). For each outcome i, we update the dp vector to count the number of ways to obtain each sum from i to n.

Within the outer loop, we have an inner loop that iterates through the possible sums from i to n. We update dp[j] by adding the number of ways to obtain the sum j - i.

After updating all the counts, we return the value of dp[n], which represents the number of ways to obtain the desired sum n using the outcomes of throwing the dice.

In the main function, we read the number of test cases t. For each test case, we read the target sum sum. If the sum is negative (which is not possible), we print "Not Possible". Otherwise, we compute and print the number of ways to obtain the sum using the `countWays` function.

## Example

Suppose we have the following test case:

```
Input:
2
7
-2

Output:
21
Not Possible
```

This indicates that for a target sum of 7, there are 21 ways to obtain it by throwing a dice. However, a negative sum (-2) is not possible.

