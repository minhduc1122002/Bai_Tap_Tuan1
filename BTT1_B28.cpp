#include<iostream>
using namespace std;
int main() {
	string time;
	int hour;
	int doi_time=0;
	for(int i=1;i<=24;i++) {
		if(doi_time==0) {
			hour=12;
			time="midnight";
		}
		if(doi_time==1) {
			hour=1;
			time="am";
		}
		if(doi_time==12) {
			time="noon";
		}
		if(doi_time==13) {
			hour=1;
			time="pm";
		}
		cout << hour << " " << time << endl;
		hour++;
		doi_time++;
	}
	return 0;
}
