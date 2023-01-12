# Skyscrapers-puzzle

[Skyscrapers](https://www.puzzle-skyscrapers.com/) also known as "Towers" is a logic puzzle with simple rules and challenging solutions.

The rules are simple.
The objective is to place skyscrapers in all cells on the grid according to the rules:
- The height of the skyscrapers is from 1 to the size of the grid i.e. 1 to 4 for a 4x4 puzzle.
- You cannot have two skyscrapers with the same height on the same row or column.
- The numbers on the sides of the grid indicate how many skyscrapers would you see if you look in the direction of the arrow.
Place numbers in each cell to indicate the height of the skyscrapers.

Here is a C implementation of a program aiming at solving any skyscrapers puzzles. The program can be run from the command line by inserting, 
in the following order, the height of the skyscrapers:
- row above
- row beloq
- column to the left
- column to the right.
