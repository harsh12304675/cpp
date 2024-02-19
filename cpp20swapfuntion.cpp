#include<iostream>
using namespace std;
main()
{
	int a=88,b=99;
	void swap1(int * ,int *);
	cout<<"the  values of a and b before function call in main"<<a<<"  "<<b<<endl;
	swap1(&a,&b);
	cout<<"the values of a and b after function call in main"<<a<<" "<<b<<endl;
	
}
void swap1(int *x, int *y)
{
	cout<<"the  values of a and b before swapping the function"<<*x<<" "<<*y<<endl;
	int z;
	z=*x;
	*x=*y;
	*y=z;
	cout<<"the  values of a and b after swapping the function"<<*x<<" "<<*y<<endl;
	
}
