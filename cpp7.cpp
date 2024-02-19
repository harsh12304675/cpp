//write a entire c++ program to create class and objects and also private and public access speacifiers of it
#include<iostream>
using namespace std;
class first
{
	private:
		int x;
		int y;
			void getdata()
	{
		cout<<"enter the values of x and y"<<endl;
		x=4;
		
	}
	public:
	
	void showdata()
	{
		cout<<"x="<<x<<" y="<<y;}
	};
		 main()
		 {
		 	first obj;
		 	obj.getdata();
		 	obj.showdata();
			 }	

