#ifndef WORLD_H
#define WORLD_H

#include "automata.h"
#include <vector>

//enum State {dead, alive};

class World{

private:
    // World is rectangular and defined by horizontal length and vertical width
    unsigned int length;
    unsigned int width;

    // Possible ways to create world:
    // 1. Array of pointers to arrays (or vector of pointers to vectors?)
    // 2. Vector of vectors
    // 3. Matrix class
    // 4. Linearize a 2D into a 1D vector - a_i = row_number*MAX_row_length + col_number (where col_number <= MAX_col_number)
    //
    // For now, I'll go with a vector of vectors.

    std::vector< std::vector<Automaton> > worldMap; // the game map is composed of a vector of Automata vectors

public:
    // Constructor
    World(unsigned int length, unsigned int width);

    // Setters
    void setLength(unsigned int length);
    void setWidth(unsigned int width);
    void update_worldMap();                                     // FIND_OUT: Does updating the world require inputs?

    // Getters
    unsigned int getLength();
    unsigned int getWidth();
    State get_cellState(unsigned int xPos, unsigned int yPos);

};


#endif