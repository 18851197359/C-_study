// 当类对象为静态时，它的生命周期为整个程序的生命周期


#include<iostream>

class Apple{
private:
    int i = 0;
public:
    Apple();
    ~Apple();
};

Apple::Apple(){
    std::cout<<"非静态构造"<<std::endl;
}

Apple::~Apple(){
    std::cout<<"非静态析构"<<std::endl;
}


int main(){
    int x = 0;
    if(x==0){
        // 在这里，如果声明为静态，那么析构函数会在程序结束时调用
        // 若声明为非静态，那么对象的范围仅在声明的if块内，析构函数会在if块结束时调用
        static Apple obj1;
    }

    std::cout<<"测试点"<<std::endl;
}
