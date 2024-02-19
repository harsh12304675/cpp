#include <iostream>
using namespace std;

struct Struct {
  double z;
  int x;
  char y;
};

union Union {
  int a;
  double  b;
  char c;
};

int main() {
  cout << "Size of Struct: " << sizeof(Struct) << " bytes" << endl;
  cout << "Size of Union: " << sizeof(Union) << " bytes" << endl;

  return 0;
}
