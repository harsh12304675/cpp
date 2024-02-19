#include<iostream>
using namespace std;
void volume(int l,int b,int h=11);
main()
{
	volume(1,2,33);	
}
void volume(int l,int b,int h){
	int v;
	v=l*b*h;
	cout<<v;
	
}
