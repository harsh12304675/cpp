#include<iostream>
using namespace std;
void sum1(int);
void sum1(int a,int b);
void sum1(double , double);
void sum1(char,char);
main(){
	sum1(2);
	sum1(2,3);
		sum1('a','b');
	sum1(9.5,9.8);
	
}
void sum1(int a)
{cout<<a<<endl;}
void sum1(int a,int b)
{cout<<a<<" "<<b<<endl;}
void sum1(char a,char b)
{cout<<a<<" "<<b<<endl;}
void sum1(double a,double b)
{cout<<a<<" "<<b<<endl;}

