//
// Created by Gaurav Kumar on 04/07/2019.
//

#include "pointerConcept.h"
#include <iostream>
using namespace std;
class Concept
{
public:
    int x;
    void function_execute1();
    void function_execute2();
    void show_execution();
};

void Concept::function_execute1() {
    x = 10;
}

void Concept::function_execute2() {
    int *p = &x;
    cout<<"Value of P is "<<p<<endl;
    cout<<"Value of &p is "<<&p<<endl;
    cout<<"Value of *p is "<<*p<<endl;
}

void Concept::show_execution() {
    cout<<"Value of X is "<<x<<endl;
    cout<<"Value of &x is "<<&x<<endl;
}
