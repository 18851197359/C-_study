#include<iostream>

int main(){
    const int num = 0;
    const int * ptr = &num; //指向常量的指针
    std::cout<<*ptr<<std::endl;

    const int * const ptr_1 = &num; //指向常量的常指针
    std::cout<<*ptr_1<<std::endl;
    
    int const * const ptr_2 = &num;
    std::cout<<*ptr_2<<std::endl;
    
    return 0;

}