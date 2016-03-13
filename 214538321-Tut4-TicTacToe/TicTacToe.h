#include<iostream>

using namespace std;

#ifndef TICTACTOE_H
#define TICTACTOE_H

class TicTacToe{
private: char PlayBoard[3][3];
		 int player;

public: TicTacToe();    //default constructor and desatructor
		~TicTacToe();

		//Acessor Functions
		int getPlayer();

		//mutator functions
		void setPlayer(int);

		//Other functions
		bool move(int, int);
		int winner();
		
		void nextMove(int &, int &);

};

#endif 
