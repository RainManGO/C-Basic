//
//  main.cpp
//  StorageSpaceAllocation
//
//  Created by zhangyu on 2019/9/26.
//  Copyright © 2019 zy. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    int y = 10;
    int d = y;
    
    std::cout << "值类型 地址打印如下:" << std::endl;
    std::cout << &y << std::endl;
    printf("%p\n",y);
    std::cout << &d << std::endl;
    printf("%p\n",d);
    
    
    int * x = new int(10);
    int* z = x;
    
    std::cout << "----------------" << std::endl;
    std::cout << "引用类型 地址打印如下:" << std::endl;
    std::cout << &x << std::endl;
    printf("%p\n",x);
    
    std::cout << &z << std::endl;
    printf("%p\n",z);
    
    
    std::cout << "----------------" << std::endl;
    std::cout << "一维数组 地址打印如下:" << std::endl;
    float * a = new float[5];
    printf("%p\n",a);
    printf("%p\n",&a[0]);
    
    
    std::cout << "----------------" << std::endl;
    std::cout << "delete 释放内存:" << std::endl;
    
    //只有动态分配的内存，delete 才去释放内存。
    //静态分配内存是在编译的时候去分配，一般在栈中
    
    int * u = new int(8);
    delete u;
    std::cout << *u << std::endl;
    
    int * u2;
    u2 = u;
    delete u2;
    std::cout << *u2 << std::endl;

    float * array  = new float[3];
    array[0] = 3.4;
    std::cout << array[0] << std::endl;
    
    delete [] array;
    
    std::cout << array[0] << std::endl;

    return 0;
}
