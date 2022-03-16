#include <iostream>

using namespace std;

int main() {
	int n;
	int m;
  	int s = 0;
	cin >> n;
	cin >> m;

	int array[n][m];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> array[i][j];

	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++) {
			if (array[i][j] > 0)
				s += array[i][j];
		}
	
	cout << "Сумма положительных элементов массива = " << s << endl;
	return 0;
}
