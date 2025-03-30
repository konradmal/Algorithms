#include <iostream>
#include <vector>

using namespace std;

//O(n)
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

//O(n)
vector<int> minMaxVector(int array[], int length) {
    vector<int> result;
    int minVal = array[0];
    int maxVal = array[0];
    for(int i = 1; i < length; i++) {
        if (array[i] < minVal) {
            minVal = array[i];
        }
        else if (array[i] > maxVal) {
            maxVal = array[i];
        }
    }
    result.push_back(minVal);
    result.push_back(maxVal);
    return result;
}

int main() {
	int tab[] = {22, 34, 12, 9, 55, 33, 23};
	int MIN, MAX;
    int size_of_array = sizeof(tab) / sizeof(tab[0]);
	minMax(tab, size_of_array, MIN, MAX);
	cout << "Minimum: " <<  MIN << " Maximum: " << MAX << endl;

    vector<int> result = minMaxVector(tab, size_of_array);
    cout << "Minimum: " <<  result[0] << " Maximum: " << result[1] << endl;
}