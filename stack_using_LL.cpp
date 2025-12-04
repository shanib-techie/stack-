#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next; 
        Node(int value) {
        this->val = val;
       this->next = NULL;
    }
};
class stack{
    public:
    Node* head;
    int size;
    stack(){
        head = NULL;
        size = 0;
    }
    void push(int val){
        Node* temp = new Node (val);
        temp->next = head;
        head = temp;
        size++;         
    }
    void pop(){
        if(head==NULL){
            cout<<"stack is empty ! "<<endl;
            return;
        }
        head = head->next;
        size--;
    }
    int top(){
        if(head==NULL){
            cout<<"stack is empty ! "<<endl;
            return -1;
        }
        return  head->val;
    }

};
int main(){
    stack st;
    st.head(10);
    st.head(20);
    


    
}