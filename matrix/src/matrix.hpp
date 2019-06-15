#ifndef MATRIX_HPP
#define MATRIX_HPP

#include<iostream>
typedef struct matsize{
    int row;
    int col;
} _tSize;

void MatAdd(int  **Input1, int **Input2, int** Output, _tSize MatSize);

void PrintMatrix(int **Input,_tSize matSize);


#endif //MATRIX_H