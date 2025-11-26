//Take two structs as input and check if they are identical.
#include <stdio.h>
#include <string.h>

// Define a struct
struct Student {
    int id;
    char name[50];
    float marks;
};

// Function to compare two structs
int areIdentical(struct Student s1, struct Student s2) {
    if (s1.id == s2.id &&
        strcmp(s1.name, s2.name) == 0 &&
        s1.marks == s2.marks) {
        return 1; 
    }
    return 0; 
}

int main() {
    struct Student student1, student2;

    
    printf("Enter details for Student 1:\n");
    printf("ID: ");
    scanf("%d", &student1.id);
    printf("Name: ");
    scanf("%s", student1.name);
    printf("Marks: ");
    scanf("%f", &student1.marks);

    
    printf("\nEnter details for Student 2:\n");
    printf("ID: ");
    scanf("%d", &student2.id);
    printf("Name: ");
    scanf("%s", student2.name);
    printf("Marks: ");
    scanf("%f", &student2.marks);

    
    if (areIdentical(student1, student2)) {
        printf("\nThe two students are IDENTICAL.\n");
    } else {
        printf("\nThe two students are NOT identical.\n");
    }

    return 0;
}

