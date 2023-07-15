#include <iostream>
using namespace std;


int main(){
	int N, K;
	cin >> N;

	for (int i = 9; i >= 0; --i) {
		int power (1 << i);
		cout << (N / power) % 2;
	}
	cout << endl;
}
