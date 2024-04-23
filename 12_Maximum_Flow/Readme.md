# Maximum Flow

This repository contains a C++ implementation for finding the maximum flow in a network using the Ford-Fulkerson algorithm.

## Problem Overview

The maximum flow problem deals with finding the maximum amount of flow that can be sent from a source node to a sink node in a flow network. A flow network consists of nodes (vertices) and directed edges (arcs) with capacities representing the maximum amount of flow that can pass through each edge. The goal is to determine the maximum flow that can be sent from the source to the sink while respecting the capacities of the edges and satisfying the conservation of flow at intermediate nodes.

## Algorithm Overview

The Ford-Fulkerson algorithm is a popular method for solving the maximum flow problem. It works by repeatedly finding augmenting paths from the source to the sink and incrementing the flow along these paths until no more augmenting paths can be found. An augmenting path is a path from the source to the sink where the flow can be increased without violating the capacity constraints of the edges.

The algorithm consists of the following steps:

1. Initialize the flow on each edge to zero.
2. While there exists an augmenting path from the source to the sink:
   - Find an augmenting path using a breadth-first search (BFS) or any other path-finding algorithm.
   - Determine the maximum flow that can be sent along the augmenting path.
   - Update the flow along the augmenting path by incrementing the flow on each edge.
3. Return the maximum flow when no more augmenting paths can be found.

## Implementation Details

The implementation provided in this repository is done in C++. Here are the key points:

- Read the input graph from the file `in.txt`, which contains information about the number of nodes, the source node, the sink node, and the capacities of the edges.
- Implement the Ford-Fulkerson algorithm to find the maximum flow in the graph.
- Output the maximum flow to the file `out.txt`.

## Example

Suppose we have the following input graph:

```
Input:
6
1 6
1 2 5
1 4 4
2 3 6
4 2 3
4 5 1
3 5 8
3 6 5
5 6 2
-1
```

This input represents a flow network with 6 nodes, where node 1 is the source and node 6 is the sink. The capacities of the edges are specified in the subsequent lines. Using the Ford-Fulkerson algorithm, the maximum flow in this network is found to be 7.

## Conclusion

This algorithm efficiently solves the maximum flow problem in a flow network using the Ford-Fulkerson algorithm. It can be used in various applications such as network flow optimization, transportation planning, and resource allocation.