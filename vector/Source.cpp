# include <iostream>

using namespace std;

void static_massiv() {
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
			cout << "matrix [" << i + 1 << "][" << j + 1 << "] = ";
			cin >> m[i][j];
		}
	}

	cout << "Enter number of vector:" << endl;
	for (int i = 0; i < column; i++) {
		cout << "vector [" << i + 1 << "] = ";
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

	int max = 0;
	for (int i = 0; i < line; i++) {
		if (r[i] > max) {
			max = r[i];
		}
	}
	cout << endl << "max = " << max;
}

void dinamic_massiv1() {
	// dinamic_massiv1

	int line;
	cout << "Enter number of line matrix: ";
	cin >> line;

	int column;
	cout << "Enter number of column matrix: ";
	cin >> column;

	int** m = new int * [line];
	for (int i = 0; i < column; i++) {
		m[i] = new int[column];
	}
	int* v = new int[column];

	for (int i = 0; i < line; i++) {
		for (int j = 0; j < column; j++) {
			cout << "matrix [" << i + 1 << "][" << j + 1 << "] = ";
			cin >> m[i][j];
		}
	}

	cout << "Enter number of vector:" << endl;
	for (int i = 0; i < column; i++) {
		cout << "vector [" << i + 1 << "] = ";
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
	int* r = new int[column];
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

	int max = 0;
	for (int i = 0; i < line; i++) {
		if (r[i] > max) {
			max = r[i];
		}
	}
	cout << endl << "max = " << max;
}

int main() {
	//static_massiv();
	dinamic_massiv1();
}