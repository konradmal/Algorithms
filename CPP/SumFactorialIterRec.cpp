#include <iostream>

using namespace std;

int sum_iterative(int number){
    if(number < 0){
        return -1;
    }
    int total_sum = 0;
    for(int i = 1; i <= number; i++){
        total_sum += i;
    }
    return total_sum;
}

int sum_recursive(int number){
    if(number < 0){
        return -1;
    }
    if(number == 0){
        return 0;
    }
    return number + sum_recursive(number - 1);
}

int factorial_iterative(int number){
    if(number < 0){
        return -1;
    }
    int result = 1;
    for(int i = 2; i <= number; i++){
        result *= i;
    }
    return result;
}

int factorial_recursive(int number){
    if(number < 0){
        return -1;
    }
    if(number <= 1){
        return 1;
    }
    return number * factorial_recursive(number - 1);
}

int main(int argc, char** argv) {
	cout << sum_iterative(5) << endl;
	cout << sum_iterative(10) << endl;
	
	cout << sum_recursive(5) << endl;
	cout << sum_recursive(10) << endl;
	
	cout << factorial_iterative(5) << endl;
	cout << factorial_iterative(10) << endl;
	
	cout << factorial_recursive(5) << endl;
	cout << factorial_recursive(10) << endl;
}