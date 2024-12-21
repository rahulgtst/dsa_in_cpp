#include <iostream>

#define endl "\n"

using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i-1;
        while (j >=0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void insertionSortRecursive(int arr[], int n, int i) {
    if(i == n) return;
    int key = arr[i];
    int j = i-1;
    while (j >=0 && arr[j] > key) {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = key;

    insertionSortRecursive(arr, n, ++i);
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

    insertionSortRecursive(arr, n, 1);

    cout << "Array after sorting: " << endl;
    printArray(arr, n);

    return 0;
}
