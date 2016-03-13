#include "TicTacToe.h"

TicTacToe::TicTacToe(){
	int i, j;

	for (i = 0; i <= 2; i++){
		for (j = 0; j <= 2; j++)
			PlayBoard[i][j] = '-';
	}

	player = 1;
}

TicTacToe::~TicTacToe()	{

}

