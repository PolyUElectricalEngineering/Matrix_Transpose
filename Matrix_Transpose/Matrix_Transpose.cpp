#include <iostream>
using namespace std;
int main() {
	int transpose[10][10],i, j;
	int a[3][3] = { {1, 2} , {3, 4} , {5, 6} };  //define the original array
	cout << "The matrix is:" << endl;
	for (i = 0; i < 3; i++) {   //do this action 3 times
		for (j = 0; j < 2; j++) {   //do this action 2 times
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	cout << endl;
	for (i = 0; i < 3; ++i)
		for (j = 0; j < 2; ++j) {
			transpose[j][i] = a[i][j];
		}
	cout << "The transpose of the matrix is:" << endl;
	for (i = 0; i < 2; ++i) {
		for (j = 0; j < 3; ++j)
			cout << transpose[i][j] << " ";
		cout << endl;
	}
	return 0;
}