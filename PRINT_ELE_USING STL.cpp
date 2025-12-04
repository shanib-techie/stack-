#include <iostream>
#include <stack>
using namespace std;

  

void recur_displaY(stack <int>& st){
    if(st.size() == 0) return;
    int x = st.top();  //yaha store kra
    st.pop(); //fhir pop kr diya same val ko
    recur_displaY(st); //fhir dubara gyi toh voh element nhi hoga
    cout<<x<<" "; //abb usko print kraya
    st.push(x);  
}
int main (){
    stack <int> st;
    int size,ele;
    for(int i = 1;i<= size;i++){
      cout<<"enter the ele";
      cin>>ele;
      st.push(ele);
    }
    recur_displaY(st);
    // st.push(20);
    // st.push(33);
    // st.push(44);
    // st.push(31);
    // st.push(11);
    // stack<int> temp;
    // while(st.size() > 0){
    //     cout<<st.top()<<" ";
    //     temp.push(st.top());
    // }
  //        while(temp.size() > 0){
  //        st.push(temp.top());

  //   }
  //    while(temp.size() > 0){
  //       cout<<temp.top()<<" ";
  //   }


  // cout<<st.size()<<" ";

}