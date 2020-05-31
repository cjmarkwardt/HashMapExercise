#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#include "main.h"

#define print(a, args...) printf("(%s:%d) " a "\n", __FILE__, __LINE__, ##args)
#define throw_not_implemented() printf("(%s:%d) %s not implemented\n", __FILE__, __LINE__, __func__)
#define trace() printf("TRACE %s:%d\n", __FILE__, __LINE__)

bool int_equals(void* x, void* y);
int int_hash(void* x, void* y);

void main()
{
    void* map = map_create(int_equals, int_hash);

    print("program ended");
}

bool int_equals(void* x, void* y)
{
    throw_not_implemented();
}

int int_hash(void* x, void* y)
{
    throw_not_implemented();
}

void* map_create(EqualsFunction equals, HashFunction hash)
{
    throw_not_implemented();
}