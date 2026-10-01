#include <stdio.h>

int main(){
	float IPK;
	
	printf("Masukkan IPK : ");
	scanf("%f", &IPK);
	
	if(3.5 <= IPK && IPK <= 4.0)
	{
		printf("Cumlaude");
	}
	else if(3.0 <= IPK && IPK < 3.5)
	{
		printf("Outstanding");
	}
	else if(2.5 <= IPK && IPK < 3.0)
	{
		printf("Very Good");
	}
	else if(2.0 <= IPK && IPK < 2.5)
	{
		printf("Good");
	}
	else
	{
		printf("Poor");
	}
	
	return 0;
}
