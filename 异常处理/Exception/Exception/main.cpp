//
//  main.cpp
//  Exception
//
//  Created by zhangyu on 2019/9/25.
//  Copyright © 2019 zy. All rights reserved.
//

#include <iostream>

int abc(int a, int b, int c);

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    try {
         std::cout << abc(0, 0, 1) << std::endl;
    } catch (const char* e) {
        std::cout << e << std::endl;
        return 1;
    }
    return 0;
}

int abc(int a,int b,int c){
    if (a<=0||b<=0||c<=0) {
        throw "expression";
    }
    return a+b*c;
}

