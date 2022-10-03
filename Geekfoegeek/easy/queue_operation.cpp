// Helper class Solution to implement 
// insert() and findFrequency()
class Solution{
    public:
    unordered_map<int, int>count;
    // Function to insert element into the queue
    void insert(queue<int> &q, int k){
        // Your code here
  count[k]++;
    q.push(k);
    
  
    }
    
    // Function to find frequency of an element
    // return the frequency of k
    int findFrequency(queue<int> &q, int k){
        // Your code here
     return count[k];
    }
    
};