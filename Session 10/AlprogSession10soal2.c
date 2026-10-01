#include <stdio.h>
#include <string.h>

int main(){
	char nama[20];
	printf("Ketik Sesuatu : ");
	scanf("%[^\n]", &nama);
	
	for(int i = 0; i < strlen(nama); i++)
	{
		printf("%c", nama[strlen(nama)-1 -i]);
	}
	
	return 0;
}
