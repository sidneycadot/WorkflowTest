
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "factorial.h"

int main(int argc, char ** argv)
{
    bool all_good = true;

    for (int k = 1; k < argc; ++k)
    {
        unsigned u;
        if (sscanf(argv[k], "%u", &u) != 1)
        {
            printf("bad argument: %s\n", argv[k]);
            all_good = false;
        }
        else
        {
            printf("factorial(%u) = %u\n", u, factorial(u));
        }
    }
    return all_good ? EXIT_SUCCESS : EXIT_FAILURE;
}
