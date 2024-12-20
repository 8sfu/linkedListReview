


#include <iostream>
#include <cstring>
#include "list2.h"

using namespace std;


Node* List::getHead(){
  return this->first;
}

Node* List::removeHead(){
  Node* placeholder = this->first;
  this->first = this->first->nextNode;
  return placeholder;
}

void List::addHead(Node* newHead){
  newHead->nextNode = this->first;
  this->first = newHead;
  return;
}
