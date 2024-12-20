#include <iostream>
#include <cstring>
#include "list2.h"

using namespace std;

void printCurrentHead(List* list){
  cout << "current head is " << list->getHead()->value << endl;
  return;
}

int main(){
  List* a = new List();
  cout << endl;
  a->print();
  printCurrentHead(a);
  Node* head2 = a->removeHead();
  cout << "removed " << head2->value << endl;
  printCurrentHead(a);
  a->addHead(head2);
  cout << "added back head " << a->getHead()->value << endl;
  printCurrentHead(a);
  
  delete a;
  
  return 0;
}
