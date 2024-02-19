#include<iostream>
using namespace std;
struct saa
{
	
	int age=21;
	float salary;
	
};
main()
{
	struct saa s1[5];
	int i;
	for(i=0;i<5;i++){
	cout<<"enter age"<<endl;
	
	
	cin>>s1[1].age;
	cout<<"enter salary"<<endl;

	cin>>s1[1].salary;
}
for(i=0;i<5;i++){
	cout<<s1[i].age<<endl;
	cout<<s1[i].salary<<endl;
}
	
}
