#include <iostream>
#include <algorithm>
using namespace std;

int partition(int tab[], int l, int p) {
    int pivot = tab[p];
    int i = l - 1;
    for (int j = l; j < p; j++) {
        if (tab[j] < pivot) {
            i++;
            swap(tab[i], tab[j]);
        }
    }
    swap(tab[i + 1], tab[p]);
    return i + 1;
}

void quickSort(int tab[], int l, int p) {
    if (l < p) {
        int pivot = partition(tab, l, p);
        quickSort(tab, l, pivot - 1);
        quickSort(tab, pivot + 1, p);
    }
}

int main() {
    int tab[] = {3, 10, 77, 99, 2, 8, 17};
    cout << "Before sort: ";
    for (int i = 0; i < 7; i++) cout << tab[i] << ", ";
    cout << endl;
    quickSort(tab, 0, 6);
    cout << "After sort: ";
    for (int i = 0; i < 7; i++) cout << tab[i] << ", ";
    cout << endl;
}