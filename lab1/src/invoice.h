#ifndef LAB1_INVOICE_H
#define LAB1_INVOICE_H


#include <vector>
#include "product.h"
#include "item.h"
#include <vector>

using std::vector;

class Invoice {
public:
    void add(Product product, int quantity);
    vector<Product> getProducts();
private:
    vector<Item> items;
};


#endif //LAB1_INVOICE_H
