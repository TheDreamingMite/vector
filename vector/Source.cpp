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
	int v[100];

	for (int i = 0; i < line; i++) {
		for (int j = 0; j < column; j++) {
			cout << "matrix [" << i+1 << "][" << j+1 << "] = ";
			cin >> m[i][j];
		}
	}
	
	cout << "Enter number of vector:" << endl;
	for (int i = 0; i < column; i++) {
		cout << "vector [" << i+1 << "] = ";
		cin >> v[i];
	}

	cout << "Introduced matrix:" << endl;
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < column; j++) {
			cout << m[i][j] << " ";
		}
		cout << endl;
	}

	cout << "Introduced vector:" << endl;
	for (int i = 0; i < column; i++) {
		cout << v[i];
		cout << endl;
	}

	int r[100];
	for (int i = 0; i < line; i++) {
		r[i] = 0;
		for (int j = 0; j < column; j++) {
			r[i] += m[i][j] * v[j];
		}
	}

	cout << "rezult:" << endl;
	for (int i = 0; i < line; i++) {
		cout << r[i] << endl;
	}
}