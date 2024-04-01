#include<iostream>
using namespace std;
int main(){
	int n;
	cin >> n;
	int sum;
	sum=0;
	for(int i=0;i<=n;i++){
		if(i%2!=0){
			if(i==3){
				continue;// xet nếu i bằng 3 thì bỏ qua giá trị 3 ;
			}
			sum+=i;
		}
	}
	cout << " tong cac so le tu 1- 7 ngoai tru so 3 la:  " << sum;
	return 0;
}