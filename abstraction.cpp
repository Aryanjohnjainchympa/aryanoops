#include<iostream>
using namespace std;
class Alpha{
    private:    //here we cannot directly accessed the value of a and b
    int a,b;
    public:
    int beta(int p,int q){ //so we make a function and pass the arguments and assigning the values of a and b to the arguments
        a=p;
        b=q;
    }

    void display(){ 
        cout<<a<<endl;
        cout<<b;
    }
};

int main(){
    Alpha obj;
    obj.beta(10,15);
    obj.display();
    return 0;
}