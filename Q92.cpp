//Store details of 5 students in an array of structures and print all
#include <stdio.h>

// Define structure for student
struct Student {
    int rollNo;
    char name[50];
    float marks;
};

int main() {
    struct Student students[5];  // Array of 5 students
    int i;

    // Input details of 5 students
    for(i = 0; i < 5; i++) {
        printf("Enter details of student %d:\n", i+1);
        printf("Roll No: ");
        scanf("%d", &students[i].rollNo);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }

    // Print details of all students
    printf("\n--- Student Details ---\n");
    for(i = 0; i < 5; i++) {
        printf("Student %d:\n", i+1);
        printf("Roll No: %d\n", students[i].rollNo);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("----------------------\n");
    }

    return 0;
}

