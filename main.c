#include <stdio.h>

#include "dev_pub.h"

int main()
{
    U32 i;

    printf("hello mac!\n\rhello firedragon fruit!\n");
    printf("\rIn 64bits system: U64=%lu,U32=%lu,U16=%lu\n", sizeof(U64), sizeof(U32),sizeof(U16));

    return 0;
}