#include "matrix.hpp"

//template <typename T>
void PrintMatrix(int **Input,_tSize matSize)
{
   std::cout << "Elements of the matrix are " << std::endl;
   int i, j;
   for (i = 0; i < matSize.row ; i++)
    {
        for (j =0; j < matSize.col; j ++)
        {
            std::cout << Input[i][j] << "\t";
        }
        std::cout << std::endl;
    }

}



