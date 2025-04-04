#include <iostream>
#include <algorithm>
using namespace std;

//O(n^2)
void bubbleSort(int tab[], int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n - i - 1; j++)
            if (tab[j] > tab[j + 1])
                swap(tab[j], tab[j + 1]);
}

int main() {
    int tab[] = {3, 8, 17, 99, 2, 10, 77};
    cout << "Before sort: ";
    for (int i = 0; i < 7; i++)
        cout << tab[i] << ", ";
    cout << endl;
    bubbleSort(tab, 7);
    cout << "After sort: ";
    for (int i = 0; i < 7; i++)
        cout << tab[i] << ", ";
}