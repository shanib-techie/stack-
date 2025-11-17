// WE USE RECURSIVE AND SAME AS DIPLAY RECURSIVE FUNCTION
#include<iostream>
#include<stack>
using namespace std;
void recur_displaY(stack <int>& st){
    if(st.size() == 0) return;
    int x = st.top();
    st.pop();
    recur_displaY(st);
    cout<<x<<" ";
    st.push(x); // yeh wali line ki wajah se tumhari stack ke element katam ni hote alwys rehte ha

}
void push_at_bottom(stack<int>& st, int val){
    if(st.size() == 0){
       st.push(val);
       return;
    } int x = st.top();
    st.pop();
    push_at_bottom(st,val);
    st.push(x);
}
int main(){
    stack<int> st;
    st.push(23);
    st.push(45);
    st.push(66);
    st.push(77);
    st.push(11);
    recur_displaY(st);
    cout<<endl;
    push_at_bottom(st,-10);
    recur_displaY(st);


}