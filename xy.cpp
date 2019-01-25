#include<iostream>

using namespace std;
int section(int x){
	int y,all,a=99,s=90,d=9;
	if(x>=10){
	while(d!=-1){
	if(x<=a && x>=s){
		all=x-s;
		y=d*all;
	}
		a=a-10;
		s=s-10;
		d=d-1;
	}}
	if(x<10){
		y=x;
	}

	return y;
}

int multiplyAllDigits(int c){
	int n,all,a=999,s=900,d=9;
	if(c<=999 && c>=0){
		if(c>=100){
		while(d!=-1){
			if(c<=a && c>=s){
				all=c-s;
				n=d*section(all);
			}
				a=a-100;
				s=s-100;
				d=d-1;
		}}if(c<100){
			n=section(c);
		}

	}else{
		n=-1;
	}
	return n;

}
int main(){


	cout << multiplyAllDigits(5) << "\n";
	cout << multiplyAllDigits(999) << "\n";
	cout << multiplyAllDigits(1000) << "\n";
	cout << multiplyAllDigits(425) << "\n";
	cout << multiplyAllDigits(-69) << "\n";
	cout << multiplyAllDigits(109) << "\n";
	cout << multiplyAllDigits(478) << "\n";
	cout << multiplyAllDigits(259) << "\n";
	cout << multiplyAllDigits(853) << "\n";
	return 0;
}
