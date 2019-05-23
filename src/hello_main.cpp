//
// Created by kuanchen on 2019-05-22.
//

#include <hello_lib.h>
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main(){
    hello();
    vector<int>v;
    v.push_back(1);
    cout<<v[0]<<endl;
    return 0;
}

