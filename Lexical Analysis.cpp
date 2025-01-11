#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_KEYWORDS 10

// List of keywords
const char* keywords[MAX_KEYWORDS] = {
    "int", "float", "if", "else", "while", "do", "for", "return", "char", "double"
};

// Function prototypes
int isKeyword(char* word);
int isOperator(char ch);

int main() {
    char filename[100], ch, buffer[50];
    FILE* file;
    int i = 0;

    printf("Enter the input file name: ");
    scanf("%s", filename);

    // Open file for reading
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s.\n", filename);
        exit(1);
    }

    printf("\nLexical Analysis Output:\n");
    printf("-------------------------\n");

    while ((ch = fgetc(file)) != EOF) {
        // Check for operators
        if (isOperator(ch)) {
            printf("Operator: %c\n", ch);
        }

        // Check for identifiers and keywords
        else if (isalnum(ch)) {
            buffer[i++] = ch;
        }

        // Delimiter or whitespace indicates end of a word
        else if (isspace(ch) || ch == ';' || ch == ',') {
            if (i != 0) {
                buffer[i] = '\0';
                i = 0;

                if (isKeyword(buffer)) {
                    printf("Keyword: %s\n", buffer);
                } else {
                    printf("Identifier: %s\n", buffer);
                }
            }
        }
    }

    fclose(file);
    return 0;
}

// Function to check if a word is a keyword
int isKeyword(char* word) {
    for (int i = 0; i < MAX_KEYWORDS; i++) {
        if (strcmp(word, keywords[i]) == 0) {
            return 1;
        }
    }
    return 0;
}

// Function to check if a character is an operator
int isOperator(char ch) {
    char operators[] = "+-*/%=<>&|";
    for (int i = 0; i < strlen(operators); i++) {
        if (ch == operators[i]) {
            return 1;
        }
    }
    return 0;
}

