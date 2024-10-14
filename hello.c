// hello: print a greeting

#include <config.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

    long unsigned int ret = 0;
    char msg[] = "Hello, World!\n";

    if (argc > 1 && strcmp(argv[1], "-v") ==0 ) {
        printf("%s\n", PACKAGE_STRING);
        return ret;
    }

    fprintf(stdout, "%s", msg);
    ret = fflush(stdout);           // check if greeting actually flushed

    return ret;
}
