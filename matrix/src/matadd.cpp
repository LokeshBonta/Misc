#include<iostream>

typedef struct matsize{
    int row;
    int col;
} _tSize;


template <typename T>
void MatAdd(T **Input1, T **Input2, T** Output, _tSize MatSize)
{
    int i, j;
    for (i = 0; i < MatSize.row ; i++)
    {
        for (j =0; j < MatSize.col; j ++)
        {
            Output[i][j] = Input1[i][j] + Input2[i][j];
        }
    }

}

template <typename T>
void PrintMatrix(T **Input,_tSize matSize)
{
   cout << "Elements of the matrix are " << std::endl;
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


int main()
{
int rows = 3;
int cols = 2; 

_tSize matsize;
matsize.col = 2;
matsize.row = 3;
/* Allocation of Matrices */
int** input1 = new int*[rows];
for(int i = 0; i < rows; ++i)
    input1[i] = new int[cols];

int** input2 = new int*[rows];
for(int i = 0; i < rows; ++i)
    input2[i] = new int[cols];

int** output = new int*[rows];
for(int i = 0; i < rows; ++i)
    output[i] = new int[cols];

/* Take input to the matrices from User */
std::cout << "Enter the elements for the first array" << std::endl;
for (int i =0; i< rows; i++){
    for (int j =0; j < cols ; j++){
        std::cin >> input1[i][j];
    }
}

std::cout << "Enter the elements for the second array" << std::endl;

for (int i =0; i< rows; i++){
    for (int j =0; j < cols ; j++){
        std::cin >> input2[i][j];
    }
}
/* Doing Operation */
MatAdd(input1, input2, output, matsize);
PrintMatrix(output, matsize);

/* Deallocating the Matrices */
for(int i = 0; i < rows; ++i)
    delete[] output[i];
    delete[] output;

for(int i = 0; i < rows; ++i)
    delete[] input2[i];
    delete[] input2;

for(int i = 0; i < rows; ++i)
    delete[] input1[i];
    delete[] input1;


return 0;

}