#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    const int AXIS = 8;
    string board[AXIS][AXIS];
    string input;
    char letters[AXIS] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'};
    int counter;

    // Initialize the board with the black and white text
    for (int i = 0; i < AXIS; i++)
    { // ROWS
        if (((i + 1) % 2) != 0)
        { // ODD ROWS
            for (int j = 0; j < AXIS; j++)
            { // COLUMNS
                if (((j + 1) % 2) != 0)
                { // ODD COLUMNS
                    board[i][j] = "Black";
                }
                else
                { // EVEN COLUMNS
                    board[i][j] = "White";
                }
            }
        }
        else
        { // EVEN ROWS
            for (int j = 0; j < AXIS; j++)
            { // COLUMNS
                if (((j + 1) % 2) != 0)
                { // ODD COLUMNS
                    board[i][j] = "White";
                }
                else
                { // EVEN COLUMNS
                    board[i][j] = "Black";
                }
            }
        }
    }

    // Take in the input

    cin >> input;

    // Use the input to search through the array for that block

    counter = 0;
    while (letters[counter] != input[0])
    {
        counter++;
    }

    cout << board[counter][input[1] - 1] << endl;

    return 0;
}