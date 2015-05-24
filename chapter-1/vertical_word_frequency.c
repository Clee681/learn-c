/**
 * Program to print a histogram of the lengths of words in its input
 * Vertical version
 */

#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 // outside a word

int main()
{
    int c, state, length;
    int word_frequency[10];

    // Initialize frequencies to 0
    for (int i = 0; i < 10; ++i)
        word_frequency[i] = 0;

    // Initialize state to outside a word
    state = OUT;

    while ((c = getchar()) != EOF)
    {
        // If current char is whitespace, record word length and reset state
        if (c == ' ' || c == '\n' || c == '\t')
        {
            ++word_frequency[length];
            state = OUT;
        }
        // If current char is not whitespace, set state to IN and reset length
        else if (state == OUT)
        {
            state = IN;
            length = 0;
        }
        // Increment length
        if (state == IN)
            ++length;
    }

    for (int i = 0; i < 10; ++i)
    {
        printf("%3d | ", i);

        for (int j = 0; j < word_frequency[i]; ++j)
            printf("#");

        printf("\n");
    }
}
