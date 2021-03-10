ector<int> preOrder(Node* root)
{



    
    stack<Node*> nodeStack;
    nodeStack.push(root);
    vector<int> v;

   
    while (nodeStack.empty() == false) {
        
        struct Node* node = nodeStack.top();
        v.push_back(node->data);
        nodeStack.pop();

     
        if (node->right)
            nodeStack.push(node->right);
        if (node->left)
            nodeStack.push(node->left);
    }

    return v;

}
