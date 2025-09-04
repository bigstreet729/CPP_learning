#include<iostream>

//this is about delegate constructor it helps you reuse one constrcutor from another constructor and make a constructor look clean.
// it is a constructor that calls another constructor in the same class.

class Rectangle{
  private:
      int widht,height;
  public:
      Rectangle(){
        width=0;
        height=0;
      }
      Rectangle(int w){
          width=w;
      }
      Rectangle(int w,int h){ // the widht and height variables first created and initalized to 0 and then changed to w and h respectively
        width=w;
        height=h;
      }
      Rectange(int w,int h) : width(w),height(h) {}; // the wdith and height variablse are created and initalized with value of w and h directly
  
}

//with delegaotrs
  class Rect{
    private:
          int width,int height;
    public:
          Rect() : Rect(0,0){};
          Rect(int w) : Rect(w,0){};
          Rect(int w,int h){
            width=w;
            height=h;
          }
}

int main(){
  
  return 0;

}
