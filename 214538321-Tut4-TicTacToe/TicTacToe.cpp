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

int TicTacToe::getPlayer(){
	return player;
}

void TicTacToe::setPlayer(int playerNo){
	player = playerNo;
}

bool TicTacToe::move(int row, int column){
	if (row < 0 || column < 0 || row>2 || column>2)
		return false;
	else if (PlayBoard[row][column] != '_')
		return false;
	else
	{
		if (player == 1)
			PlayBoard[row][column] = 'x';
		else
		PlayBoard[row][column] = 'o';
	}

	return true;
}

int TicTacToe::winner(){
	int i, j;
	char PlayerMark;
	if (player == 1)
		PlayerMark = 'x';
	else
		PlayerMark = 'o';

	for (i = 0; i <= 2; i++){
		for (j = 0; j <= 2; j++)
			if (PlayBoard[i][j] = PlayerMark)
				return player;
	}

	for (int i = 0; i <= 2; i++)
	{
		for (int j = 0; j <= 2; j++)
		{
			if (PlayBoard[i][j] == '_')
			{
				return 9; 
			}
		}
	}

	return 5; 
}

void TicTacToe::nextMove(int &row, int &column)
{
	char x;
	int y;
	cout << "Player " << player << ", please enter a row (A - C)>>   ";
	cin >> x;
	cout << "Player " << player << ", please enter a column (1 - 3)>>   ";
	cin >> y;
	row = 4;
	column = 4;
	if (x == 'A')
		row = 0;
	if (x == 'B')
		row = 1;
	if (x == 'C')
		row = 2;
	column = y - 1;

}