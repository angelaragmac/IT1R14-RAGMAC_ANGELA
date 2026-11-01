#include <stdio.h>

int main() {
    FILE *fp;                           
    int count, age, i;
    char name[50], course[50], line[100];

    
    printf("Writing Student Database:\n");
    printf("How many students do you want to record? ");
    scanf("%d", &count);
    getchar();                         

    fp = fopen("student_records.txt", "w");     
    if (fp == NULL) {
        printf("Error: could not open the file.\n");
        return 1;
    }

    for (i = 1; i <= count; i++) {
        printf("\nStudent %d\n", i);

        printf("Enter Name: ");
        fgets(name, sizeof(name), stdin);      

        printf("Enter Age: ");
        scanf("%d", &age);
        getchar();                              

        printf("Enter Course: ");
        fgets(course, sizeof(course), stdin);

        fprintf(fp, "Student %d\n", i);
        fprintf(fp, "Name: %s", name);         
        fprintf(fp, "Age: %d\n", age);
        fprintf(fp, "Course: %s", course);      
        fprintf(fp, "____________________\n\n");
    }

    fclose(fp);                               
    printf("\nStudent database successfully saved to file.\n");

 
    fp = fopen("student_records.txt", "r");     
    if (fp == NULL) {
        printf("Error: could not open the file.\n");
        return 1;
    }

    printf("\nReading Student Database:\n\n");
    while (fgets(line, sizeof(line), fp) != NULL) {
        printf("%s", line);                    
    }

    fclose(fp);
    return 0;
}
