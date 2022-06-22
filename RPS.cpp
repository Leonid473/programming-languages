#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() 
{
	char user, computer;
	int randNUM;
	srand(time(NULL));
	randNUM = rand() % 3;
	if (randNUM == 0)
		computer = 'R';
	else if (randNUM == 1)
		computer = 'P';
	else
		computer = 'S';
	cout << endl;
	cout << setw(63) << "THE GAME" << endl << setw(69) << "Rock Paper Scissors" << endl;
	cout << setw(53) << "Rules: " << endl << setw(67)  << "Rock crushes scissors" << endl << setw(64) << "Scissors cut paper" << setw(63) << endl << "Paper covers rock" << endl;
	cout << setw(68) << "The game starts!" << endl << setw(79) << "(R)Rock, (P)Paper or (S)Scissors?";
	cout << setw(105) << "Your choice is... ";
	cin >> user;
	if (computer == 'R') 
	{
		cout << setw(66) << "Computer choice is R" << endl;
		if (user == 'R')
			cout << setw(57) << "It's a tie!";
		else if (user == 'P')
			cout << setw(54) << "You win!";
		else
			cout << setw(55) << "You lose!";
		
	}
	else if (computer == 'P') 
	{
		cout << setw(66) << "Computer choice is P" << endl;
		if (user == 'R')
			cout << setw(55) << "You lose!";
		else if (user == 'P')
			cout << setw(57) << "It's a tie!";
		else
			cout << setw(54) << "You win!";
	}
	else if (computer == 'S')
	{
		cout << setw(66) << "Computer choice is S" << endl;
		if (user == 'R')
			cout << setw(54) << "You win!";
		else if (user == 'P')
			cout << setw(55) << "You lose!";
		else
			cout << setw(57) << "It's a tie!";
	}
	cout << endl;
}
