#include<iostream>
#include<string>
class Dog{

    private:
        size_t leg_count;
        size_t arm_count;
        int* p_age;
    public:
        Dog() = default;
        void bark(){
            std::cout<<"bow bow!\n";
        }
};

int main(){

    Dog dog1;
    std::cout<<"size of size_t "<<sizeof(size_t)<<std::endl; //8
    std::cout<<"size of int pointer "<<sizeof(int*)<<std::endl;
    std::cout<<"size of (Dog) "<<sizeof(Dog)<<std::endl; // 16
    std::string name { "hellowordthhhhhhhhhhhhgd"};
    std::cout<<sizeof(name)<<" is size of name whatever the name contains\n";
    // it is basically printing the size of pointer
}
