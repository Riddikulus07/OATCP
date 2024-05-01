# Valid Arrangement

This repository contains a C++ implementation for finding a valid arrangement of pairs.

## Algorithm Overview

The algorithm aims to find a valid arrangement of pairs provided as input. Here's an overview of the approach:

1. Construct a graph from the pairs where each node represents a number and an edge exists between two nodes if they form a pair.
2. Determine the source node in the graph. The source node is the one with one more outgoing edge than incoming edges.
3. Perform a depth-first search (DFS) starting from the source node to find a path that traverses all edges exactly once. Use a stack to keep track of the current path.
4. If a valid path is found, construct the arrangement by adding pairs corresponding to the edges traversed in the path.
5. Return the valid arrangement if found, otherwise indicate that no valid arrangement exists.

## Implementation Details

The implementation is done in C++ and consists of the following key points:

- Read the number of pairs `n` and the pairs from the input file.
- Construct a graph from the pairs and determine the source node.
- Perform DFS to find a valid path covering all edges exactly once.
- If a valid path is found, construct the arrangement from the path and output it.
- If no valid arrangement is found, indicate it in the output.

## Example

Suppose we have the following input pairs:

```
Input:
6
1 2
1 3
2 4
3 5
4 6
5 6
```

The algorithm might produce the following valid arrangement:

```
Output:
1 2
2 4
4 6
6 5
5 3
3 1
```

This indicates a valid arrangement of pairs where each pair connects two consecutive numbers.

## Usage

1. Create an input file `input.txt` containing the number of pairs `n` followed by `n` pairs of numbers separated by spaces.
2. Run the program to find the valid arrangement.
3. The program will output the valid arrangement to the `output.txt` file.

