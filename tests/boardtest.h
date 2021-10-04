
#ifndef BOARDTEST_H
#define BOARDTEST_H

#include <cppunit/TestFixture.h>
#include <cppunit/extensions/HelperMacros.h>
#include "board.h"

using namespace std;

class boardtest : public CPPUNIT_NS :: TestFixture {
        CPPUNIT_TEST_SUITE (boardtest);
        CPPUNIT_TEST (clear_board_test);
        CPPUNIT_TEST_SUITE_END();

        public:
                void setUp (void);
                void tearDown (void);

        protected:
                void clear_board_test (void);

};

#endif   // # BOARDTEST_H
