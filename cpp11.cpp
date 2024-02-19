#include <iostream>
using namespace std;

class Rectangle {
  public:
    double length;
    double width;

    double getArea() {
    	cout<<"enter the length and width of the rectangle"<<endl;
  cin>>length>>width;
      return length * width;
    }
};

int main() {
  Rectangle rect;
  

  cout << "Area of the rectangle: " << rect.getArea() << endl;

  return 0;
}
