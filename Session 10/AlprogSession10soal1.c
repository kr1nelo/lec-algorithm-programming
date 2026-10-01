#include <stdio.h>

int main(){
    int arr[10];
    int max;
	int min;
	int sum = 0;
    float ave;

    for (int i = 0; i < 10; i++)
	{
        scanf("%d", &arr[i]);
        sum += arr[i];
        if (i == 0)
		{
            max = min = arr[i];
        } else
		{
            if (arr[i] > max) max = arr[i];
            if (arr[i] < min) min = arr[i];
        }
    }

    ave = sum / 10.0;

    printf("Nilai Maksimum: %d\n", max);
    printf("Nilai Minimum: %d\n", min);
    printf("Nilai rata-rata: %.2f\n", ave);

    return 0;
}
