#include <iostream>
using namespace std;

class result{
	private:
		char name[20];
		int reg;
		int s1,s2;
		float avg;
		
		
	public:
		getdata(){
			cout<<"enter the name of the student"<<endl;
			cin>>name;
			cout<<"enter the reg no of the student"<<endl;
			cin>>reg;
			cout<<"enter marks of sub1"<<endl;
			cin>>s1;
			cout<<"enter marks of sub2"<<endl;
			cin>>s2;
			
		}
		showdata(){
			avg=(s1+s2)/2;
			cout<<"the average of the 2 subjects are"<<avg<<endl;
		}
	};
	main()
	{
	//	result obj1,obj2;
	//	cout<<"enter the data for student1"<<endl;
	//	obj1.getdata();
	///	obj1.showdata();
	//	cout<<"enter the data for student2"<<endl;
	//	obj2.getdata();
	///	obj2.showdata();
	result obj[5];
	int i;
	for(i=1;i<5;i++)	{
		cout<<"enter the marks of the student"<<i<<endl;
		obj[i].getdata();
		obj[i].showdata();
		
	}
	}
			
  
