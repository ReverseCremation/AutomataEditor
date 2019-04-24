#include <iostream>
#include <string>
#include <fstream>
#include "automata.h"

// Implementation file for automata class

// NOTE: create default constructor with no inputs? i.e. null constructor?
//Automaton::Automaton(){
//}

//////////////////////
//  Constructor(s)  //
//////////////////////

///////////////////////////////////////////////////////
// Constructor used when NO cell state is specified  //
///////////////////////////////////////////////////////

Automaton::Automaton(unsigned int xPos, unsigned int yPos){

    cellState = dead;   // cell is dead by default
    this->xPos = xPos;
    this->yPos = yPos;
}
////////////////////////////////////////////////////
// Constructor used when cell state is specified  //
////////////////////////////////////////////////////

Automaton::Automaton(State cellState, unsigned int xPos, unsigned int yPos){

    this->cellState = cellState;
    this->xPos = xPos;
    this->yPos = yPos;
}

/////////////////////
// Setter methods  //
/////////////////////

void Automaton::set_xPos(unsigned int xPos) {
    this->xPos = xPos;
}

void Automaton::set_yPos(unsigned int yPos) {
    this->yPos = yPos;
}

void Automaton::set_cellState(State life) {
    this->cellState = life;
}

// TODO: write this function
unsigned Automaton::numNeighbors() {
    return 0;
}