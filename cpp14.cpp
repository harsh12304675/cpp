#include<iostream>
using namespace std;
class match{
	private:
 static int score;
 static int ps;
	
	public:
	void show(){
		
			cout<<" "<<score<<" "<<ps<<"";
			score++;
			ps++;
		}
		static void update(){
				cout<<score;
		}
		
};
int match::score=390;
int match::ps=100;
main()
{
	
	match ::update();
	
}

