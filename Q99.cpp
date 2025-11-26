//Use malloc() to allocate structure memory dynamically and print details.
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    char name[50];
};

int main() {
    struct Student *s;

    
    s = (struct Student*) malloc(sizeof(struct Student));

    
    printf("Enter roll number: ");
    scanf("%d", &s->roll);
    printf("Enter name: ");
    scanf("%s", s->name);

    
    printf("\nStudent Details:\n");
    printf("Roll: %d\n", s->roll);
    printf("Name: %s\n", s->name);

    
    free(s);

    return 0;
}

