#include<iostream>
using namespace std;

class student
{
	private:
		int age;
		int fee;
		float marks;
		int reg;
		 
		 public:
		 	getdata()
		 	{
		 		cout<<" enter the age and fee"<<endl;
		 		cin>>age>>fee;
		 		
			 }
	fun1()
		{
			cout<<age<<endl<<fee<<endl;
			}
		
	protected:
	};
	main()
	{
		student obj1, obj2;
		obj1.getdata();
		obj1.fun1();
	}
	
