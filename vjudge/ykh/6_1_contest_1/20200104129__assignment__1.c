#include <stdio.h>

int main() {
    FILE *inputFile, *outputFile;
    char currentChar, nextChar;

    // Open input file in read mode and output file in write mode
    inputFile = fopen("input1.c", "r");
    outputFile = fopen("output.txt", "w");

    // Check if input file is successfully opened
    if (!inputFile) {
        printf("File cannot be opened!\n");
        return 1;
    }

    // Process each character in the input file
    while ((currentChar = fgetc(inputFile)) != EOF) {
        // Check for the beginning of a comment
        if (currentChar == '/') {
            nextChar = fgetc(inputFile);

            // Single-line comment
            if (nextChar == '/') {
                // Skip characters until the end of the line
                while ((nextChar = fgetc(inputFile)) != '\n');
            } 
            // Multi-line comment
            else if (nextChar == '*') {
                // Skip characters until the end of the comment
                while ((nextChar = fgetc(inputFile)) != '*' && (nextChar = fgetc(inputFile)) != '/');
            }
        } 
        // Handle spaces
        else if (currentChar == ' ') {
            nextChar = fgetc(inputFile);

            // Multiple spaces
            if (nextChar == ' ') {
                // Skip consecutive spaces
                while ((nextChar = fgetc(inputFile)) == ' ');
                fputc(' ', outputFile);
                fputc(nextChar, outputFile);
            } 
            // Space before '(' or a non-space character
            else if (nextChar == '(' || nextChar != ' ') {
                fputc(currentChar, outputFile);
                fputc(nextChar, outputFile);
            }
        } 
        // Handle non-newline characters
        else if (currentChar != '\n') {
            fputc(currentChar, outputFile);
        }
    }

    // Close the input and output files
    fclose(inputFile);
    fclose(outputFile);

    // Open the output file in read mode and print its contents
    outputFile = fopen("output.txt", "r");
    while ((currentChar = fgetc(outputFile)) != EOF) {
        printf("%c", currentChar);
    }
    fclose(outputFile);

    return 0;
}
