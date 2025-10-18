#include <iostream>
using namespace std;
class stack {
    int capacity;
    int* arr;
    int top;
    public:
    stack(int c){
        this->capacity = capacity;
        arr  = new int[capacity];
        this->top = -1;
    }
    void push(int data){
        if(this->top == this->capacity -1 ){
            cout<<"overflow";
            return;
        }
        this->top++;
        this->arr[this->top] =data;
    }
    int pop (){
        if(t)
    }
};
int main(){
    cout<<"hekk";
}