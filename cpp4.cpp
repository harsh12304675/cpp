//create a entire c++ program  to create two namespaces
#include <iostream>
using namespace std;

namespace First {
	int x=1;
	int y=2;
    
        
}

namespace Second {
   int x=4;
   int y=5;    
}

int main() {
   using First::x;
   cout<<x<<endl;
   using First::y;
   cout<<y<<endl;
   cout<<Second::x<<endl;
   cout<<Second::y<<endl;
   return 0;
}
