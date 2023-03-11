class BST{
    BinaryTreeNode<int>* root;
    
    public:
    BST()
    {
        root=NULL;
    }
    ~BST()
    {
        delete root;
    }
    private:
    BinaryTreeNode<int>* remove(BinaryTreeNode<int>* node,int data)
    {
        if(node==NULL)
        {
            return NULL;
        }
        if(data>node->data)
        {
            node->right=remove(node->right,data);
            return node;
        }
        else if(data<node->data)
        {
            node->left=remove(node->left,data);
            return node;
        }
        else
        {
            if(node->left==NULL && node->right==NULL)
            {
                delete node;
                return NULL;
            }
            else if(node->left==NULL)
            {
                BinaryTreeNode<int>* temp=node->right;
                node->right=NULL;
                delete node;
                return temp;
            }
            else if(node->right==NULL)
            {
                BinaryTreeNode<int>* temp=node->left;
                node->left=NULL;
                delete node;
                return temp;
            }
            else
            {
                BinaryTreeNode<int>* minnode=node->right;
                while(minnode->left!=NULL)
                {
                    minnode=minnode->left;
                }
                int rightmin=minnode->data;
                node->data=rightmin;
                node->right=remove(node->right,rightmin);
                return node;
            }
            
        }
        
    }
    void print(BinaryTreeNode<int>* root)
    {
        if(root==NULL)
        {
            return;
        }
        cout<<root->data<<":";
        if(root->left!=NULL)
        {
            cout<<"L:"<<root->left->data<<",";
        }
        if(root->right!=NULL)
        {
            cout<<"R:"<<root->right->data;
        }
        cout<<endl;
        print(root->left);
        print(root->right);
    }
    public:
    void remove(int data)
    {
        this->root=remove(root,data);
    }
    void print()
    {
        print(root);
    }
    private:
    BinaryTreeNode<int>* insert(BinaryTreenode<int>* node,int data)
    {
        if(node==NULL)
        {
            BinaryTreeNode<int>* newnode=new BinaryTreeNode<int>(data);
            return newnode;
        }
        if(data<=node->data)
        {
            node->left=insert(mode->left,data);
        }
        else
        {
            node->right=insert(node->right,data);
        }
        return node;
        
    }
    public:
    void insert(int data)
    {
        this->root=insert(this->root,data);
    }
    private:
    bool search(BinaryTreeNode<int>* node,int data)
    {
        if(node==NULL)
        {
            return false;
        }
        if(node->data==data)
        {
            return true;
        }
        else if(data<node->data)
        {
            return search(node->left,data);(
        }
        return search(node->right,data);
    }
    public:
    bool search(int data)
    {
        return search(root,data);
    }
};