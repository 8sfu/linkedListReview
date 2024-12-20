#ifndef LIST2_H
#define LIST2_H

struct Node {
  int value;
  Node* nextNode = nullptr;
};
  
class List {
 public:
  List();
  void print();
  ~List();
  Node* getHead();
  Node* removeHead();
  void addHead(Node* newHead);
 private:
  Node* first = nullptr;
  int* listLength;
};

#endif
