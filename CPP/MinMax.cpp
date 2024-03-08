#include <iostream>

using namespace std;

void minMax(int array[], int length, int& minVal, int& maxVal) {
    minVal = array[0];
    maxVal = array[0];
    for(int i = 1; i < length; i++) {
        if (array[i] < minVal) {
            minVal = array[i];
        }
        else if (array[i] > maxVal) {
            maxVal = array[i];
        }
    }
}

int main() {
	int tab[] = {22, 34, 12, 9, 55, 33, 23};
	int MIN, MAX;
    int size_of_array = sizeof(tab) / sizeof(tab[0]);
	minMax(tab, size_of_array, MIN, MAX);
	cout << "Minimum: " <<  MIN << " Maximum: " << MAX << endl;
}