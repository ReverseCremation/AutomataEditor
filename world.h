#ifndef WORLD_H
#define WORLD_H

#include "automata.h"
#include <vector>

class world{

private:
    // World is rectangular and defined by horizontal length and vertical width
    unsigned int length;
    unsigned int width;

    // Possible ways to create world:
    // 1. Array of pointers to arrays (or vector of pointers to vectors?)
    // 2. Vector of vectors
    // 3. Matrix class
    // 4. 2D array
    // 5. Linearize a 1D array/vector - a_i = row_number*MAX_row_length + col_number (where col_number <= MAX_col_number)
};


#endif