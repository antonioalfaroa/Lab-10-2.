#include <iostream>

using namespace std;

class person{
public:
virtual void printDescription()=0;
virtual void printGender()=0;
};

class man:public person{
public:
string description;

void printDescription(){
  cout<<"Description is : "<<description<<endl;
}
void printGender(){
  cout<<"Description : "<<description<<" is a men"<<endl;
}

};

class woman:public person{
public:
string description;

void printDescription(){
  cout<<"Description is : "<<description<<endl;
}
void printGender(){
  cout<<"Description : "<<description<<" is a woman"<<endl;
}

};


int main(){
  man m;
  woman w;
  m.description="David";
  w.description="Karol G";
  m.printDescription();
  m.printGender();
  w.printDescription();
  w.printGender();

  
}