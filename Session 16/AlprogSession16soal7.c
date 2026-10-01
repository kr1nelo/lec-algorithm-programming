#include <stdio.h>

union data{
    unsigned int value;
    struct{
        unsigned int byte1 : 8;
        unsigned int byte2 : 8;
        unsigned int byte3 : 8;
        unsigned int byte4 : 8;
    }bytes;
};

void hex(unsigned int num){
    union data Data;
    Data.value = num;
    
    printf("Hexadecimal: %02X %02X %02X %02X\n", Data.bytes.byte4, Data.bytes.byte3, Data.bytes.byte2, Data.bytes.byte1);
}

int main(){
    unsigned int num;
    
    scanf("%d", &num);
    
    hex(num);
    return 0;
}
