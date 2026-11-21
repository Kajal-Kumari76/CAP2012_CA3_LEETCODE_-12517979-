class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {

        stack<int> st;
        int j = 0;

        for (int i = 0; i < pushed.size(); i++) {

            // Push elements into the stack
            st.push(pushed[i]);

            // Pop elements whenever the top matches popped[j]
            while (!st.empty() && st.top() == popped[j]) {
                st.pop();
                j++;
            }
        }

        // If all elements are popped, return true
        return st.empty();
    }
};
