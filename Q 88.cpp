//Print all enum names and integer values using a loop.
#include <stdio.h>

enum Colors {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    ORANGE,
    COLOR_COUNT  
};

const char* ColorNames[] = {
    "RED",
    "GREEN",
    "BLUE",
    "YELLOW",
    "ORANGE"
};

int main() {
    for (int i = 0; i < COLOR_COUNT; i++) {
        printf("%s = %d\n", ColorNames[i], i);
    }
    return 0;
}

