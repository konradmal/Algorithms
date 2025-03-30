#include <iostream>

using namespace std;

//O(n)
int sumIterative(int number){
    if(number < 0){
        return -1;
    }
    int total_sum = 0;
    for(int i = 1; i <= number; i++){
        total_sum += i;
    }
    return total_sum;
}

//O(n)
int sumRecursive(int number){
    if(number < 0){
        return -1;
    }
    if(number == 0){
        return 0;
    }
    return number + sumRecursive(number - 1);
}

//O(n)
int factorialIterative(int number){
    if(number < 0){
        return -1;
    }
    int result = 1;
    for(int i = 2; i <= number; i++){
        result *= i;
    }
    return result;
}

//O(n)
int factorialRecursive(int number){
    if(number < 0){
        return -1;
    }
    if(number <= 1){
        return 1;
    }
    return number * factorialRecursive(number - 1);
}

int main() {
	cout << sumIterative(5) << endl;
	cout << sumIterative(10) << endl;
	
	cout << sumRecursive(5) << endl;
	cout << sumRecursive(10) << endl;
	
	cout << factorialIterative(5) << endl;
	cout << factorialIterative(10) << endl;
	
	cout << factorialRecursive(5) << endl;
	cout << factorialRecursive(10) << endl;
}