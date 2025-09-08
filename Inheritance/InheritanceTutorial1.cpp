#include<iostream>
// Inheritance is a feature in cpp to be able to build new classes in terms of already defined classes
// Inheritance Tree
//Base class and derived class
// Person --->Engineer
//        --->Doctor
// Vehicle ---> Truck or Mini van or Truck or Pickup Truck
// Person class and Player Class
// Player is derived from person
class Person
{
  
  public:
        Person();
        Person(std::string first_name_param,std::string last_name_param){
          
        }
        ~Person();
  private:
        std::string first_name{"Mysterious"};
        std::string last_name{"Person"};

}

class Player : 
