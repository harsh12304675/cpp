#include<iostream>
using namespace std;
int fun(int x);
main()
{
	fun(5);
	
}
int fun(int x)
{
	cout<<x;
	fun(5);
}
