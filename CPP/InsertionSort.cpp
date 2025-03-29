#include <iostream>
#include <algorithm>
using namespace std;

//O(n^2)
void insertionSort(int arr[], int n) {
    int j;
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        j = i;
        while (j > 0 && arr[j - 1] > key) {
            arr[j] = arr[j - 1];
            j--;
        }
        arr[j] = key;
    }
}

int main() {
    int tab[] = {3, 8, 17, 99, 2, 10, 77};
    cout << "Before sort: ";
    for (int i = 0; i < 7; i++)
        cout << tab[i] << ", ";
    cout << endl;
    insertionSort(tab, 7);
    cout << "After sort: ";
    for (int i = 0; i < 7; i++)
        cout << tab[i] << ", ";
}