
// User function Template for C++

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    stack<int>s;
    queue<int>newq;
    int t=k;
    while(k--){
        s.push(q.front());
        q.pop();
    }
    while(t--){
        newq.push(s.top());
        s.pop();
    }
    while(!q.empty()){
        newq.push(q.front());
        q.pop();
    }
    return newq;
}