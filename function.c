#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

void testFunc(int test_twoDimArray[3][3], bool isMagicSquare) {
    //check first row
    int sum = 0;
    int check_LoShu = 0;
    for (int i = 0; i < 3; i++) {
        sum += test_twoDimArray[0][i];
    }
    if (sum == 15) {
        printf("First line is Lo Shu\n");
        check_LoShu += 1;
    }
    else 
        printf("First line is NOT Lo Shu\n");
    //check second row
    sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += test_twoDimArray[1][i];
    }
    if (sum == 15) {
        printf("Second line is Lo Shu\n");
        check_LoShu += 1;
    }
    else 
        printf("Second line is NOT Lo Shu\n");

    //check third row
    sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += test_twoDimArray[2][i];
    }
    if (sum == 15) {
        printf("Third line is Lo Shu\n");
        check_LoShu += 1;
    }
    else 
        printf("Third line is NOT Lo Shu\n");

    //check first column
    sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += test_twoDimArray[i][0];
    }
    if (sum == 15) {
        printf("First column is Lo Shu\n");
        check_LoShu += 1;
    }
    else 
        printf("First column is NOT Lo Shu\n");

    //check second column
    sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += test_twoDimArray[i][1];
    }
    if (sum == 15) {
        printf("Second column is Lo Shu\n");
        check_LoShu += 1;
    }
    else 
        printf("Second column is NOT Lo Shu\n");

    //check third column
    sum = 0;
    for (int i = 0; i < 3; i++) {
        sum += test_twoDimArray[i][2];
    }
    if (sum == 15) {
        printf("First line is Lo Shu\n");
        check_LoShu += 1;
    }
    else 
        printf("First line is NOT Lo Shu\n");

    //check diagonal
    sum = 0;
    int j = 0;
    for (int i = 0; i < 3; i++) {
        sum += test_twoDimArray[i][j];
        j++;
    }
    if (sum == 15) {
        printf("Diagonal left is Lo Shu\n");
        check_LoShu += 1;
    }
    else 
        printf("Diagonal left is NOT Lo Shu\n");

    sum = 0;
    j = 2;
    for (int i = 0; i < 3; i++) {
        sum += test_twoDimArray[i][j];
        j--;
    }
    if (sum == 15) {
        printf("Diagonal right is Lo Shu\n");
        check_LoShu += 1;
    }
    else 
        printf("Diagonal right is NOT Lo Shu\n");

    if (check_LoShu == 8) {
        printf("This test array is Lo Shu Magic Square\n");
        isMagicSquare = true;
    }
    else
        printf("This test array is NOT Lo Shu Magic Square\n");
}

int getRandomNum() {
    srand(time(NULL));
    int num = (rand() % 9) + 1;
    return num;
}

void getArray(int num, int twoDimArray[3][3]) {
    bool numExist = false;
    do {
        // printf("Random number is: %i\n", num);
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (twoDimArray[i][j] != num && twoDimArray[i][j] == 0) {
                    twoDimArray[i][j] = num;
                    numExist = true;
                    num = getRandomNum();
                    break;
                }
                else if (twoDimArray[i][j] == num) {
                    numExist = true;
                    num = getRandomNum();
                    break;
                }
            }
            numExist = false;
        }
    } while (numExist);
}

void displayArray(int twoDimArray[3][3]) {
    for (int i = 0; i < 3; i++) {
        printf("[");
        for (int j = 0; j < 3; j++) {
            if (j == 2) 
                printf("%i", twoDimArray[i][j]);
            else
                printf("%i ",twoDimArray[i][j]);
        }
        printf("]");
    }
}