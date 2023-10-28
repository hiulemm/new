#include <iostream>

using namespace std;
int tong(int a, int b){
	return a+b;
}
int hieu(int a, int b){
	return a-b;
}
int tich(int a, int b){
	return a*b;
}
float thuong(int a, int b);
int main()
{
	int a, b;
	cout << "DAY LA CHUONG TRINH DE THUC HANH GIT";
	cout<<"Nhap a: ";
	cin>> a;
	cout<<"Nhap b: ";
	cin>>b;
	cout<< a<<"+"<<b<<"="<<tong(a,b);
	cout<< a<<"-"<<b<<"="<<hieu(a,b);
	system("pause");
	return 0;
}
