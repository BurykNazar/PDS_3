#include<iostream>
#include<Windows.h>

#define ull unsigned long long

using namespace std;

const int N = 6;
const int R = 5;

unsigned long long getFactorial(unsigned int n) {
	if (n == 0)
		return 1;
	return n * getFactorial(n - 1);
}

unsigned long long getArrangementsNoRepeat(
unsigned int N, unsigned int R) {
	if (N == 0 && R == 0)
		return 0;

	ull p1 = getFactorial(N);
	ull p2 = getFactorial(N - R);

	cout << endl << " r     n!" << endl;
	cout << "A = ________  " << endl;
	cout << " n  (n - r)! " << endl << endl;

	cout << "\t" << N << "! / (" << N << " - " << R << ")! = ";
	cout << p1 << " / " << N - R << "! = " << p1 << " / " << p2;
	cout << " = " << p1 / p2 << endl;

	cout << " " << R << endl;
	cout << "A = " << p1 / p2 << endl;
	cout << " " << N << endl;

	return p1 / p2;
}

using namespace std;

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	
	getArrangementsNoRepeat(N, R);

	return 0;
}