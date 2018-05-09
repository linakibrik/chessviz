#define CTEST_MAIN

#include <board.h>
#include <check_strokes.h>
#include <ctest.h>

CTEST(Syntax, Correct_Syntax) {
    int result = board_func("e2-e4", 1);
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(Syntax, Incorrect_Syntax) {
    int result = board_func("nb1-a3", 1);
    int expected = -1;
    ASSERT_EQUAL(expected,result);
}

CTEST(P_Move, Correct) {
    int result = board_func("b2-b3", 1);
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(P_Move, Incorrect) {
    int result = board_func("b2-c3", 1);
    int expected = -1;
    ASSERT_EQUAL(expected,result);
}

CTEST(R_Move, Correct) {
    int result = board_func("a1-a5", 1);
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(R_Move, Incorrect) {
    int result = board_func("a1-c3", 1);
    int expected = -1;
    ASSERT_EQUAL(expected,result);
}

CTEST(H_Move, Correct) {
    int result = board_func("b1-c3", 1);
    int expected = 0;
    ASSERT_EQUAL(expected,result);
}

CTEST(H_Move, Incorrect) {
    int result = board_func("b1-b3", 1);
    int expected = -1;
    ASSERT_EQUAL(expected,result);
}

int main(int argc, const char** argv) {
    _board();
    return ctest_main(argc, argv);
}

