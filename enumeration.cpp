#include <iostream>
using namespace std;
int main() 
{
	char all[]{ "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!#$%&()*+,-./:;<>?@[]^_{}|~" };
	char a1, a2, a3;
	char b1 = 0, b2 = 0, b3 = 0;
	int count1 = 1;
	cout << "Input 3-num password: " << endl;
	cin >> a1 >> a2 >> a3;
	for (int i = 0; i < 89; i++) 
	{
		for (int j = 0; j < 89; j++) 
		{
			for (int k = 0; k < 89; k++) 
			{
				b1 = all[i];
				b2 = all[j];
				b3 = all[k];
				if (a1 == b1 && a2 == b2 && a3 == b3) 
				{
					cout << "Password found: " << b1 << b2 << b3 << endl;
					cout << "Count: " << count1 << endl;
				}
				count1++;
			}
		}
	}
	cout << "----------" << endl;
	char c1, c2, c3;
	char d1 = 0, d2 = 0, d3 = 0;
	int count2 = 1;
	cout << "Input 3-num password: " << endl;
	cin >> c1 >> c2 >> c3;
	while (c1 != d1 || c2 != d2 || c3 != d3)
	{
		d1 = all[rand() % 89];
		d2 = all[rand() % 89];
		d3 = all[rand() % 89];
		count2++;
	}
	cout << "Password found: " << d1 << d2 << d3 << endl;
	cout << "Count: " << count2 << endl;
	return 0;
}






