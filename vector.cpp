#include <iostream>
#include <vector>
#include <ctime>
using namespace std;
int main() 
{
    int size;
    cout << "input size: ";
    cin >> size;
    vector<vector<int>> vec(size); 
    srand(time(NULL));
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
            vec[i].push_back(rand() % 10);
    }
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++) 
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    for (int i = 0; i < size; i++) 
    {
        int x;
        x = vec[i][i];
        vec[i][i] = vec[i][size - 1 - i];
        vec[i][size - 1 - i] = x;
    }
    for (int i = 0; i < size; i++) 
    {
        for (int j = 0; j < size; j++) 
        {
            cout << vec[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "Minimum: " << endl;
    for (int j = 0; j < size; j++)
    {
        int min = 0;
        for (int i = 0; i < size; i++)
        {
            if (vec[min][j] > vec[i][j])
            {
                min = i;
            }
        }
        cout << j + 1 << " column = " << vec[min][j] << endl;
    }
}