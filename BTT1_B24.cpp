#include<iostream>
using namespace std;
int main() {
	int d,m,y;
	cin >> d >> m >> y;
	if(m<3) {
		m=m+12;
		y=y-1;
	}
	int n=(d+2*m+(3*(m+1))/5+y+y/4)%7;
	string thu;
	switch(n) {
		case 0:
		thu="Chu Nhat";
		break;
		case 1:
		thu="Thu Hai";
		break;
		case 2:
		thu="Thu Ba";
		break;
		case 3:
		thu="Thu Tu";
		break;
		case 4:
		thu="Thu Nam";
		break;
		case 5:
		thu="Thu Sau";
		break;
		case 6:
		thu="Thu Bay";
		break;
		default:
		cout << "Ngay khong hop le";
		break;	
	}
	cout << thu;
	return 0;
}
