#include<iostream>

class Apple
{
public:
    static int i;
    Apple(){
        //do nothing
    };
};

int Apple::i = 1;// 显式初始化

int main(){
    Apple obj1;
    Apple obj2;
    obj2.i = 2;
    std::cout<<obj1.i<<std::endl<<Apple::i<<std::endl;
}

