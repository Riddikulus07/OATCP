# Brief Words

This repository contains a C++ program for generating brief words from input strings.

## Algorithm Overview

The algorithm aims to generate brief words from given input strings. Here's an overview of the approach:

1. Read the number of input strings `n` and the strings themselves from the input file.
2. Define a recursive function `fx` to generate all possible combinations of brief words from a given string.
3. Iterate over each input string and generate brief words of lengths 1 to 4 using the `fx` function. Store the unique brief words in a set to avoid duplicates.
4. Output the generated brief words for each input string.

## Implementation Details

The implementation is done in C++ and consists of the following key points:

- Read the number of input strings `n` and the strings from the input file.
- Implement a recursive function `fx` to generate brief words of lengths 1 to 4 from a given string.
- Use a set to store unique brief words and avoid duplicates.
- Iterate over each input string, generate brief words, and output them.

## Example

Suppose we have the following input strings:

```
Input:
3
hello
world
code
```

The algorithm might produce the following brief words for each input string:

```
Output:
h
e
l
o
he
el
lo
w
o
r
l
d
wo
or
rl
ld
c
o
d
e
co
od
de
```

## Usage

1. Create an input file `input.txt` containing the number of input strings `n` followed by `n` strings.
2. Run the program to generate the brief words.
3. The program will output the generated brief words to the `output.txt` file.
