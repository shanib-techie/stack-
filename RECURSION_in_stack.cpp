#include <iostream>
#include <stack>
using namespace std;


// YEH WALE TARIKE SE FAIDA H KI VALUE BHI REMOVE NI HO RAHI AUR PRINT BHI HO RAHI H
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
    stack<int> st;
    st.push(23);
    st.push(45);
    st.push(66);
    st.push(77);
    st.push(11);
    recur_display_in_reverse_order(st);
    cout<<st.top();
    cout<<endl;
    recur_displaY(st);
}