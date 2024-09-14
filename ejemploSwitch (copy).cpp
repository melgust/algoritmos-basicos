#include<iostream>
#include<cstdlib>
#include <ctime>

using namespace std;

int main() 
{
    char pattern[5][5] = {
    {'*', ' ', '*', ' ', '*'},
    {' ', '*', ' ', '*', ' '},
    {'*', ' ', '*', ' ', '*'},
    {' ', '*', ' ', '*', ' '},
    {'*', ' ', '*', ' ', '*'}
    };
    for (int outer = 0; outer < 5; outer++) {
        for (int inner = 1; inner <= 5; inner++)
            cout << pattern[outer][inner % 5];
        cout << endl;
    }
    return 0;
}