//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <time.h>

int main() {
    const char *input_date = "09/04/2025";
    struct tm tm_date;

    
    strptime(input_date, "%d/%m/%Y", &tm_date);

    
    char output_date[20];

    strftime(output_date, sizeof(output_date), "%d-%b-%Y", &tm_date);

    printf("Formatted date: %s\n", output_date);

    return 0;
}

