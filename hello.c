// hello: print a greeting

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

    (void)argc;
    (void)argv;
    long unsigned int ret = 0;
    char msg[] = "Hello, World!\n";

    ret = printf("%s", msg);

    if (ret == strlen(msg))
        return ret;
    else
        return -1;
}
