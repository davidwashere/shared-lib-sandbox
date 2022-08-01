#include <stdio.h>
#include <stdlib.h>

#include "dave.h"

int main(int argc, char ** argv) {
    hello();
    hello_name("sup");

    char *buffer = malloc(20 * sizeof(char));
    version(&buffer);

    printf("Buffer: '%s'\n", buffer);

    return 0;
}

// gcc -c -o dave_test.o dave_test.c
// gcc -o dave_test.exe -s dave_test.o -L. -ldave