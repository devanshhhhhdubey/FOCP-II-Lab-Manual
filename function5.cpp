#include <iostream>

void swapValues(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void swapPointers(int **pa, int **pb) {
    int* tmp = *pa;
    *pa = *pb;
    *pb = tmp;
}

int main() {
    int x = 5, y = 10;
    std::cout << "Before swapValues: x=" << x << ", y=" << y << '\n';
    swapValues(&x, &y);
    std::cout << "After swapValues:  x=" << x << ", y=" << y << '\n';

    int a = 1, b = 2;
    int *p = &a;
    int *q = &b;
    std::cout << "Before swapPointers: *p=" << *p << ", *q=" << *q << '\n';
    swapPointers(&p, &q);
    std::cout << "After swapPointers:  *p=" << *p << ", *q=" << *q << '\n';

    return 0;
}