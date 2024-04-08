#include <iostream>
#include "Animal.h"
#include "Info.h"
using namespace std;

int main() {
    Animal a(2, "Rax", 1);
    Animal b(6, "Kanistra", 1);
    Animal c(43, "Liyba", 0);
    Animal d(9, "Les", 0);
    Animal e(13, "Tar-Tar", 1);
    e.print();
    e.Nhappy(0);
    e.day(2);
    info(a);
    info(b);
    info(c);
    info(d);
    info(e);
}