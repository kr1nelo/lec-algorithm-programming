#include <stdio.h>
#include <ctype.h>
#include <string.h>

int c(char *str){
    int i = 0;
    int j = 1;

    while(str[i] != '\0')
	{
        if(j && isalpha(str[i]))
		{
            str[i] = toupper(str[i]);
            j = 0;
        } else if(isspace(str[i]))
		{
            j = 1;
        }
        i++;
    }
    
    return 1;
}

int main(){
    char s[100];

    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0';

    c(s);
    printf("%s\n", s);

    return 0;
}
