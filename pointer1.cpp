#include <iostream>
using namespace std;
int main(){
	int a;
	int &b=a;//ÒýÓÃ 
	cin>>a;
	cout<<b; 
	int *p;//Ö¸Õë 
	p=&b;
	cout<<*p;
	} 
