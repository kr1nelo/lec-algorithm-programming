#include <stdio.h>
#include <stdlib.h>

void copy_file(const char *source, const char *destination){
    FILE *src_file = fopen(source, "rb");
    if(src_file == NULL){
        printf("Error : '%s'.\n", source);
        return;
    }

    FILE *dest_file = fopen(destination, "wb");
    if(dest_file == NULL){
        printf("Error : '%s'.\n", destination);
        fclose(src_file);
        return;
    }

    char buffer[1024];
    size_t bytes_read;

    while((bytes_read = fread(buffer, 1, sizeof(buffer), src_file)) > 0){
        fwrite(buffer, 1, bytes_read, dest_file);
    }

    printf("File berhasil disalin dari '%s' ke '%s'.\n", source, destination);

    fclose(src_file);
    fclose(dest_file);
}

int main(){
    char source[100];
	char destination[100];

    printf("Masukkan nama file sumber: ");
    scanf("%s", source);
    printf("Masukkan nama file tujuan: ");
    scanf("%s", destination);

    copy_file(source, destination);

    return 0;
}
