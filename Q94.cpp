//Write a function that accepts a structure as parameter and prints its members.
#include <stdio.h>


struct Student {
    int id;
    char name[50];
    float marks;
};

void printStudent(struct Student s) {
    printf("Student ID   : %d\n", s.id);
    printf("Student Name : %s\n", s.name);
    printf("Marks        : %.2f\n", s.marks);
}

int main() {
    struct Student stu1 = {101, "Alice", 89.5};

    printStudent(stu1);

    return 0;
}

