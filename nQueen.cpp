#include<iostream>
using namespace std;

bool isSafe(int** arr, int x, int y, int n)
{
    // Check column
    for(int row = 0; row < x; row++)
    {
        if(arr[row][y] == 1)
        {
            return false;
        }
    }

    // Check upper left diagonal
    int row = x;
    int col = y;
    while(row >= 0 && col >= 0)
    {
        if(arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col--;
    }

    // Check upper right diagonal
    row = x;
    col = y;
    while(row >= 0 && col < n)
    {
        if(arr[row][col] == 1)
        {
            return false;
        }
        row--;
        col++;
    }

    return true;
}

bool nQueen(int** arr, int x, int n)
{
    if(x >= n)
    {
        return true;
    }
    for(int i = 0; i < n; i++)
    {
        if(isSafe(arr, x, i, n))
        {
            arr[x][i] = 1;

            if(nQueen(arr, x + 1, n))
            {
                return true;
            }

            arr[x][i] = 0; // Backtracking
        }
    }

    return false;
}

int main()
{
    int n;
    cin >> n;
    int** arr = new int*[n];
    for(int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
        for(int j = 0; j < n; j++)
        {
            arr[i][j] = 0;
        }
    }

    if(nQueen(arr, 0, n))
    {
        cout << "------------------------" << endl;
        for(int i = 0; i < n; i++)
        {  
            for(int j = 0; j < n; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "No solution found" << endl;
    }

    // Free allocated memory
    for(int i = 0; i < n; i++)
    {
        delete [] arr[i];
    }
    delete [] arr;

    return 0;
}
