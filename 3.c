#include <stdio.h>
#include <string.h>

int main() {
    char grid[3][10] = {
        "HELLOWORD",
        "ABCDEFGHJ",
        "KLMNOPQRS"
    };
    char word[10];
    char ch;
    char firstColumn[4];
    int count = 0;

    printf("Enter word to search in first row: ");
    gets(word);

    if (strstr(grid[0], word) != NULL)
        printf("Word '%s' found in first row!\n", word);
    else
        printf("Word '%s' not found in first row.\n", word);

    printf("\nEnter character to count in grid: ");
    scanf(" %c", &ch);

    for (int i = 0; i < 3; i++)
        for (int j = 0; j < strlen(grid[i]); j++)
            if (grid[i][j] == ch)
                count++;

    printf("Character '%c' appears %d times in grid.\n", ch, count);

    for (int i = 0; i < 3; i++)
        firstColumn[i] = grid[i][0];
    firstColumn[3] = '\0';

    printf("First column string: %s\n", firstColumn);

    return 0;
}