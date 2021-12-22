#include<iostream>
#include<string>

void print_num(){
    static int num = 0;
    std::cout<<num<<std::endl;
    num++;
}
int main(){
    for(int i=0; i<5; i++){
        print_num();
    }
    return 0;
}