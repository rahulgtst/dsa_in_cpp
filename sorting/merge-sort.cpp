#include <iostream>

#define endl "\n"

using namespace std;

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void merge(int arr[], int l, int m, int r);

void mergeSortRecursive(int arr[], int l, int r) {
    if (l < r) {
        int m = l + (r - l) / 2;
        mergeSortRecursive(arr, l, m);
        mergeSortRecursive(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) {
        L[i] = arr[l + i];
    }

    for (int j = 0; j < n2; j++) {
        R[j] = arr[m + 1 + j];
    }

    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {  
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    while (i < n1) {    
        arr[k] = L[i];
        i++;
        k++;
    }

    while (j < n2) {    
        arr[k] = R[j];
        j++;
        k++;
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

    mergeSortRecursive(arr, 0, n-1);

    cout << "Array after sorting: " << endl;
    printArray(arr, n);

    return 0;
}
