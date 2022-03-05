#include <iostream>
using namespace std;
template <class T> 
struct Node{
    T element; 
    Node<T> * next; 
    Node(T t = T(), Node<T> * n = 0): element(t), next(n){}
}; 

template <class T> 
class AList{
    Node<T> * head; 
    int size;
    int maxSize; 
public: 
    AList (T t){
    head = new int [t];
    size = 0;
  }
    AList(): head(0), size(0){}
    bool isEmpty() const {return size==0;}
    Node<T> * & getLink(int i){
        if (i<0||i>size) throw "Chi so sai\n"; 
        if (!i) return head; 
        Node<T> * v = head; 
        for (int j = 0; j<i-1; j++)
            v = v->next; 
        return v->next; 
    }
bool isEmpty(){return size == 0;}
bool isFull(){return size == maxSize;} 
void remove (T i){
        if (i<0||i>=size)throw "Chi so sai\n"; 
        Node<T> * v = getLink(i); 
        getLink(i) = getLink(i+1);
        delete v;  
        size--; 
    };
void add(int i, const T & t ){
  for(Node<T> v = head;v;v = v->next ,i++)
    if (v->elment >= t) break;
  getLink(i) = new Node<T>(t,getLink(i));
  size++;
}
void replace(int i, const T & t ){
  if(i<0 || i>=size) throw "chi so sai\n";
  remove(i);
  add(t);
  }
};
int main() {
  AList <int> l;
}
