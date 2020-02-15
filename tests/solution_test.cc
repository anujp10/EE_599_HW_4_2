#include "src/lib/solution.h"
#include "gtest/gtest.h"
#include <vector>

TEST(HeapShould, HeapReturn) {
  MaxHeap heap;
  heap.push(1);
  heap.push(58);
  heap.push(8);
  int actual = heap.top();
  int expected = 58;
  EXPECT_EQ(expected, actual);
}

TEST(HeapShould_1, HeapReturn_1) {
  MaxHeap heap;
  int actual = heap.top();
  int expected = INT32_MIN;
  EXPECT_EQ(expected, actual);
}

TEST(HeapShould_2, HeapReturn_2) {
  MaxHeap heap;
  heap.push(1);
  heap.push(58);
  heap.push(8);
  heap.pop();
  int actual = heap.top();
  int expected = 8;
  EXPECT_EQ(expected, actual);
}

TEST(HeapShould_3, HeapReturn_3) {
  MaxHeap heap;
  heap.pop();
  int actual = heap.top();
  int expected = INT32_MIN;
  EXPECT_EQ(expected, actual);
}

TEST(HeapShould_4, HeapReturn_4) {
  MaxHeap heap;
  heap.push(1);
  heap.push(58);
  heap.push(8);
  heap.push(8);
  heap.push(81);
  heap.push(37);
  heap.push(0);
  heap.pop();
  int actual = heap.GetLeftIndex(1);
  int expected = 3;
  EXPECT_EQ(expected, actual);
}

TEST(HeapShould_5, HeapReturn_5) {
  MaxHeap heap;
  heap.push(4);
  int actual = heap.GetLeftIndex(0);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}

TEST(HeapShould_6, HeapReturn_6) {
  MaxHeap heap;
  heap.push(1);
  heap.push(58);
  heap.push(8);
  heap.push(10);
  heap.push(81);
  heap.push(37);
  heap.push(0);
  int actual = heap.GetRightIndex(2);
  int expected = 6;
  EXPECT_EQ(expected, actual);
}

TEST(HeapShould_7, HeapReturn_7) {
  MaxHeap heap;
  heap.push(4);
  int actual = heap.GetRightIndex(0);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}

TEST(HeapShould_8, HeapReturn_8) {
  MaxHeap heap;
  heap.push(4);
  heap.push(98);
  heap.push(32);
  int actual = heap.GetLargestChildIndex(0);
  int expected = 2;
  EXPECT_EQ(expected, actual);
}

TEST(HeapShould_9, HeapReturn_9) {
  MaxHeap heap;
  heap.push(4);
  heap.push(98);
  heap.push(32);
  int actual = heap.GetLargestChildIndex(2);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}

TEST(HeapShould_10, HeapReturn_10) {
  MaxHeap heap;
  heap.push(4);
  heap.push(98);
  heap.push(32);
  heap.push(62);
  heap.push(1032);
  heap.push(2);
  int actual = heap.GetParentIndex(5);
  int expected = 2;
  EXPECT_EQ(expected, actual);
}

TEST(HeapShould_11, HeapReturn_11) {
  MaxHeap heap;
  heap.push(4);
  heap.push(98);
  heap.push(32);
  heap.push(62);
  heap.push(1032);
  heap.push(2);
  int actual = heap.GetParentIndex(0);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}

TEST(HeapShould_12, HeapReturn_12) {
  MaxHeap heap;
  heap.push(4);
  heap.push(98);
  heap.push(32);
  heap.push(62);
  heap.push(1032);
  heap.push(2);
  int actual = heap.GetLargestChildIndex(0);
  int expected = 1;
  EXPECT_EQ(expected, actual);
}

TEST(HeapShould_13, HeapReturn_13) {
  MaxHeap heap;
  heap.push(4);
  int actual = heap.GetLargestChildIndex(0);
  int expected = -1;
  EXPECT_EQ(expected, actual);
}