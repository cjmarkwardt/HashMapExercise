#ifndef _MAIN_H
#define _MAIN_H

#include <stdbool.h>

typedef bool (*EqualsFunction)(void* x, void* y);
typedef int (*HashFunction)(void* x, void* y);

void* map_create(EqualsFunction equals, HashFunction hash);
int map_count(void* map);
void map_add(void* map, void* key, void* value);
void* map_get(void* map, void* key);
bool map_remove(void* map, void* key);
void map_destroy(void* map);

#endif