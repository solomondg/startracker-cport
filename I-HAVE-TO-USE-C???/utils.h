//
// Created by solomon on 4/17/18.
//

#ifndef I_HAVE_TO_USE_C_UTILS_H
#define I_HAVE_TO_USE_C_UTILS_H

#endif //I_HAVE_TO_USE_C_UTILS_H

#ifndef MATH
#define MATH

#include <math.h>

#endif

#ifndef CONFIG
#define CONFIG

#include "config.h"

#endif


#include <lapacke.h>
#include <cblas.h>

#define len(a) _Generic(a, int*: leni, double*: lend, int: leni_np)(a)

int leni(int *arr[]) {
    return sizeof(*arr) / sizeof((*arr)[0]);
}

int leni_np(int arr[]) {
    return sizeof(arr) / sizeof(arr[0]);
}

int lend(double *arr[]) {
    return sizeof(*arr) / sizeof((*arr)[0]);
}

long hash_code_to_index(int *hash_code[], int bins_per_dimension, int hash_table_size) {
    // represent hash code as a single integer
    int integer_hash_code = 0;
    for (int i = 0; i < leni(hash_code); i++)
        integer_hash_code += (int) pow((*hash_code)[i] * bins_per_dimension, i);
    // randomize the hash code by multiplying by the avalanching constant
    // take the result modulo the table size to give a random index
    int index = (int) (integer_hash_code * avalanche_constant) % hash_table_size:
    return index;
}


// find all stars within a radius centered on the given vector using the compressed course sky map
void get_nearby_stars_compressed_course(float vector, float radius, int *nearby_star_ids_out[]) {
}
