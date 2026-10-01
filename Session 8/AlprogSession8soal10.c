#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);
	
	for(int j = 1; j <= num; j++){
		printf("%d ", (j & 7 == 0) ? 7 : j & 7);
	}
	
	return 0;
}

