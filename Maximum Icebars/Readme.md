# Maximum Ice Bars

This repository contains an algorithm to find the maximum number of ice cream bars a boy can purchase given his budget and the prices of available ice cream bars.

## Algorithm Overview

The algorithm for determining the maximum number of ice cream bars the boy can buy is as follows:

1. Arrange the array `costs` in ascending order to have the ice cream bars sorted by price.
2. Initialize a variable `ans` to 0 to track the quantity of ice cream bars purchased.
3. Iterate through each ice cream bar price in the sorted `costs` array.
4. Check if the boy's current amount of coins is less than or equal to the cost of the ice cream bar.
   - If so, increase `ans` by 1 and deduct the price of the ice cream bar from the boy's total coin count.
5. Repeat the above step until the boy runs out of coins or there are no more ice cream bars available for purchase.
6. Finally, return the value of `ans` as the maximum allowed amount of ice cream bars the boy can buy.

This algorithm efficiently determines the maximum number of ice cream bars the boy can buy given his budget.

## Implementation Details

The implementation can be done in any programming language, such as C++, Python, or Java. Here are the key points:

- Read the number of ice cream bars available and the boy's budget.
- Read the prices of the ice cream bars into an array `costs`.
- Implement the algorithm to determine the maximum number of ice cream bars the boy can buy.
- Output the result, i.e., the maximum allowed amount of ice cream bars.

## Example

Suppose we have the following input:

```
Number of ice cream bars available: 5
Boy's budget: 20
Prices of ice cream bars: [10, 5, 7, 15, 3]
```

Using the algorithm described above, the maximum number of ice cream bars the boy can buy is 3, with a total cost of 10 + 5 + 3 = 18, leaving him with 2 units of currency.

This algorithm efficiently solves the problem of maximizing the number of ice cream bars the boy can buy given his budget and the prices of available ice cream bars.