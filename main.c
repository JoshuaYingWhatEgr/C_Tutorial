#include <stdio.h>

#include "integer_types.h"

#include "float_point.h"

#include "variable.h"

int main() {
    printf("Hello, World!\n");

    integer_size();

    float_point_size();

    variable_show();

    printf("i = %d,j = %d\n",i,j);
    return 0;
}
