#include <stdio.h>

struct studentScore{
    char nim[11];
    char name[30];
    char subjectCode[5];
    int sks;
    char grade;
};

int grading(char grade){
    switch(grade){
        case 'A': return 4;
        case 'B': return 3;
        case 'C': return 2;
        case 'D': return 1;
        case 'E': return 0;
        default: return 0;
    }
}

float calculateGPA(struct studentScore subjects[], int numSubjects){
    int totalWeight = 0;
    int totalSks = 0;

    for(int i = 0; i < numSubjects; i++){
        totalWeight += grading(subjects[i].grade) * subjects[i].sks;
        totalSks += subjects[i].sks;
    }

    return (float)totalWeight / totalSks;
}

int main(){
    struct studentScore student;
    struct studentScore subjects[5];

    printf("Masukkan NIM: ");
    scanf("%s", student.nim);
    printf("Masukkan nama: ");
    scanf("%s", student.name);

    for(int i = 0; i < 5; i++){
        printf("Masukkan kode mata pelajaran %d: ", i + 1);
        scanf("%s", subjects[i].subjectCode);
        printf("Masukkan SKS untuk mata pelajaran %d: ", i + 1);
        scanf("%d", &subjects[i].sks);
        printf("Masukkan grade untuk mata pelajaran %d: ", i + 1);
        scanf(" %c", &subjects[i].grade);
    }

    printf("\nData Mahasiswa:\n");
    printf("NIM: %s\n", student.nim);
    printf("Nama: %s\n", student.name);
    for(int i = 0; i < 5; i++){
        printf("Mata pelajaran %d:\n", i + 1);
        printf("Kode: %s\n", subjects[i].subjectCode);
        printf("SKS: %d\n", subjects[i].sks);
        printf("Grade: %c\n", subjects[i].grade);
    }

    printf("IPK Siswa: %.2f\n", calculateGPA(subjects, 5));

    return 0;
}
