//Store employee data in a binary file using fwrite() and read using fread().
#include <stdio.h>

struct Employee {
    char name[50];
    int id;
    float salary;
};

int main() {
    struct Employee empWrite = {"Alice", 101, 55000.50};
    struct Employee empRead;

    FILE *fp;

    
    fp = fopen("employee.dat", "wb");
    fwrite(&empWrite, sizeof(struct Employee), 1, fp);
    fclose(fp);

    
    fp = fopen("employee.dat", "rb");
    fread(&empRead, sizeof(struct Employee), 1, fp);
    fclose(fp);

    
    printf("Employee Details:\n");
    printf("Name: %s\n", empRead.name);
    printf("ID: %d\n", empRead.id);
    printf("Salary: %.2f\n", empRead.salary);

    return 0;
}

