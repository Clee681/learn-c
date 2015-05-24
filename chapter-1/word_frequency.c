/**
 * Program to print a histogram of the lengths of words in its input
 * Horizontal version
 */

#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 // outside a word

int is_whitespace(char c);

int main()
{
    int c, state, length;
    int word_frequency[10];

    // Initialize frequencies to 0
    for (int i = 0; i < 10; ++i)
        word_frequency[i] = 0;

    // Initialize state to outside a word
    state = OUT;
    length = 0;

    while ((c = getchar()) != EOF)
    {
        if (is_whitespace(c))
        {
            if (state == IN)
            {
                ++word_frequency[length];
                length = 0;
            }
            state = OUT;
        }
        else
        {
            state = IN;
            ++length;
        }
    }

    for (int i = 0; i < 10; ++i)
    {
        printf("%3d | ", i);

        for (int j = 0; j < word_frequency[i]; ++j)
            printf("#");

        printf("\n");
    }
}

int is_whitespace(char c)
{
    return c == ' ' || c == '\n' || c == '\t';
}
