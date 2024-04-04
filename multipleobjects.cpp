#include<iostream>
using namespace std;


class car{
    public:
    string model;
    string carName;
    int year;
};

int main(){
    car obj1;
    car obj2;

    obj1.model="Bugatti";
    obj1.carName="Chiron";
    obj1.year=2002;

    obj2.model="Audi";
    obj2.carName="X15";
    obj2.year=2012;
    
    cout<<"The First Car is:"<<obj1.model<<" "<<obj1.carName<<" "<<obj1.year<<"\n";
    cout<<"The Second Car is:"<<obj2.model<<" "<<obj2.carName<<" "<<obj2.year<<"\n";
}