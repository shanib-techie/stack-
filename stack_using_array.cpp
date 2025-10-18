#include <iostream>
using namespace std;
class stack {
    int capacity;
    int* arr;
    int top;
    public:
    stack(int c){//user kitni badi stack banana chahata h
        this->capacity = c;
        arr  = new int[c];//capacity ke hisaab se uss size ki array bhi banegi
        this->top = -1;//top ele ko -1 se initiazise krdo
    }
    void push(int data){//jo no. push krna h int data
        if(this->top == this->capacity -1 ){//pehle check kro ki stack full toh ni h size ke hisaab se
            cout<<"overflow\n";//agr top element barabr hoga capacity ke maltb last pr h so overflow msg print krdo that's stack is full
            return;
        }
        this->top++;//dekho top hamare ek coursor type h jaise hi element aya so courson ko +=1 krdo jisse top uppr ajai (courson hamara jis uss top pr data daal do)
        this->arr[this->top] =data; //arr ke toppr data daal do j aya h push me
    }
    int pop (){
        if(this->top == -1){ //agr top wali last -1 mtlb kuch ni h so return krdena -1 
            cout<<"OVERFLOW\n";
            return -1;
        }
        // int val = this->arr[this->top];
        this->top--;//simply top ki value remove ho jaigi 
        // return val;
    }
        int gettop(){
        if(this->top == -1){
            cout<<"UNDERFLOW\n";
            return -1;
        }
        return this->arr[this->top];//chup caap top ele of arr return krdo
    }
    bool isEmpty(){
        return this->top == -1;
    }
    int size(){
        return this->top + 1;
    }
    bool isFull(){
        return this->top == this->capacity -1;
    }
};
int main(){
   stack st(5);
   st.push(1);
   cout<<st.gettop();
   
//    st.push(1);
//    st.push(2);
//    st.push(3);
//    cout<<st.gettop()<<"\n";
//    st.push(4);
//    st.push(5);
//    cout<<st.gettop()<<"\n";
//    st.push(8);
//    st.pop();
//    st.pop();
//    cout<<st.gettop()<<"\n";
}