#pragma once
#include <iostream>
using namespace std;
class Animal {
public:
    int voz;
    bool happy;
    string imia;

    Animal(int voz, string imia, bool happy);
    Animal();
    Animal(int voz, string imia);

    void print();
    void Nhappy(int e);
    void day(int num);
};