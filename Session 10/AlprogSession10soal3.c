#include <stdio.h>

int main(){
    
    int matrix1[4][4] =
	{
        {3, 4, 5, 5},
        {5, 6, 7, 9},
        {1, 7, 11, 10},
        {2, 8, 9, 4}
    };
    int matrix2[4][4] =
	{
        {1, 2, 3, 4},
        {8, 7, 6, 5},
        {9, 11, 2, 2},
        {6, 5, 4, 3}
    };
    int hasil[4][4];
    
    for(int i = 0; i < 4; i++)
	{
        for(int j = 0; j < 4; j++)
		{
            hasil[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("Hasil Penjumlahan Matriks:\n");
    for(int i = 0; i < 4; i++)
	{
        for(int j = 0; j < 4; j++)
		{
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }

    return 0;
}
