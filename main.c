#include "function.c"

void main (void) {
    int twoDimArray_1[3][3] = {
        {4, 9, 2},
        {3, 5, 7},
        {8, 1, 6}
    };

        int twoDimArray_2[3][3] = {
        {0, 0, 0},
        {0, 0, 0},
        {0, 0, 0}
    };
    bool isMagicSquare = false;

    testFunc(twoDimArray_1, isMagicSquare);
    isMagicSquare = false;
    while (isMagicSquare == false) {
        getArray(getRandomNum(), twoDimArray_2);
        testFunc(twoDimArray_2, isMagicSquare);
    }
    displayArray(twoDimArray_2);
    
}