
#ifndef BOARD_H
#define BOARD_H 1

#include "global.h"

void clear_board();
void shift_board(char direction);
int count_empty_fields();
bool move_possible();
void next_tile(); // add random new tile to board

#endif // BOARD_H
