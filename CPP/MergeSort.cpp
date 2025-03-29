#include <iostream>
using namespace std;

int temp[] = {3, 8, 17, 99, 2, 10, 77};

//O(n)
void merge(int arr[], int left, int mid, int right) {
    int i = left;
    int j = mid + 1;
    for (int k = left; k <= right; k++) {
        temp[k] = arr[k];
    }
    for (int k = left; k <= right; k++) {
        if (i <= mid && (j > right || temp[i] <= temp[j])) {
            arr[k] = temp[i++];
        } else {
            arr[k] = temp[j++];
        }
    }
}

//O(nlogn)
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

int main() {
    int tab[] = {3, 8, 17, 99, 2, 10, 77};
    cout << "Before sort: ";
    for (int i = 0; i < 7; i++) {
        cout << tab[i] << ", ";
    }
    cout << endl;
    mergeSort(tab, 0, 6);
    cout << "After sort: ";
    for (int i = 0; i < 7; i++) {
        cout << tab[i] << ", ";
    }
    cout << endl;
}