#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	int result = 0;
	int matrix[4][4];
	srand(time(NULL));
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			matrix[i][j] = rand() % 2;
			matrix[i][j] = -1;
			cout << matrix[i][j] << endl;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (i == 0)
				result += (matrix[i][j] * matrix[4 - 1][j]) + matrix[i][j] * matrix[i][4 - 1];
			else
				result += (matrix[i][j] * matrix[i - 1][j] + matrix[i][j] * matrix[i][j - 1]);
		}
	}
	cout << result << endl;
	return 0;
}