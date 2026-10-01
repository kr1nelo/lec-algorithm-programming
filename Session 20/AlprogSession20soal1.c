#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
  time_t now = time(NULL);
  struct tm *current_time = localtime(&now);

  int current_year = current_time->tm_year + 1900;

  FILE *file = fopen("birthdates.txt", "w");
  if(file == NULL){
    perror("Error!");
    return 1;
  }

  int diatas_51 = 0;
  int diantara_44_51 = 0;
  int diantara_36_43 = 0;
  int diantara_28_35 = 0;
  int dibawah_28 = 0;

  char date[10];
  while(fscanf(file, "%s", date) != EOF){
    int year = atoi(date + 6);
    int age = current_year - year;

    if (age > 51){
      diatas_51++;
    } else if (age >= 44 && age <= 51){
      diantara_44_51++;
    } else if (age >= 36 && age <= 43){
      diantara_36_43++;
    } else if (age >= 28 && age <= 35){
      diantara_28_35++;
    } else if (age < 28){
      dibawah_28++;
    }
  }
  fclose(file);

  printf("Number of employees with age:\n");
  printf("Diatas 51        : %d\n", diatas_51);
  printf("Diantara 44 - 51 : %d\n", diantara_44_51);
  printf("Diantara 36 - 43 : %d\n", diantara_36_43);
  printf("Diantara 28 - 35 : %d\n", diantara_28_35);
  printf("Dibawah 28       : %d\n", dibawah_28);

  return 0;
}
