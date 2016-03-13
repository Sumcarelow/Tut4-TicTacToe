#include<iostream>
#include<string>

#include "TicTacToe.h"

using namespace std;

int main(){
	int row = 0;
	int column = 0;
	int i = 1;

	TicTacToe Game1;
	Game1.setPlayer(2);

	while (i == 1){
		while (Game1.winner == 9)
		{
			if (Game1.getPlayer() == 1)
				Game1.setPlayer(2);
			else
				Game1.setPlayer(1);
			Game1.nextMove(row, column);

			while (Game1.move(row, column) == false)
			{
				cout << "invalid" << endl;
				Game1.move(row, column);
			}

		}

		if (Game1.winner() == 5)
			cout << "DRAW" << endl;

	}
	return 0;
}

