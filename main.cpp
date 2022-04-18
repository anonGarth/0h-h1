/*
Garth Shaw
Created: 4/17/22
Main file
*/
#include <iostream> 
#include "board.h"   

using namespace std;



int main(){
    fourBoard aBoard;

    aBoard.setGameOne();
    
    string command = "";
    

    cout<< "\nHere is the board. Please solve it.";

    do{
    aBoard.printFourBoard();

    cout<< "\nPlease input the coordinates of the tile you would like to change and what number to change it too. Seperated by a space of course.";
    cin >> command;

    

    }
    while(aBoard.checkBoard() == false);



    return 0;
}