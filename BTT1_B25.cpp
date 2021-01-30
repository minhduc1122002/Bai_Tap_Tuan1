#include<iostream>
using namespace std;
int main() {
	int a[5];
	for(int i=0;i<5;i++) {
		cin >> a[i];
	}
	int min=a[0];
	int max=a[0];
	for(int i=0;i<5;i++) {
		if(a[i]>max) {
			max=a[i];
		}
		if(a[i]<min) {
			min=a[i];
		}
	}
	int sum=0;
	for(int i=0;i<5;i++) {
		sum+=a[i];
	}
	double average=(double) (sum-max-min)/3;
	double sai_so_min=abs(average-a[0]);
	for(int i=0;i<5;i++) {
		if(abs(average-a[i])<sai_so_min) {
			sai_so_min=abs(average-a[i]);
		}
	}
	for(int i=0;i<5;i++) {
		if(abs(average-a[i])==sai_so_min) {
			cout << a[i];
		}
	}
	return 0;
}
