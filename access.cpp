#include<iostream>
using namespace std;

class MyClass {
  public:    // Public access specifier
    int x;
  private:
    int y;   // Private attribute
};

int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed (public)
  myObj.y = 50;  // Not allowed (private)
  cout<<myObj.x<<myObj.y;
  return 0;
}