
# my_sokoban

The goal of this project is to create a sokoban, a type of transport puzzle, in which
the player pushes boxes or crates around in a warehouse, trying to get them to
storage locations.

Sokoban was created in 1981 by Hiroyuki Imabayashi, and published in 1982 by
Thinking Rabbit, a software house based in Takarazuka, Japan.

![Alt text](image/exemple.gif?raw=true "Title")
## Description 📜

What are the rules:
- If all boxes are on storage locations, the player wins and the program must return 0.
- If none of the boxes can be moved anymore, he loses and the program must return 1.
- The game must be reset by pressing the space bar.
- Redimensioning the terminal must be handled. As long as the terminal is too small to display the whole map, a centered message, asking the user to enlarge the terminal, must be displayed.
- The game must be able to be played with the arrow keys (LEFT, RIGHT, UP and DOWN).
- A valid map can only contains the characters SPACE, ‘\n’, ‘#’, ‘X’, ‘O’ and ‘P’.
- If an invalid map is supplied, the program must exit with an error.

During this project we only had the right to some functions that are here.


![Alt text](image/auth.png?raw=true "Title")


Here is a typical map

```bash
###########
#    P    #
#####     #
#O  O  O  #
# X   X   #
#     X   #
#         #
###########
```

The P represents the player he can move up down left right.

The # represents the walls, if the player tries to enter it will be blocked and will not be able to pass.

The O represent the locations of the barrels, they must all be overflown by barrels to win the game.

The X represent the barrels, they must all be pushed onto the O by the player through these moves.

If all the barrels are blocked, like here, then the game ends and you lose.

If you know you've already lost or you made a bad move, you can restart the game by pressing space.


```bash
###########
#    P   X#
#####     #
#O  O  O  #
#         #
#         #
#X       X#
###########
```
## Tests

There are also unit tests. Unit tests are used to verify that functions work separately from other functions. So we can ask him for complicated cases to check that he manages them.
These tests use Criterion, Criterion is a dead-simple, non-intrusive unit testing framework for C and C++.

![Alt text](image/test.png?raw=true "Title")

To use them :

```bash
  make tests_run
```
## Installation 🔌

Install my_rpg

```bash
  git clone git@github.com:Pablodeibar/my_sokoban.git
  cd my_sokoban
  make
```
    
## Start playing 🎬


```bash
  ./my_sokoban map.txt
```

You must have a map to play. You can create it yourself by taking the example of the one presented above.