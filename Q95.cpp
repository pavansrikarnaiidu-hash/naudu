//Return a structure containing top student's details from a function.
#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

struct Student getTopStudent() {
    struct Student top;

    snprintf(top.name, sizeof(top.name), "Rahul Sharma");
    top.rollNo = 101;
    top.marks = 95.5;

    return top;  
}

int main() {
    struct Student s;

    
    s = getTopStudent();

    
    printf("Top Student Details:\n");
    printf("Name   : %s\n", s.name);
    printf("Roll No: %d\n", s.rollNo);
    printf("Marks  : %.2f\n", s.marks);

    return 0;
}

