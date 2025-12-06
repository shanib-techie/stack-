#include<iostream>
#include<stack>
using namespace std;

void display(stack<int> & st){
    int n = st.size() ;
    int x;
    stack<int> temp;
    for(int i =1;i<=n;i++){
        x = st.top();
        // cout<<x<<" ";
        temp.push(x);
        st.pop();
    }
int y;
     for(int i =1;i<=n;i++){
        y = temp.top();
        cout<<y<<" ";
        st.push(y);
        temp.pop();
    }
}

    void recur_display_in_reverse_order(stack <int>& st){
    if(st.size() == 0) return;
    int x = st.top();
    cout<<x<<" "; //23
    st.pop();
    recur_display_in_reverse_order(st);
    st.push(x);
}

// AGR SIMPLE ORDER ME PRINT KRNA H TOH VALUE COUT<<X NICHE LIKH DO BAAKI SAME

void recur_displaY(stack <int>& st){
    if(st.size() == 0) return;
    int x = st.top();  //yaha store kra
    st.pop(); //fhir pop kr diya same val ko
    recur_displaY(st); //fhir dubara gyi toh voh element nhi hoga
    cout<<x<<" "; //abb usko print kraya
    st.push(x);  
}


int main(){
    stack <int> st;
     int size ;
    cout<<"enter the size : ";
    cin>>size;
   int ele;
    for(int i = 1;i<= size;i++){
      cout<<"enter the ele";
      cin>>ele;
      st.push(ele);
    }
    display(st);
    cout<<endl;
    cout<<st.top();
    cout<<endl;
    recur_displaY(st);
}