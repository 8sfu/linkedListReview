#include <iostream>
#include <cstring>
#include "list2.h"

using namespace std;

List::List(){
  srand(time(NULL));
  int listLength = 10+rand()%5;
  //  int* lengthPtr = &listLength;
  cout << "len " << listLength << endl;

  this->first = new Node();
  
  Node* currentNode = this->first;
  Node* newNode = nullptr;
  int newValue;
  
  for(int i = 1; i <= listLength; i++){
    newNode = new Node();
    newValue = rand()%20+1;
    currentNode->value = newValue;
        cout << i << ":" << newValue << endl;
    currentNode->nextNode = newNode;
    currentNode = newNode;
  }  
}

void List::print(){
  Node* currentNode = this->first;
  int n = 1;
  cout << this->first->value << endl;
  while(currentNode->nextNode != nullptr){
    cout << n << ":" << currentNode->value << endl;
    currentNode = currentNode->nextNode;
    n++;
  }
  return;
}
/*
Node* List::getHead(){
  return this->first;
}
/*
  
Node* List::removeHead(){
  Node* placeholder = this->first;
  this->first = this->first->nextNode;
  return placeholder;
}

void List::addHead(Node* newHead){
  newHead->nextNode = this->first;
  this->first = newHead;
  return;
  }*/

List::~List(){
  delete first;
}

/*

void List::build(Node* currentNode, Node* nextNode, int* listLength){
  currentNode->nextNode = nextNode;
  if(*listLength > 1){
    this->build(nextNode,new Node(),listLength);
  }
  cout << "Finished list compile." << endl;
  return;
}

void List::print(){
  Node* checkNode = firstNode;
  for(int i = 0; i < *(this->listLength)-1; i++){
    cout << checkNode->getNext()->getValue() << endl;
    checkNode = checkNode->getNext();
  }
  return;
}
*/
