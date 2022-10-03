
//function Template for C++

//Function to reverse the queue.
queue<int> rev(queue<int> q)
{
    // add code here.
    stack<int>st;
    queue<int>rev;
    while(!q.empty()){
       st.push(q.front());
       q.pop();
    }
    while(!st.empty()){
        rev.push(st.top());
        st.pop();
    }
    return rev;
}