#include <stdio.h>
#include <stdlib.h>

void delete_file(const char *file_name){
    if(remove(file_name) == 0){
        printf("File '%s' berhasil dihapus\n", file_name);
    } else {
        printf("Error : Tidak dapat menghapus file '%s'\n", file_name);
    }
}

int main(){
    char file_name[100];

    printf("Masukkan nama file yang akan dihapus: ");
    scanf("%s", file_name);

    delete_file(file_name);

    return 0;
}
