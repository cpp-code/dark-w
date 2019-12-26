#include <stdarg.h>
#include <stdio.h>

void variable_arguments_function(const char *str, ...) {
    va_list args;
    va_start(args, str);

    while (*str) {
        if ('x' == *str) {
            const char *pstr = va_arg(args, char *);
            while (*pstr) {
                printf("%c", *pstr++);
            }
            ++str;
            continue;
        }
        printf("%c", *str++);
    }
    printf("\n");

    va_end(args);
    return;
}

int main(int argc, char *argv[]) {
    variable_arguments_function("12xx", "A", "B");
    return 0;
}

