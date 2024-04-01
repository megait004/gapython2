#include<iostream>
using namespace std;
int main(){
	int gt=1;
	int sum=0;
	for(int i=1;i<=10;i++){
		gt=gt*i;//  tính giai thừa 
		sum=sum+(gt); // tính tổng giai thừa 
	}
	cout << sum;
	return 0;
}

