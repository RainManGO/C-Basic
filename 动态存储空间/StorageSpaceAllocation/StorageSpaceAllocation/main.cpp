//
//  main.cpp
//  StorageSpaceAllocation
//
//  Created by zhangyu on 2019/9/25.
//  Copyright © 2019 zy. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    int y = 10;
    int * x = new int(10);
    int z = 5;
    int * f = new int(5);
    int d = y;
    printf("%x\n",y);
    printf("%d\n",y);
    
    printf("%x\n",z);
    printf("%p\n",z);
    
    printf("%x\n",x);
    printf("%p\n",x);
    
    printf("%x\n",f);
    printf("%p\n",f);
    return 0;
}
