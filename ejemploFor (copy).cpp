#include<iostream>
#include<cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    srand(time(NULL));
    int number = (rand() % 5) + 1;
    cout << "Numero generado: " << number << endl;
    for (int i = 0; i < number; i++)
    {
        cout << i + 1 << " ";
    }
    cout << endl;
    return 0;
}