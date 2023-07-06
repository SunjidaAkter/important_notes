void reverseStack(stack<int> &st) {
    // Write your code here
    if(st.empty())return;
    int x=st.top();
    st.pop();
    reverseStack(st);
    stack<int>newSt;
    while(!st.empty()){
        newSt.push(st.top());
        st.pop();
    }
    newSt.push(x);
    while(!newSt.empty()){
        st.push(newSt.top());
        newSt.pop();
    }
}