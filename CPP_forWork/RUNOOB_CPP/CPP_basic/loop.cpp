//
// Created by wleid on 31/1/2023.
//
/*
 * c++ for循环的语法
 for (init; condition; increment)
 {
    statement(s);
 }
 */
#include <iostream>
using namespace std;

int main(){
    // for循环；
    for (int a = 10; a < 20; a++){
        cout << "value for a: " << a << endl;
    }
    int i, j;
    for (i = 2; i < 100; i++){
        for (j = 2; j <= (i / j); j++){
            if (!(i % j)){
                break;
            }
        }
        if (j > (i / j)){
            cout << i << "is prime number " << endl;
        }
    }
    return 0;
}
