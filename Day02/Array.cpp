#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // Fixed size array
    int arr[5] = {1, 2, 3, 4, 5};

    // Partial initialization
    int arr1[5] = {1, 2};
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << endl;
    }

    vector<int> vec(5, -1); // Dynamic size array initialization with value -1

    // Range based for loop
    for (int element : vec)
    {
        cout << element << endl;
    }

    // Fixed 2D Matrix initialization
    int mat[2][3] = {{1, 2, 3}, {4, 5, 6}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << mat[i][j] << endl;
        }
    }

    // Dynamic 2D Matrix initialization
    vector<vector<int>> matrix(2, vector<int>(3, -1));
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << endl;
        }
    }
    return 0;
}