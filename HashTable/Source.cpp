#include <iostream>
#include <fstream>

using namespace std;

int m, c, n;

int h(int x, int i) {
	return (x % m + c * i) % m;
}

int main() {
	fstream in;
	in.open("input.txt", ios::in);
	if (!in.is_open()) {
		cout << "file is not open" << endl;
	}
	
	in >> m >> c >> n;
	int key;

	long* arr = new long[m];
	for (int i = 0; i < m; i++) {
		arr[i] = -1;
	}

	for (int i = 0; i < n; i++) {
		in >> key;
		int j = 0;
		int k = h(key, 0);
		while (arr[k] != -1 && arr[k] != key) {
			j++;
			k = h(key, j);
		}
		if (arr[k] == -1) {
			arr[k] = key;
		}
	}

	in.close();


	ofstream out;
	out.open("output.txt", ios::out);
	if (!out.is_open()) {
		cout << "file is not open" << endl;
	}
	for (int i = 0; i < m; i++) {
		out << arr[i] << " ";
	}
	out.close();

	return 0;
}