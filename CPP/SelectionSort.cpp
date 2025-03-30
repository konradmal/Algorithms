#include <iostream>
#include <algorithm>
using namespace std;

//O(n^2)
void selectionSort(int tab[], int n) {
    for (int i = 0; i < n; i++) {
        int mini = i;
        for (int j = i + 1; j < n; j++) {
            if (tab[mini] > tab[j]) {
                mini = j;
            }
        }
        swap(tab[i], tab[mini]);
    }
}

int main() {
    int tab[] = {3, 8, 17, 99, 2, 10, 77};
    cout << "Before sort: ";
    for (int i = 0; i < 7; i++)
        cout << tab[i] << ", ";
    cout << endl;
    selectionSort(tab, 7);
    cout << "After sort: ";
    for (int i = 0; i < 7; i++)
        cout << tab[i] << ", ";
}