#include <iostream>
using namespace std;
int main(){
	cout << " How much times u want to see hello ? " << endl;
	int *p = new int;
	cin >> *p ;
	for (int i = 0; i < *p; i++){
		cout << " Hello!" << endl;
	}
	delete p;
	return 0;
}