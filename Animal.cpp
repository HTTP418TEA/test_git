#include "Animal.h"
Animal::Animal(int voz, string imia, bool happy) {
    this->voz = voz;
    this->imia = imia;
    this->happy = happy;
}
Animal::Animal() {
}
Animal::Animal(int voz, string imia) {
    this->voz = voz;
    this->imia = imia;
}

void Animal::print() {
    cout << imia << "\t" << voz << "\t" << boolalpha << happy << endl;
}
void Animal::Nhappy(int e) {
    happy = e;
    print();
}
void Animal::day(int num) {
    voz += num;
    print();
}