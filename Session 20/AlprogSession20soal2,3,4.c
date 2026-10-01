#include <stdio.h>
#include <stdlib.h>

struct Mhs{
    char name[20];
    int nim;
    float gpa;
};

void displayData(){
    FILE *file = fopen("Mhs.dat", "rb");
    if(file == NULL){
        printf("Error!\n");
    }

    struct Mhs student;
    printf("Nim     Name              GPA\n");
    printf("-----   --------          ----\n");

    while(fread(&student, sizeof(struct Mhs), 1, file) == 1){
        printf("%-8d%-18s%.2f\n", student.nim, student.name, student.gpa);
    }
    fclose(file);
}

void appendData(){
    FILE *file = fopen("Mhs.dat", "ab");
    if(file == NULL){
        printf("Error!\n");
    }

    struct Mhs students[5];
    for(int i = 0; i < 5; i++){
        printf("Masukkan data mahasiswa ke-%d\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("NIM: ");
        scanf("%d", &students[i].nim);
        printf("GPA: ");
        scanf("%f", &students[i].gpa);
        fwrite(&students[i], sizeof(struct Mhs), 1, file);
    }
    fclose(file);
}

int main(){
    int choice;

    do{
        printf("\nMenu:\n");
        printf("1. Tampilkan data dari file\n");
        printf("2. Tambahkan data mahasiswa\n");
        printf("3. Keluar\n");
        printf("Pilihan Anda: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                displayData();
                break;
            case 2:
                appendData();
                break;
            case 3:
                printf("Keluar dari program.\n");
                break;
            default:
                printf("Pilihan tidak valid.\n");
        }
    }while(choice != 3);

    return 0;
}
