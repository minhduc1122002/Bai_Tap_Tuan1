#include<iostream>
using namespace std;
int main() {
	int a,b;
	cin >> a >> b;
	int chon=a;
	if(chon<50) {
		chon=b;
	}
	cout << chon; 
	return 0;
}
