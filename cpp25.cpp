#include<iostream>
using namespace std;
class rect2;
class rect
{
		private:
		int a,l=10,b=9;
	
		public:
			friend int area(rect r,rect2 r2);//friend funtion declaration
			get(){
				l=10;
				b=9;
				cout<<"vlues of a and b are"<<l<<" "<<b<<endl;
			}
		};
			class rect2
			{
				private:
			
				int x,y;
				public:
						friend int area(rect r,rect2 r2);//friend funtion declaration
					get2(){
						x=90;
						y=80;
						cout<<"values of x nad y are "<<x<<" "<<y<<endl;
					}
			};
				
			
			int area(rect r,rect2 r2)
			{
				int ar;
				ar=r.l*r.b;
				cout<<ar;
			}
			main(){
				rect obj;
				obj.get();
				rect2 obj2;
				obj2.get2();
			cout<<area;
			}

