#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct address{
	char street_name[50];
	int number;
	char city[20];
	char provice[20];
};

struct date_of_birth{
	int date;
	int month;
	int year;
};

struct student{
	char studnumber[10];
	char name[30];
	struct address addr;
	struct date_of_birth dob;
};

int main(){
	struct student mhs[5];
	
	for(int i = 0; i < 5; i++){
        printf("Enter details for student %d:\n", i + 1);

        printf("Student Number: ");
        scanf("%d", &mhs[i].studnumber);

        printf("Name: ");
        scanf(" %[^\n]%*c", mhs[i].name);

        printf("Street: ");
        scanf(" %[^\n]%*c", mhs[i].addr.street_name);

        printf("Street Number: ");
        scanf("%d", &mhs[i].addr.number);

        printf("City: ");
        scanf(" %[^\n]%*c", mhs[i].addr.city);

        printf("Province: ");
        scanf(" %[^\n]%*c", mhs[i].addr.provice);

        printf("Day of Birth: ");
        scanf("%d", &mhs[i].dob.date);

        printf("Month of Birth: ");
        scanf("%d", &mhs[i].dob.month);

        printf("Year of Birth: ");
        scanf("%d", &mhs[i].dob.year);

        printf("\n");
    }

    for(int i = 0; i < 5; i++){
        printf("Details of student %d:\n", i + 1);
        printf("Student Number: %d\n", mhs[i].studnumber);
        printf("Name: %s\n", mhs[i].name);
        printf("Address: %s, %d, %s, %s\n", mhs[i].addr.street_name, mhs[i].addr.number, mhs[i].addr.city, mhs[i].addr.provice);
        printf("Date of Birth: %02d-%02d-%04d\n\n", mhs[i].dob.date, mhs[i].dob.month, mhs[i].dob.year);
    }

    return 0;
}
