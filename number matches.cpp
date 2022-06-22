#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#define size 100
using namespace std;
int main()
{
	int array[size]{};
	int count[size];
	srand(time(NULL));
	int pair = 0, triplets = 0;
	int x;
	for (int i = 0; i < size; i++)
	{
		count[i] = 0;
	}
	cout << "-------------------" << endl;
	cout <<"[ Massive | Count ]" << endl;
	cout << "-------------------" << endl;
	for (int i = 0; i < size; i++)
	{
		x = rand() % size;
		array[i] = x;
		count[x]++;
		cout << "|" << setw(5) << array[i] << setw(5) << "|" << setw(4) << count[x] << setw(4) << "|" << endl;
	}
	for (int i = 0; i < size; i++)
	{
		pair += count[i] / 2;
		triplets += count[i] / 3;
	}
	cout << "-------------------" << endl;
	cout << "Number of pairs: " << pair << endl << "Number of triplets: " << triplets << endl;
}

