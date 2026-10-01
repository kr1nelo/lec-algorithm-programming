#include <stdio.h>
#include <string.h>

int main(){
    char S[1001];
	int i;
    int j;
    
    scanf("%s", S);
        
    int pjg = strlen(S);
    int value = 1;

    for(j = 0; j < pjg / 2; j++)
	{ 
	if(S[j] != S[pjg - j - 1])
	{
    	value = 0;
    	break;
    }
    }

    if(value)
	{
    printf("ini kata palindrome");
    } else
	{
    printf("ini bukan kata palindrome");
	}
        printf("\n");
        
        return 0;
    }
