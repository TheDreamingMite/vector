# include <iostream>

using namespace std;

int main() {
	// static massiv

	int line;
	cout << "Enter number of line matrix: ";
	cin >> line;

	int column;
	cout << "Enter number of column matrix: ";
	cin >> column;

	int m[100][100];

	for (int i = 0; i < line; i++) {
		for (int j = 0; j < column; j++) {
			cout << "matrix [" << i << "][" << j << "] = ";
			cin >> m[i][j];
			cout << endl;
		}
	}
	
	int vector;
	cout << "Enter number of line matrix: ";
	cin >> line;
}