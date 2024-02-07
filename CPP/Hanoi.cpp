#include <iostream>
using namespace std;

void Hanoi(int n, string A, string B, string C){
	if(n > 0){
		Hanoi(n-1, A, C, B);
		cout << A << " -> " << C << endl;
		Hanoi(n-1, B, A, C);
	}
}

int main() {
	Hanoi(3, "A", "B", "C");
	Hanoi(4, "A", "B", "C");
}