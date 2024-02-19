#include<iostream>
using namespace std;
class sister;
class brother{
   int pay , bonus,totalb;
   public:
   	void getb(){
   		
   		pay =50000;
   		bonus=9000;
   		totalb=pay+bonus;
   		cout<<"total salary of brother is"<<totalb<<endl;
	   }
	   friend class sister;
	   
};
class sister{
	int oldsaving,total;
	public :
		void gets(){
			oldsaving=100000;
			 cout<<"old saving are"<<oldsaving<<endl;
		}
		void amount(brother objbb){
			total=oldsaving + objbb.totalb;
			cout<<"the total saving of sister "<<total<<endl;
		}
};
main(){
	brother objb;
	sister objs;
	objb.getb();
	objs.gets();
	objs.amount(objb);
	
}
