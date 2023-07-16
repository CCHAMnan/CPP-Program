#include <iostream>
#include <stdlib.h>
using namespace std;

char board[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int choice;
int row,column;
char turn = 'X';
bool draw = false;


void display_board()
{
    cout<<"PLAYER - 1 [X]\t PLAYER - 2 [O]\n\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[0][0]<<"  |  " <<board[0][1]<<"  |  "<<board[0][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[1][0]<<"  |  " <<board[1][1]<<"  |  "<<board[1][2]<<" \n";
    cout<<"\t\t_____|_____|_____\n";
    cout<<"\t\t     |     |     \n";
    cout<<"\t\t  "<<board[2][0]<<"  |  " <<board[2][1]<<"  |  "<<board[2][2]<<" \n";
    cout<<"\t\t     |     |     \n";
}


void player_turn(){
    if(turn == 'X'){
        cout<<"\n\tPlayer - 1 [X] turn : ";
    }
    else if(turn == 'O'){
        cout<<"\n\tPlayer - 2 [O] turn : ";
    }
    
	//take input and assign them to the right place
    cin>> choice;
    switch(choice){
        case 1: row=0; column=0; break;
        case 2: row=0; column=1; break;
        case 3: row=0; column=2; break;
        case 4: row=1; column=0; break;
        case 5: row=1; column=1; break;
        case 6: row=1; column=2; break;
        case 7: row=2; column=0; break;
        case 8: row=2; column=1; break;
        case 9: row=2; column=2; break;
        default:
            cout<<"Invalid Move";
    }

    if(turn == 'X' && board[row][column] != 'X' && board[row][column] != 'O'){ 
        board[row][column] = 'X'; //if empty space
        turn = 'O';
    }else if(turn == 'O' && board[row][column] != 'X' && board[row][column] != 'O'){
        board[row][column] = 'O'; //if empty space
        turn = 'X';
    }else {
        cout<<"Box already filled!n Please choose another!!\n\n"; //if the space alr has an input
        player_turn();
    }

    display_board(); //End
}


bool gameover(){ 
    for(int i=0; i<3; i++) //win with simple row and column
    	if(board[i][0] == board[i][1] && board[i][0] == board[i][2] || board[0][i] == board[1][i] && board[0][i] == board[2][i])
    	return false;

    	if(board[0][0] == board[1][1] && board[0][0] == board[2][2] || board[0][2] == board[1][1] && board[0][2] == board[2][0]) //win with diagonally
    	return false;

    for(int i=0; i<3; i++) //check if the game should go on
    	for(int j=0; j<3; j++)
    	if(board[i][j] != 'X' && board[i][j] != 'O')
    	return true;

    	draw = true;    //check if its a draw
    	return false;
}


int main()
{
    cout<<"\t\t\tT I C K -- T A C -- T O E -- G A M E\t\t\t";
    cout<<"\n\t\t\t\tFOR 2 PLAYERS\n\t\t\t";
    while(gameover()){
        display_board();
        player_turn();
        gameover();
    }
    if(turn == 'X' && draw == false){
        cout<<"\n\nCongratulations!Player 'O' has won the game!\n\n";
    }
    else if(turn == 'O' && draw == false){
        cout<<"\n\nCongratulations!Player 'X' has won the game!\n\n";
    }
    else
    cout<<"\n\n\t\tGAME DRAW!\n\n";
}
