#include <iostream>
#include <stack>
using namespace std;
void print(stack<int> st){
        stack<int> temp;
    while(st.size() > 0){

        cout<<st.top()<<" ";
        temp.push(st.top());
        st.pop();
    }

}

int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout<<st.top()<<"\n";
    print(st);
    cout<<"\n";

    stack<int> sec;
    stack<int> third;

    // empty the st and put all value in stack second
    while(st.size() > 0 ){
        int x = st.top();
        sec.push(x);
        st.pop();
    }
    // empty second stack then put into third stack
        while(sec.size() > 0 ){
        int y = sec.top();
        third.push(y);
        sec.pop();
    }
    // not move all ele from third to first stack for reverse printing
            while(third.size() > 0 ){
        int z = third.top();
        st.push(z);
        third.pop();
    }

    cout<<st.top()<<"\n ";
    print(st);
    cout<<"\n";
}