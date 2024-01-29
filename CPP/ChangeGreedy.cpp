#include <iostream>
#include <vector>

using namespace std;

vector<int> changeGreedy(int amount, int denominations[], int size_of_array){
    vector<int> change;
    for(int i = 0; i < size_of_array; i++){
        while(denominations[i] <= amount){
            change.push_back(denominations[i]);
            amount -= denominations[i];
        }
    }
    return change;
}

int main(int argc, char** argv) {
    int denominations[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int size_of_array = sizeof(denominations) / sizeof(denominations[0]);
    vector<int> result = changeGreedy(43, denominations, size_of_array);
    for(int denomination : result){
        cout << denomination << ", ";
    }
}