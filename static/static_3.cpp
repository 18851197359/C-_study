#include<iostream>
using namespace std;

class Apple
{
private:
    /* data */
public:
    static void test(){
        cout<<"静态函数调用"<<endl;
    }
};

int main(){
    Apple::test();
    Apple obj1;
    obj1.test();
}