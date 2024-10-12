// hello: print a greeting

#include <stdio.h>

int main(int argc, char *argv[]) {

    (void)argc;
    (void)argv;

    long unsigned int ret = 0;
    char msg[] = "Hello, World!\n";

    fprintf(stdout, "%s", msg);
    ret = fflush(stdout);           // check if greeting actually flushed

    return ret;
}
