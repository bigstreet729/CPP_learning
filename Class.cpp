#include <iostream>

struct Foo{
  int& ref; // error a reference must be initialized
}
struct Bar{
  int &ref;
  Bar(int& r): ref(r) {}; //happy because reference is initalized 
}
class Cylinder{
  private:
    int height;
    int radius;
  public:
    Cylinder() : height(1),radius(1){};
    Cylinder(int h,int r) : height(h),radius(r){};


}
