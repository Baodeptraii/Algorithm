#include <bits/stdc++.h> // 14 - Cay nhi phan gan day AC
using namespace std;
using ll = long long;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

Node *build_tree(vector<int> arr)
{
    Node *result = new Node;
    queue<Node *> queue;
    queue.push(result);
    for (int i : arr)
    {
        queue.front()->data = i;
        queue.front()->left = new Node();
        queue.front()->right = new Node();
        queue.push(queue.front()->left);
        queue.push(queue.front()->right);
        queue.pop();
    }
    return result;
}

void read_node(Node *root)
{
    if (root->left == nullptr)
        return;
    read_node(root->left);
    cout << root->data << " ";
    read_node(root->right);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        Node *root = build_tree(arr);
        read_node(root);
        cout << endl;
    }
}

