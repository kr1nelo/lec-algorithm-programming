#include <stdio.h>

struct studentScore{
    char nim[11];
    char name[30];
    float gpa;
};

int main(){
    struct studentScore mhs[5];

    for(int i = 0; i < 5; i++){
        printf("Masukkan NIM mahasiswa %d: ", i + 1);
        scanf("%s", mhs[i].nim);
        printf("Masukkan nama mahasiswa %d: ", i + 1);
        scanf("%s", mhs[i].name);
        printf("Masukkan GPA mahasiswa %d: ", i + 1);
        scanf("%f", &mhs[i].gpa);
    }

    printf("Mahasiswa dengan GPA >= 3.0:\n");
    for(int i = 0; i < 5; i++){
        if(mhs[i].gpa >= 3.0){
            printf("%s\n", mhs[i].name);
        }
    }

    printf("Mahasiswa dengan GPA < 3.0:\n");
    for(int i = 0; i < 5; i++){
        if(mhs[i].gpa < 3.0){
            printf("%s\n", mhs[i].name);
        }
    }

    return 0;
}
