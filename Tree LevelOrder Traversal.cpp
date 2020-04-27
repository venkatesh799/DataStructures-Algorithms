//Tree LevelOrder in Singleline

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



//Tree LevelOrder Traversal  line By Line

void levelorder(struct node *p)
{   

    if(p == NULL)
        return;
    queue<struct node*> q;
    q.push(p);
    while(!q.empty())
    {
        int count=q.size();
        while(count > 0)
        {
            struct node *current=q.front();
            cout<<current->data<<" ";
            if(current->left != NULL) q.push(current->left);
            if(current->right != NULL) q.push(current->right); 
             q.pop();
            count-=1;
        }
        cout<<"\n";
    }

}
