#include <stdio.h>

int main(){
	int n;
	int a;
	int b;
	scanf("%d", &n);
	scanf("%d", &a);
	scanf("%d", &b);
	
	if (n > 0){
		if (a > b){
		printf("z = %d", a);
		} else {
		printf("z = %d", b);	
		}
	}
	
}
