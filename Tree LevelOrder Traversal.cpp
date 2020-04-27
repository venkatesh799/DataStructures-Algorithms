void levelorder(struct node *p)
{   
    
    if(p == NULL)
        return;
    queue<struct node*> Q;
    Q.push(p);
    while(!Q.empty())
    {
        struct node *current=Q.front();
        cout<<current->data<<" ";
        if(current->left != NULL) Q.push(current->left);
        if(current->right != NULL) Q.push(current->right);
        Q.pop();
    }

}
