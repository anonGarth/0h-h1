/*
Garth Shaw
Created 4/17/22
Header file for the board class
*/
#ifndef board
#define board


#include <vector>
#include <iostream>
using namespace std;

class fourBoard{

    public:


         void printFourBoard(){
             int x = 1;
            for(int i = 0; i < fourBoardVect.size(); i++){

                for(int j = 0; j < fourBoardVect.size(); j++){

                    if(x % 4 == 0){
                        cout << fourBoardVect.at(i).at(j) << "\n";
                        x++;
                    }
                    else{
                        cout << fourBoardVect.at(i).at(j);
                        x++;
                    }

                    
                }

            }
        }


        void setGameOne(){
            fourBoardVect[1] = {1,1,0,0};//0,0,0,0      2,2,1,1
            fourBoardVect[2] = {1,0,0,0};//1,1,0,0      1,1,2,2
            fourBoardVect[3] = {0,0,0,2};//1,0,0,0      1,2,2,1  <--------SOLVED
        }                                //0,0,0,2      2,1,1,2


        void changeTile(int x, int y, int num){
            if(num == 1){ //Blue
                fourBoardVect.at(x).at(y) = 1;
            }
            else if(num == 2){
                fourBoardVect.at(x).at(y) = 2;
            }
            else{
                cout << "\nYou cannot change a tile to be unassigned. Please pick one or two.\n";
            }

        }


        bool checkBoard(){

        }
        

            

    private:

        int gameNumber;
        vector<vector<int>> fourBoardVect{ //declare and initialize the four board. 0 = unassigned  1 = blue   2 = red
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0},
        {0,0,0,0}
        };




};




#endif