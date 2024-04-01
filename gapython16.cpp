#include<iostream>
using namespace std;
int main (){
int a,b;
a=10;
b=50;
cout << "Nhung so chia het cho 3 la :  ";
	for(int i=a;i<=b;i++){
		if(i%3==0){
		cout << i <<"  ";
		}
	}

	return 0;
}
