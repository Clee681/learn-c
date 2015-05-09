#include <stdio.h>

#define BLANK ' '
#define NONBLANK '1'

int main()
{
    int c, prev_c;

    prev_c = NONBLANK;

    while ((c = getchar()) != EOF) {
        if (prev_c != BLANK)
            putchar(c);
        if (prev_c == BLANK)
            if (c != BLANK)
                putchar(c);
        prev_c = c;
    }
}
