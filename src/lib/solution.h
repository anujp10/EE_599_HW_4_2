#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class MaxHeap
{
public:
  MaxHeap()
  {
    data_.clear();
  }

  int GetParentIndex(int i);
  int GetLeftIndex(int i);
  int GetRightIndex(int i);
  int GetLargestChildIndex(int i);
  int GetLeft(int i);
  int GetRight(int i);
  int GetParent(int i);
  int top();
  void push(int v);
  void pop();
  void TrickleUp(int i);
  void TrickleDown(int i);
  std::string printheap();

private:
  std::vector<int> data_;
};

#endif