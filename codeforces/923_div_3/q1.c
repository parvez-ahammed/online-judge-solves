#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int is_valid_identifier(const char* lexeme)
{

    printf("Lexeme: %s\n", lexeme);

    if (lexeme[0] != '_' || !isupper(lexeme[1])) {
        return 0;
    }

    for (int i = 2; lexeme[i] != '\0'; i++) {
        if (!isupper(lexeme[i])) {
            return 0;
        }
    }
    return 1;
}
int main()
{

    FILE* file;
    file = fopen("f.txt", "r");
    if (file == NULL) {
        printf("Error opening file");
        return 1;
    }

    char lexeme[100];
    int identifier_count = 0;
    while (fscanf(file, "%s", lexeme) != EOF) {
        if (is_valid_identifier(lexeme)) {
            identifier_count++;
        }
    }
    fclose(file);
    printf("\nNumber of Identifiers: %d\n", identifier_count);
}
