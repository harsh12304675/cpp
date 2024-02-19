//create a entire c++ program to find fabonacci series using classes
#include <iostream>
using namespace std;

class Fibnix {
	private:
		int n1 = 0, n2 = 1, n3;
public:
     getdata(int n) {
        

        cout << "Fibonacci Series up to " << n << " terms: ";
        for (int i = 0; i < n; i++) {
            if (i <= 1) {
                n3 = i;
            } else {
                n3 = n1 + n2;
                n1 = n2;
                n2 = n3;
            }
            cout << n3 << " ";
        }
    }
};
 main() {
    Fibnix obj;
    int terms = 20;  

    obj.getdata(terms);

    return 0;
}
