// #include<iostream>
// #include<stack>
// using namespace std;
// int main(){
//     stack<int> st;
//     st.push(7);
//     st.push(4);
//     st.push(4);
//     st.push(2);
//     st.push(5);
//     cout<<st.size();
//     cout<<"\n";
//     cout<<st.top();
//     // st.pop();
//     cout<<"\n";
//     // cout<<st.size();
//     // cout<<"\n";
//     // cout<<st.top();


// //    HERE ELEMENT ARE PRINT BUT THEN REMOVE FOREVER  AFTER LOOP YOU WILL NEVER GET TOP AND SIZE WILL ZERO
//     while(st.size()> 0){
//         cout<<st.top()<<" <=> ";
//         st.pop();
//     }
// cout<<endl;
// cout<<st.size();

// }












// #include <iostream>
// #include <stack>
// using namespace std;
// int main (){
//     stack <int> st;
//     st.push(20);
//     st.push(33);
//     st.push(44);
//     st.push(31);
//     st.push(11);
//     stack<int> temp;
//     while(st.size() > 0){
//         cout<<st.top()<<" ";
//         temp.push(st.top());
//         st.pop();    }


//   //        while(temp.size() > 0){
//   //        st.push(temp.top());

//   //   }
//      while(temp.size() > 0){
//       st.push(temp.top());
      
//       temp.pop();
//     }

//     while (st.size( ) > 0)
//     { cout<<st.top()<<" ";
//     }
    


//   cout<<st.size()<<"\n ";
//    cout<<temp.size()<<" ";

// }
