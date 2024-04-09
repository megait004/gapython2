#include<iostream>
using namespace std;
int main(){
//	1. kiểm tra 1 số xem số đó có phải là sổ hoàn hảo hay không 
//		int a ;
//		cin >> a;
//		int sum = 0;
//		for(int i=1;i<a;i++){
//			if(a%i==0){
//				//cout <<i << endl;
//				sum=sum+i;
//			}
//		}
//		if(sum==a){
//			cout << a <<  "  la so hoan hao" ;
//		}
//		else 
//			cout << a << " khong phai la so hh " ;
	// 2. kiêm tra các số hoàn hảo trong phạm vi 1-1000.
	   for(int n=1;n<=1000;n++){
	   		int sum =0;
		for(int i=1;i<n;i++){
			if(n%i==0){
				//cout <<i << endl;
				sum=sum+i;
			}
		}
		if(sum==n){
			cout << n <<  "  la so hoan hao" ;
		}	
			
					}
					
					
					
}