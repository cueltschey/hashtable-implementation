#include "HashTable.h"
#include <iostream>

using namespace std;
  
int main(){
  HashTable ht = HashTable(10);
  ht.insert("hello", 9);
  ht.insert("test",11);
  ht.insert("nine",40);
  ht.insert("ll", 67);
  ht.insert("readingstuff", 44);
  ht.insert("t",4);
  ht.insert("123", 19);
  ht.display();

  cout << ht.find("ll") << endl;
  cout << ht.find("nine") << endl;
  cout << ht.find("123") << endl;
  
  cout << ht.remove("nine") << endl;
  cout << ht.remove("none") << endl;

  return 0;
}
