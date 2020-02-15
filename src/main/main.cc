#include <iostream>
#include "src/lib/solution.h"

int main()
{
    MaxHeap heap;
    std::cout << heap.top() << std::endl;
    heap.push(20);
    heap.push(5);
    heap.push(98);
    heap.push(9);
    heap.push(1002);
    std::cout << "-------------------------------" << std::endl;
    std::cout << heap.printheap() << std::endl;
    std::cout << "-------------------------------" << std::endl;
    heap.push(10);
    heap.pop();
    std::cout << heap.printheap() << std::endl;
    std::cout << "-------------------------------" << std::endl;
    heap.push(4);
    heap.push(79);
    heap.push(32);
    heap.push(62);
    heap.push(1032);
    heap.push(2);
    heap.push(1);
    heap.push(0);
    heap.push(10000);
    heap.push(-10);
    heap.push(3);
    heap.push(37);
    heap.push(91);
    heap.push(12);
    heap.push(-298);
    heap.push(52);
    heap.push(-29);
    heap.push(329);
    heap.push(46);
    heap.push(88);
    heap.push(77);
    heap.push(70);
    heap.push(69);
    heap.push(50);
    heap.push(40);
    heap.push(41);
    std::cout << heap.printheap() << std::endl;
    std::cout << "-------------------------------" << std::endl;
    std::cout << heap.top() << std::endl;
    std::cout << heap.GetLeft(0) << ", " << heap.GetRight(0) << std::endl;
    std::cout << heap.GetLeft(1) << ", " << heap.GetRight(1) << ", " << heap.GetLeft(2) << ", " << heap.GetRight(2) << std::endl;
    std::cout << heap.GetLeft(3) << ", " << heap.GetRight(3) << ", " << heap.GetLeft(4) << ", " << heap.GetRight(4) << ", " << heap.GetLeft(5) << ", " << heap.GetRight(5) << ", " << heap.GetLeft(6) << ", " << heap.GetRight(6) << std::endl;
    std::cout << heap.GetLeft(7) << ", " << heap.GetRight(7) << ", " << heap.GetLeft(8) << ", " << heap.GetRight(8) << ", " << heap.GetLeft(9) << ", " << heap.GetRight(9) << ", " << heap.GetLeft(10) << ", " << heap.GetRight(10) << ", " << heap.GetLeft(11) << ", " << heap.GetRight(11) << ", " << heap.GetLeft(12) << ", " << heap.GetRight(12) << ", " << heap.GetLeft(13) << ", " << heap.GetRight(13) << ", " << heap.GetLeft(14) << ", " << heap.GetRight(14) << std::endl;

    return EXIT_SUCCESS;
}