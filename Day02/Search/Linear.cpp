#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int nums[n];
    int target;

    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << "Enter the search element:";
    cin >> target;

    // Linear Search
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == target)
        {
            cout << "The target is present at: " << i + 1 << endl;
        }
    }

    return 0;
}