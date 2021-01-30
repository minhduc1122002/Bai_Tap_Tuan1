#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin >> a[i];
	}
	int sum=0;
	int max=a[0];
	int min=a[0];
	for(int i=0;i<n;i++) {
		sum+=a[i];
	}
	for(int i=0;i<n;i++) {
		if(a[i]>max) {
			max=a[i];
		}
		if(a[i]<min) {
			min=a[i];
		}
	}
	double average=(double) sum/n;
	cout << "Mean: " << average << endl;
	cout << "Max: " << max << endl;
	cout << "Min: " << min << endl;
	return 0;
}
