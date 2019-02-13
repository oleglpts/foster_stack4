/* stack4.c */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int bof() {
    char buffer[8];
    FILE *badfile;
    badfile = fopen("badfile", "r");
    fread(buffer, sizeof(char), 1024, badfile);
    return 1;
}

int main(int argc, char **argv) {
    bof();
    printf("Not gonna do it!\n");
    return 1;
}
