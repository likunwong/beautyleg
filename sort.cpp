#include <iostream>
#include <string>
using namespace std;
 
int main() {
	int n[10];
	int i, j;
	int temp;                                
	cout << "input 10 numbers" << endl;
	for (i = 0; i < 10; i++) {
		cin >> n[i];
	}
	for (i = 0; i < 9;i++) {               
		for (j = 0; j < 9 - i;j++) {     
			if (n[j] > n[j + 1]) {
				temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;
			}
		}
	}
	cout << "sort result: " << endl;
	for (i = 0; i < 10; i++)
	{
	    cout << n[i] << ' ';
	}
	cout << endl;
    system("pause");
	return 0;
}
