#include "matrix.hpp"

//template <typename T>
void MatSub(int **Input1, int **Input2, int** Output, _tSize MatSize)
{
    #if DEBUG
    std::cout << "Entered MatSub Funciton" << std::endl;
    #endif
    
    int i, j;
    for (i = 0; i < MatSize.row ; i++)
    {
        for (j =0; j < MatSize.col; j ++)
        {
            Output[i][j] = Input1[i][j] - Input2[i][j];
        }
    }

}

