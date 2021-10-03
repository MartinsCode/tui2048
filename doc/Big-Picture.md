
# The Big Picture

- A game
- Maybe a title screen
- a main loop waiting for input
- calculating input (new field)
- exiting, when full
- spawning new tile
- repeat loop
- maybe recognize highscore or something

There is not much more to it. I guess.

## How to internally structure the data?

Most should not be a problem:
- A title screen? Some string or so
- A Highscore? Well, let's use some hash (User -> score), maybe even two arrays.

The main problem is structure and layout of the game board.

Well. In most oo languages one would create a table or so.

I guess, we simply use an array[4,4] of int. Instead of using the whole
numbers, we simply use exponentials to the power of two. (So a two on the tile
is represented by a 1 in the array.)

This leads us to some wonderful algorithm:

- If tile is zero, then it is empty.
- If adjacent tiles are pushed and of some number, then first is incremented by
  one, second is deleted (zeroed).
- Next found tile is moved in given direction, until match or no more zero.

This test has to be done for all columns/rows, depending on direction given.

