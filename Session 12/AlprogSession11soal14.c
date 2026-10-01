#include <stdio.h>

int main(){
    int matrix1[4][4] =
	{
        {5, 7, 8, 2},
        {3, 6, 4, 5},
        {2, 7, 1, 4},
        {1, 3, 9, 6}
    };
    int matrix2[4][4] =
	{
        {3, 5, 4, 8},
        {2, 5, 2, 3},
        {1, 1, 2, 7},
        {3, 7, 6, 1}
    };
    int hasil[4][4] = {0};

    for(int i = 0; i < 4; i++)
	{
        for(int j = 0; j < 4; j++)
		{
            for(int k = 0; k < 4; k++)
			{
                hasil[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }

    printf("Hasil perkalian matriks:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", hasil[i][j]);
        }
        printf("\n");
    }

    return 0;
}
