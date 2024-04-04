#include<iostream>
using namespace  std;

class Sum{
    public:
    void SumNum(int a, int b){
        int sum=a+b;
        cout<<sum;
    }
    void SumNum(int a, int b, int c){
        int sum=a+b+c;
        cout<<sum;
    }
    void SumNum(int a, int b, int c,int d){
        int sum=a+b+c+d;
        cout<<sum;
    }
};

int main(){
    Sum s;
    s.SumNum(10,20,30,40);
    return 0;
}