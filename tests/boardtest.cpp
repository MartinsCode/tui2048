
#include "boardtest.h"
#include "global.h"

CPPUNIT_TEST_SUITE_REGISTRATION (boardtest);

void boardtest :: setUp (void) {
        for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                        board[i][j] = 2;
                }
        }
}

void boardtest :: tearDown (void) {
}

void boardtest :: clear_board_test (void) {
        clear_board();

        bool cleared = true;

        for (int i = 0; i < 4; i++) {
                for (int j = 0; j < 4; j++) {
                        cleared = cleared && (board[i][j] == 0);
                }
        }

        CPPUNIT_ASSERT_EQUAL (cleared, true);
}


/*
class boardtest : public CPPUNIT_NS :: TestFixture {

        protected:
        void clear_board_test (void);

}
*/
