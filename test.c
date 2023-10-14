#include <stdio.h>
#include "main.h"

int main() {
    char ch = 'A';
    char *str = "Hello, World!";

    int printed = _printf("Character: %c, String: %s, Percent: %%\n", ch, str);
    printf("Characters printed: %d\n", printed);

    return 0;
}
