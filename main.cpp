#include <iostream>
#include "myLib/Math.h"
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    for (int i =0;i<10 ;i++){
        cout<<i<<endl;
    }
    Math myMath = Math();
    int c = myMath.add(1,2);
    cout<<c<<endl;


    return 0;

}