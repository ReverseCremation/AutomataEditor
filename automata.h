#ifndef AUTOMATA_H
#define AUTOMATA_H

// Specification file for automata class
// Cellular automaton class. Each cell in world is a member of this class.

enum State {dead, alive};

class Automaton{

private:
    State cellState;
    unsigned int xPos;
    unsigned int yPos;

public:
//    Automaton();
    Automaton(unsigned int xPos, unsigned int yPos);
    Automaton(State cellState, unsigned int xPos, unsigned int yPos);


    void set_xPos(unsigned int xPos);
    void set_yPos(unsigned int yPos);
    void set_cellState(State life);

    unsigned int get_xPos() const{
        return xPos;
    };
    unsigned int get_yPos() const{
        return yPos;
    };
    State get_cellState() const{
        return cellState;
    };

    unsigned int numNeighbors();
};

#endif