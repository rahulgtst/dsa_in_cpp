#include <iostream>

#define endl "\n"

using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int swapCount = 0;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swapCount += 1;
                swap(arr[j], arr[j + 1]);
            }
        }
        cout<< "Number of Swaps: "<< swapCount << endl;
        if(!swapCount) return;
    }
}

int main() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << endl;

    int arr[n];
    cout << "Enter the elements in array" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << endl << "Array before sorting: " << endl;
    printArray(arr, n);

    bubbleSort(arr, n);

    cout << "Array after sorting: " << endl;
    printArray(arr, n);

    return 0;
}
