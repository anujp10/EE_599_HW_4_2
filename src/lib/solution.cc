#include "solution.h"

void swap(int &a, int &b)
{
  int temp;

  temp = a;
  a = b;
  b = temp;
}

std::string MaxHeap::printheap()
{
  std::string result;
  for (unsigned i = 0; i < data_.size() - 1; i++)
  {
    result += std::to_string(data_[i]);
    result += ' ';
  }
  result += std::to_string(data_[data_.size() - 1]);

  return result;
}

int MaxHeap::GetParentIndex(int i)
{
  if (i == 0 || (unsigned int)i >= data_.size())
    return -1;
  else
    return (i - 1) / 2;
}

int MaxHeap::GetLeftIndex(int i)
{
  if ((unsigned int)((i * 2) + 1) >= data_.size())
    return -1;
  else
    return ((i * 2) + 1);
}

int MaxHeap::GetRightIndex(int i)
{
  if ((unsigned int)((i * 2) + 2) >= data_.size())
    return -1;
  else
    return ((i * 2) + 2);
}

int MaxHeap::GetLargestChildIndex(int i)
{
  if ((unsigned int)i >= data_.size())
    return -1;
  else
  {
    if (GetLeft(i) == INT32_MIN && GetRight(i) == INT32_MIN) {
      return -1;
    }
    else {
      if (GetLeft(i) > GetRight(i))
        return GetLeftIndex(i);
      else
        return GetRightIndex(i);
    }
  }
}

int MaxHeap::GetLeft(int i)
{
  if (GetLeftIndex(i) != -1)
    return data_[GetLeftIndex(i)];
  else
    return INT32_MIN;
}

int MaxHeap::GetRight(int i)
{
  if (GetRightIndex(i) != -1)
    return data_[GetRightIndex(i)];
  else
    return INT32_MIN;
}

int MaxHeap::GetParent(int i)
{
  if (GetParentIndex(i) != -1)
    return data_[GetParentIndex(i)];
  else
    return INT32_MIN;
}

int MaxHeap::top()
{
  if (MaxHeap::data_.size() == 0)
    return INT32_MIN;
  else
    return data_[0];
}

void MaxHeap::push(int input)
{
  data_.push_back(input);
  if (data_.size() != 0)
  {
    TrickleUp(data_.size() - 1);
  }
}

void MaxHeap::pop()
{
  if (data_.size() == 0)
    return;
  TrickleDown(0);
}

void MaxHeap::TrickleUp(int i)
{
  while (GetParent(i) < data_[i] && i != 0)
  {
    swap(data_[GetParentIndex(i)], data_[i]);
    i = GetParentIndex(i);
  }
}

void MaxHeap::TrickleDown(int i)
{
  swap(data_[0], data_[data_.size() - 1]);
  data_.pop_back();
  while ((unsigned int)i < data_.size())
  {
    if (GetLargestChildIndex(i) != -1)
    {
      if (data_[i] < data_[GetLargestChildIndex(i)])
        swap(data_[i], data_[GetLargestChildIndex(i)]);
      i = GetLargestChildIndex(i);
    }
    else
      return;
  }
}