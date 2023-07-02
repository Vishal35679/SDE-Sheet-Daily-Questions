Jump Game III
link: https://leetcode.com/problems/jump-game-iii/

Problem:
Given an array of non-negative integers arr, you are initially positioned at start index of the array. 
When you are at index i, you can jump to i + arr[i] or i - arr[i], check if you can reach to any index with value 0.

CODE:
//Recursive Approach:
class Solution {
public:
    unordered_set<int> vis;
    bool canReach(vector<int>& arr, int st) {
    if (st >= 0 && st < arr.size() && vis.insert(st).second) {
        return arr[st] == 0 ||
            canReach(arr, st + arr[st]) || canReach(arr, st - arr[st]);
    }
    return false;
}
};

//DFS Traversal:
class Solution {
public:
    bool canReach(vector<int>& A, int cur) {
        if(cur < 0 || cur >= size(A) || A[cur] < 0) return false;                  // out of bounds OR already visited ? return false
        A[cur] *= -1;       // mark as visited by making -ve
        return !A[cur] || canReach(A, cur + A[cur]) || canReach(A, cur - A[cur]);  // return true if A[cur] == 0 or recurse for both possible jumps
    }
};

// BFS Traveral:
class Solution {
public:
    bool canReach(vector<int>& A, int cur) {
        queue<int> q;
        q.push(cur);
        while(size(q)) {
            cur = q.front(); q.pop();
            if(A[cur] == 0) return true;                        // target reached
            if(A[cur] < 0)  continue;                           // already visited - stop further exploration of this path
            if(cur + A[cur] < size(A)) q.push(cur + A[cur]);    // try forward jump
            if(cur - A[cur] >= 0)      q.push(cur - A[cur]);    // try backward jump
            A[cur] *= -1;                                       // mark current index as visited by negating
        }
        return false;             // explored all array without reaching target
    }
};
