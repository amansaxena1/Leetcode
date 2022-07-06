// { Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node* left;
    Node* right;
};

// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}


// Function to Build Tree
Node* buildTree(string str) {
    // Corner Case
    if (str.length() == 0 || str[0] == 'N') return NULL;

    // Creating vector of strings from input
    // string after spliting by space
    vector<string> ip;

    istringstream iss(str);
    for (string str; iss >> str;) ip.push_back(str);

    // Create the root of the tree
    Node* root = newNode(stoi(ip[0]));

    // Push the root to the queue
    queue<Node*> queue;
    queue.push(root);

    // Starting from the second element
    int i = 1;
    while (!queue.empty() && i < ip.size()) {

        // Get and remove the front of the queue
        Node* currNode = queue.front();
        queue.pop();

        // Get the current node's value from the string
        string currVal = ip[i];

        // If the left child is not null
        if (currVal != "N") {

            // Create the left child for the current node
            currNode->left = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->left);
        }

        // For the right child
        i++;
        if (i >= ip.size()) break;
        currVal = ip[i];

        // If the right child is not null
        if (currVal != "N") {

            // Create the right child for the current node
            currNode->right = newNode(stoi(currVal));

            // Push it to the queue
            queue.push(currNode->right);
        }
        i++;
    }

    return root;
}


 // } Driver Code Ends
/* Tree node structure  used in the program

struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};*/

class Solution{
    public:
    
    vector<int> helper(Node *root, int &ans){
        vector<int> v(4), a, b;
        if((!root->left) && (!root->right)) {
            v[0] = 0;
            v[1] = root->data;
            v[2] = root->data;
            v[3] = 1;
            ans = max(ans,v[3]);
            return v;
        }
        if(root->left && root->right){
            a = helper(root->left, ans);
            b = helper(root->right, ans);
            int temp = 1 ? a[2] >= root->data : 0;
            temp = max(temp, 1 ? b[1] <= root->data : 0);
            v[0] = max(max(a[0], b[0]), temp);
            v[1] = min(min(b[1],a[1]), root->data);
            v[2] = max(max(a[2],b[2]), root->data);
            v[3] = v[0] == 0 ? a[3]+b[3]+1 : 0;
            ans = max(ans,v[3]);
            return v;
        }
        if(root->left){
            a = helper(root->left, ans);
            int temp = 1 ? a[2] >= root->data : 0;
            v[0] = max(a[0], temp);
            v[1] = min(a[1], root->data);
            v[2] = max(a[2], root->data);
            v[3] = v[0] == 0 ? a[3]+1 : 0;
            ans = max(ans,v[3]);
            return v;
        }
        b = helper(root->right, ans);
        int temp = 1 ? b[1] <= root->data : 0;
        v[0] = max(b[0], temp);
        v[1] = min(b[1], root->data);
        v[2] = max(b[2], root->data);
        v[3] = v[0] == 0 ? b[3] + 1 : 0;
        ans = max(ans,v[3]);
        return v;
    }
    int largestBst(Node *root)
    {
    	int ans = 0;
    	vector<int> v = helper(root, ans);
        return ans;
    }
};

// { Driver Code Starts.

/* Driver program to test size function*/

  

int main() {

   
    int t;
    scanf("%d ", &t);
    while (t--) {
        string s, ch;
        getline(cin, s);
        
        Node* root = buildTree(s);
        Solution ob;
        cout << ob.largestBst(root) << endl;
    }
    return 0;
}
  // } Driver Code Ends