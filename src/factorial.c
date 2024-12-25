
#include "factorial.h"

unsigned factorial(unsigned n)
{
    return (n == 0) ? 1 : n * factorial(n - 1);
}
