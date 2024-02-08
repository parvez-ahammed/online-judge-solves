#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int invalid(const char* line)
{

    int open_parenthesis_count = 0;
    int comma_count = 0;

    for (int i = 0; line[i] != '\0'; i++) {
        if (line[i] == '(') {
            open_parenthesis_count++;
        } else if (line[i] == ')') {
            open_parenthesis_count--;
        } else if (line[i] == ',') {

            comma_count++;
        }
    }

    if (open_parenthesis_count != 0 || comma_count >= 1) {
        return 1;
    }

    return 0;
}

int main()
{
    FILE* file;

    file = fopen("f1.txt", "r");
    if (file == NULL) {
        printf("Error opening file");
        return 1;
    }

    char line[1000];
    int line_number = 1;
    while (fgets(line, sizeof(line), file) != NULL) {

        if (strstr(line, "for")) {

            if (invalid(line)) {
                printf("Syntax error in for loop at line %d\n", line_number);
            }
        }

        line_number++;
    }

    fclose(file);

    return 0;
}
