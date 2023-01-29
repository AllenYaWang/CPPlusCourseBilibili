//
// Created by wleid on 29/1/2023.
//
#include <iostream>
using namespace std;

/*
 * 这个程序演示了有符号和无符号整数之间的差别
 */
int main(){
    short int i; // 有符号短整形；
    short unsigned int j; // 无符号短整形；

    j = 50000;
    i = j;
    cout << i << " " << j;
    return 0;
}
/*
 * 在一些不可能取值为负数的时候，可以定义为unsigned，在一些底层的嵌入式编程的数据一般都是无符号的。
 * https://www.jianshu.com/p/ffc93ee10567
 */