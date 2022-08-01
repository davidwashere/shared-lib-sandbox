#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dave.h"

DAVEAPI void DAVECALL hello() {
    printf("Hello from Dave LIB\n");
}

DAVEAPI void DAVECALL hello_name( char* name ) {
    printf("Hello \"%s\" from Dave LIB\n", name);
}

DAVEAPI void DAVECALL version( char** out ) {
    char* ver = "ver123ABC SPACE";
    printf("Setting out to \"%s\"\n", ver);
    strcpy(*out, ver);
}