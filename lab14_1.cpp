#include <iostream>
using namespace std;


int main(){
	//Write your code here.
	int a = 5;
	char b ='A';
	char &c = b;
	int *x = &a;
	char *y =&b;
	int **z =&x;
	
	cout<<"value of a,b,c,x,y,z  \n"<<a<<","<<b<<","<<c<<","<<x<<","<<(int *)y<<","<<z<<endl;
	
	cout<<"Address of a,b,c,x,y,z \n"<<&a<<","<<(int *)&b<<","<<(int *)&c<<","<<&x<<","<<&y<<","<<&z<<endl;
	
	c='F';
	
	cout<<"value of a,b,c,x,y,z \n"<<a<<","<<b<<","<<c<<","<<x<<","<<(int *)y<<","<<z<<endl;

	*y = 'W';
	
	cout<<"value of a,b,c,x,y,z \n"<<a<<","<<b<<","<<c<<","<<x<<","<<(int *)y<<","<<z<<endl;
	
	*x=6;
	
	cout<<"value of a,b,c,x,y,z \n"<<a<<","<<b<<","<<c<<","<<x<<","<<(int *)y<<","<<z<<endl;
	
	**z=7;
	cout<<"value of a,b,c,x,y,z \n"<<a<<","<<b<<","<<c<<","<<x<<","<<(int *)y<<","<<z<<endl;
	
	return 0;
}
