#include <iostream>

#define endl "\n"

using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[i]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}

void selectionSortRecursive(int arr[], int n, int j) {
    if(j == n) return;
    int minIdx = j;
    for (int i = j + 1; i < n; i++) {
        if(arr[i] < arr[minIdx]) {
            minIdx = i;
        }
    }

    swap(arr[j], arr[minIdx]);

    selectionSortRecursive(arr, n, ++j);
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

    selectionSortRecursive(arr, n, 0);

    cout << "Array after sorting: " << endl;
    printArray(arr, n);

    return 0;
}
