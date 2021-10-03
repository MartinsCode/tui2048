
#include "board.h"

void clear_board() {
        for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                        board[i][j] = 0;
                }
        }
};

void shift_board_up() {
        for (int x = 0; x < 4; x++) { // for each column do ...
                // y = 0 // nothing happens. never.
                // y = 1 the first maybe move

                int y = 1;
                bool moved = false;

                while (y < 4) {
                        if (board[x][y] > 0) { // if not empty, do some work ...
                                if (board[x][y-1] == 0) { // the field before is empty, so move...
                                        board[x][y-1] = board[x][y];
                                        board[x][y] = 0;
                                        moved = true;
                                } else { // previous tile is not free
                                        if (board[x][y-1] == board[x][y]) { // but occupied with same value
                                                board[x][y-1]++;
                                                board[x][y] = 0;
                                                moved = true;
                                        } else { // prev tile is occupied, with another value
                                                // so do nothing.
                                        }
                                }
                        }
                        if (moved) {
                                y=1; // start all over
                                moved = false;
                        } else {
                                y++;
                        }
                }
        }
};

void shift_board_down() {
        // TODO
}

void shift_board_right() {
        // TODO
}

void shift_board_left() {
        // TODO
}

void shift_board(char direction) {
        switch (direction) {
                case 'w': 
                        shift_board_up();
                        break;
                case 's': 
                        shift_board_down();
                        break;
                case 'a': 
                        shift_board_left();
                        break;
                case 'd': 
                        shift_board_right();
                        break;
        }
};

int count_empty_fields() {
        int empty_fields = 0;
        for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                        if (board[i][j] == 0) empty_fields += 1;
                }
        }
        return empty_fields;
};

bool move_possible() {
        return (count_empty_fields() > 0);
};

// add random new tile to board:
void next_tile() {

};

