#include <iostream>
using namespace std;
int main(){
	int a;
	int &b=a;//���� 
	cin>>a;
	cout<<b; 
	int *p;//ָ�� 
	p=&b;
	cout<<*p;
	} 
