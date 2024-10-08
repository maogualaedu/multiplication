#include <iostream>

int mul(int n){
    for (int i = 1; i <= n; i++){
        for(int y = 1; y <= 9; y++){
            std::cout << i << "x" << y << "=" << i*y << " ";
        }
            std::cout<<std::endl;
    }
    return 0;
}

int main(){
    int a; //Enter in for n
    std::cin>>a;
    return mul(a);
}
