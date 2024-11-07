#include<iostream>
#include<iomanip>
#include<vector>
#include<Windows.h>

using namespace std;

#define ADD 5

const int I = 1;
const int N = I + ADD;

void calcStirling(vector<vector<int>>& F, vector<int>& B) {
	for (size_t i = 0; i < F.size(); i++) {
		F[i][0] = 1;
		F[i][i] = 1;
	}
		for (size_t j = 2; j < F.size(); j++)
			for (size_t k = 1; k < j; k++)
				F[j][k] = F[j - 1][k - 1] + (k + 1) * F[j - 1][k];
		
		for (size_t j = 0; j < F.size(); j++)
			for (size_t k = 0; k < F.size(); k++)
				B[j] += F[j][k];
}

bool checkStirDigit(const vector<vector<int>>& F, int row, int col, int val) {
    if (row - 1 == F.size() || col - 1 == F.size())
        return false;
    if (F[row][col] == val)
        return true;
    else return false;
}

bool checkBellDigit(const vector<int>& B, int number, int val) {
    if (number - 1 == B.size())
        return false;
    if (B[number] == val)
        return true;
    else return false;
}

int main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	vector<vector<int>> F(N, vector<int>(N, 0));
	vector<int> B(N, 0);
	calcStirling(F, B);

    cout << "------";
    for (size_t j = 0; j < N; j++) {
        cout << "---------";
    }
    cout << "--------------" << endl;

    cout << "| n\\k ";
    for (size_t j = 0; j < N; j++) {
        cout << "| " << setw(6) << j + 1 << " ";
    }
    cout << "|  F(n)      |" << endl;

    cout << "+-----";
    for (size_t j = 0; j < N; j++) {
        cout << "+--------";
    }
    cout << "+------------+" << endl;

    for (size_t j = 0; j < N; j++) {
        cout << "| " << setw(3) << j + 1 << " ";
        for (size_t k = 0; k < N; k++) {
            if (F[j][k] != 0) {
                cout << "| " << setw(6) << F[j][k] << " ";
            }
            else {
                cout << "| " << setw(6) << "-" << " ";
            }
        }
        cout << "| " << setw(8) << B[j] << "   |" << endl;

        cout << "------";
        for (size_t k = 0; k < N; k++) {
            cout << "---------";
        }
        cout << "--------------" << endl;
    }
	return 0;
}