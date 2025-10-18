// #include <iostream>
// using namespace std;
// class stack {
//     int capacity;
//     int* arr;
//     int top;
//     public:
//     stack(int c){//user kitni badi stack banana chahata h
//         this->capacity = c;
//         arr  = new int[c];//capacity ke hisaab se uss size ki array bhi banegi
//         this->top = -1;//top ele ko -1 se initiazise krdo
//     }
//     void push(int data){//jo no. push krna h int data
//         if(this->top == this->capacity -1 ){//pehle check kro ki stack full toh ni h size ke hisaab se
//             cout<<"overflow\n";//agr top element barabr hoga capacity ke maltb last pr h so overflow msg print krdo that's stack is full
//             return;
//         }
//         this->top++;//dekho top hamare ek coursor type h jaise hi element aya so courson ko +=1 krdo jisse top uppr ajai (courson hamara jis uss top pr data daal do)
//         this->arr[this->top] =data; //arr ke toppr data daal do j aya h push me
//     }
//     int pop (){
//         if(this->top == -1){ //agr top wali last -1 mtlb kuch ni h so return krdena -1 
//             cout<<"OUNDERFLOW\n";
//             return -1;
//         }
//         this->top--;//simply top ki value remove ho jaigi 
//     }
//         int gettop(){
//         if(this->top == -1){
//             cout<<"UNDERFLOW\n";
//             return -1;
//         }
//         cout<<"TOP ELEMENT OF STACK ";
//         return this->arr[this->top];//chup caap top ele of arr return krdo
//         cout<<"\n";
//     }
//     bool isEmpty(){
//         return this->top == -1;
//     }
//     int size(){
//         cout<<"SIZE OF STACK = ";
//         return this->top + 1;
//     }
//     bool isFull(){
//         return this->top == this->capacity -1;
//     }
//     void display(){
//     if (this->top == -1){  //AGR KUCH NI H YAHI TOP = -1 SO EMPTY PRINT HOJAIGA
//         cout << "Stack is empty\n";
//         return;
//     }
//     cout << "Stack elements (top to bottom): ";
//     for (int i = this->top; i >= 0; i--){//stateing krna  h top se jana h 0 tak 
//         cout << this->arr[i] << " ";
//     }
//     cout << "\n";
// }

// };
// int main(){
//     stack s1(5);
//     s1.push(4);
//     s1.push(2);
//     s1.display();
//     s1.push(8);
//     s1.push(3);
//     cout<<s1.size();
//     s1.display();
//     s1.pop();
//     s1.pop();
//     s1.pop();
//     s1.display();
//     cout<<s1.gettop();
//     s1.pop();
//     s1.display();

// }   





#include <iostream>
using namespace std;
class stack{
    int capacity;
    int* arr;
    int top;
    public:
    stack( int c ){
        this->capacity = c;
        arr = new int[c];
        this->top = -1;
    };
    int push(int d){
        if(this->top == this->capacity -1){
            cout<<"STACK IS FULL OR OVERFLOW...";
            return -1;
        }
        this->top++;
        this->arr[this->top] = d;
    }
    int pop(){
        this->top--;
    }
    void display(){
        cout<<"DISPLAY THESTACK :\n";
        for(int i = this->top;i>=0;i--){
            cout<<this->arr[i]<<"\n ";
        }
    };
};
int main(){
    stack s1(5);
    s1.push(4);
    s1.push(5);
    s1.push(4);
    s1.push(2);
    s1.push(1);
    s1.push(4);
    s1.display();

}
