#pragma once

#include "types.h"
#include <unistd.h>

extern unsigned int seed;
unsigned int init_seed(unsigned int seed);
void set_seed(unsigned int pidslot);
void reseed(void);
unsigned int new_seed(void);

unsigned int rand_bool(void);
unsigned int rand32(void);
u64 rand64(void);

void generate_random_page(char *page);
