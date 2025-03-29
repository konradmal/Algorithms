#include <iostream>
using namespace std;

//O(2^n)
void hanoi(int n, string A, string B, string C){
	if(n > 0){
		hanoi(n-1, A, C, B);
		cout << A << " -> " << C << endl;
		hanoi(n-1, B, A, C);
	}
}

int main() {
	hanoi(3, "A", "B", "C");
	hanoi(4, "A", "B", "C");
}