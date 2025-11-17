//Show that enums store integers by printing assigned values.
#include <stdio.h>

int main() {
    
    enum Colors { RED, GREEN, BLUE, YELLOW = 10, ORANGE };

    
    printf("RED = %d\n", RED);
    printf("GREEN = %d\n", GREEN);
    printf("BLUE = %d\n", BLUE);
    printf("YELLOW = %d\n", YELLOW);
    printf("ORANGE = %d\n", ORANGE);

    return 0;
}

