#include <stdio.h>

void a(int b[], int c){
	for(int i = 0; i < c; i++){
		printf("masukkan angka %d: ", i+1);
		scanf("%d", &b[i]);
	}
	
}

int max(int b[], int c){
	int max = b[0];
	for(int i = 1; i < c; i++){
		if(b[i] > max){
			max = b[i];
		}
	}
	
	return max;
}

int min(int b[], int c){
	int min = b[0];
	for(int i = 1; i < c; i++){
		if(b[i] < min){
			min = b[i];
		}
	}
	
	return min;
}

void hasil(int b[], int c, int max, int min){
	printf("angkanya adalah : ");
	for(int i = 0; i < c; i++){
		printf("%d ", b[i]);
	}
	printf("\nnilai max : %d\n", max);
	printf("nilai min : %d\n", min);
}

int main(){
	int ang[10];
	int c = 10;
	
	a(ang, c);
	
	int x = max(ang, c);
	int y = min(ang, c);
	
	hasil(ang, c, x, y);
	
	return 0;
}
