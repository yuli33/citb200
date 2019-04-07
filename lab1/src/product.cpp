#include "product.h"
Product::Product(string n, double p){
    this->name = n;
    this->price = p;
}

string Product::getName() {
    return this->name;
}

double Product::getPrice() {
    return this->price;
}