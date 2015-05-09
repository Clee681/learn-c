#include <stdio.h>

int main()
{
    int c;
    int nb, nt, nl;

    nb = 0;
    nt = 0;
    nl = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ')
            ++nb;
        if (c == '\t')
            ++nt;
        if (c == '\n')
            ++nl;
    }

    printf("Number of Blanks: %d\n", nb);
    printf("Number of Tabs: %d\n", nt);
    printf("Number of Newlines: %d\n", nl);
}
