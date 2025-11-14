#include <iostream>
#include <stack>
using namespace std;
int main (){
    stack <int> st;
    st.push(20);
    st.push(33);
    st.push(44);
    st.push(31);
    st.push(11);
    stack<int> temp;
    while(st.size() > 0){
        cout<<st.top()<<" ";
        temp.push(st.top());
    }
  //        while(temp.size() > 0){
  //        st.push(temp.top());

  //   }
  //    while(temp.size() > 0){
  //       cout<<temp.top()<<" ";
  //   }


  // cout<<st.size()<<" ";

}