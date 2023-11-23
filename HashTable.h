#include <vector>
#include <string>

using namespace std;

class Node{
  public:
    Node* next;
    string key;
    int value;
    Node(int v, string k){
      value = v;
      key = k;
      next = nullptr;
    }
};

class HashTable{
  public:
    int size;
    vector<Node*> items;
    HashTable(int s){
      size = s;
      items = vector<Node*>(s,nullptr);
    }
    bool insert(string k, int v);
    int find(string k);
    void display();
    int remove(string k);
};
