#include "HashTable.h"
#include <iostream>

using namespace std;

bool HashTable::insert(string k, int v){
  int ki = 0;
  for(int i: k) ki += i;
  int index = ki % size;
  if(items[index] != nullptr){
    Node* temp = items[index];
    while(temp->next != nullptr){
      temp = temp->next;
    }
    temp->next = new Node(v, k);
    return true;
  }
  items[index] = new Node(v, k);
  return false;
}

int HashTable::find(string k){
  int index = 0;
  for(int i: k) index += i;
  index = index % size;
  if(items[index] != nullptr){
    Node* temp = items[index];
    while(temp != nullptr){
      if(temp->key == k) return temp->value;
      temp = temp->next;
    }
  }
  return -1;
}

void HashTable::display(){
  for(int i = 0; i < size; ++i){
    Node* temp = items[i];
    cout << i << "...   ";
    while(temp != nullptr){
      cout << temp->key << ": " << temp->value << "->";
      temp = temp->next;
    }
    cout << endl;
  }
}

int HashTable::remove(string k){
  int i = 0;
  for(int j : k) i += j;
  i = i % size;
  if(items[i] == nullptr) return -1;
  Node* temp = items[i];
  if(temp->key == k){
    items[i] = temp->next;
    delete temp;
  }
  while(temp->next != nullptr){
    if(temp->next->key == k){
      Node* inter = temp->next;
      temp->next = temp->next->next;
      delete inter;
    }
  }
  return -1;
}

