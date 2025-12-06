#include <iostream>
using namespace std;
class Node{
    public:
    int val;
    Node* next; 
        Node(int val) {
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
void display_rev(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
}
void display(Node* head){
    if(head != NULL){
        display(head->next);
        cout<<head->val<<" ";
    }
}
int main(){
    stack st;
    st.push(10);
    st.push(20);
    display_rev(st.head);
    cout<<endl;
    display(st.head);


    
}