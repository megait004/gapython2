#include<iostream>
using namespace std;
int main(){
//	// 1. kiểm tra 1 số xem số đó có phải là số nguyên tố hay không 
//	int a;
//	cin >> a;
//	int sum =0;
//	cout << "uoc cua so do la :";
//	for(int i=1;i<=a;i++){
//		if(a%i==0){
//	   		cout <<i << " " ;
//	   		sum=sum+i;
//	   	}
//		    
//			}
//		cout << " tong cua uoc la : " << sum  << endl;
//	   	sum =sum-1;
//	   	cout << "tong sau khi tru la :" << sum << endl ;
//	   	if(sum==a){
//	   		cout << a << " la so nguyen to";
//		   }
//		   else 
//		   	cout << a << " khong phai la so nguyen to ";
	   		//2. thực hiện nhập câu lệnh trong vòng lập với điều kiện số đó phải lớn hơn 0.
	   		int a;
	   		do{
	   			cin >> a;
	   			cout << " vui long nhap so a > 0" << endl;
	   			if(a>1){
	   				int sum =0;
			//	cout << "uoc cua so do la :";
				for(int i=1;i<=a;i++){
				if(a%i==0){
	   	//	cout <<i << " " ;
	   		sum=sum+i;
	   	}
		    
			}
		cout << " tong cua uoc la : " << sum  << endl;
	   	sum =sum-1;
	   	cout << "tong sau khi tru la :" << sum << endl ;
	   	if(sum==a){
	   		cout << a << " la so nguyen to";
   }
	   else{
	   	cout << a << " khong phai la so nguyen to " << endl;
	  	char kytu;
	  	cout << " ban co muon tiep tuc khong ? " << endl;
	  	cout << " bam n/N de thoat" << endl;
	  	cout << " bam y/Y de tiep tuc" << endl;
	  	cin >> kytu;
	  		if(kytu=='n'){
	  		break;
		  }
		 	else if(kytu=='y'){
			cout << " moi ban nhap lai a :";
			cin >> a;
			int tong =0;
				for(int i=1;i<=a;i++){
				if(a%i==0){
	   	//	cout <<i << " " ;
	   		tong=tong+i;
	   	}
		    
			}
		cout << " tong cua uoc la : " << sum  << endl;
	   	tong=tong-1;
	   	cout << "tong sau khi tru la :" << sum << endl ;
	   	if(tong==a){
	   		cout << a << " la so nguyen to";
   }
		}
				   }
		}
			  
			   }while(a<0);
	   		
	   		
	   		
	   		
	   		
	   		
	   		
	   		
	   		
}
		 
