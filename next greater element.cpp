vector<long long> ans(n, -1);  // Initialize the result vector with -1
stack<int> s;  // Stack to store indices of the elements

for (int i = n - 1; i >= 0; i--) {
    // Pop elements from the stack that are smaller than or equal to the current element
    while (!s.empty() && arr[s.top()] <= arr[i]) {
        s.pop();
    }
    
    // If stack is not empty, the top element is the next greater element
    if (!s.empty()) {
        ans[i] = arr[s.top()];
    }
    
    // Push the current element's index onto the stack
    s.push(i);
}

return ans;
