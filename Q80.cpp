//Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.
#include <stdio.h>
#include <stdlib.h>

#define MAX 100

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[MAX];
    int n, i;

    FILE *fp;

    
    printf("Enter number of students: ");
    scanf("%d", &n);

    
    for (i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Roll Number: ");
        scanf("%d", &students[i].roll);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
    }

    // Write to file
    fp = fopen("students.txt", "w");
    if (fp == NULL) {
        printf("Error opening file for writing.\n");
        exit(1);
    }

    for (i = 0; i < n; i++) {
        fprintf(fp, "%s %d %.2f\n", students[i].name, students[i].roll, students[i].marks);
    }

    fclose(fp);

    // Read from file
    fp = fopen("students.txt", "r");
    if (fp == NULL) {
        printf("Error opening file for reading.\n");
        exit(1);
    }

    printf("\nStudent Records:\n");
    while (fscanf(fp, "%s %d %f", students[i].name, &students[i].roll, &students[i].marks) != EOF) {
        printf("Name: %s, Roll: %d, Marks: %.2f\n", students[i].name, students[i].roll, students[i].marks);
        i++;
    }

    fclose(fp);

    return 0;
}

