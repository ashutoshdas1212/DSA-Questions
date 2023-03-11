class BST
{
    BinaryTreeNode<int> *root;

public:
    BST()
    {
        root = NULL;
    }
    ~BST()
    {
        delete root
    }
    /*----------------- Public Functions of BST -----------------*/
private:
    BinaryTreeNode<int> *remove(int data, BinaryTreeNode<int> *root)
    {
        if (root == NULL)
        {
            return NULL;
        }

        if (data < root->data)
        {

            root->left = remove(root->left);
        }
        else if (data > root->data)
        {
            root->right = remove(root->right);
        }
        else
        {
            if (root->left == NULL && root->right == NULL)
            {
                delete root;
                return NULL;
            }
            else if (root->right == NULL)
            {
                BinaryTreeNode<int> *newnode = root->left;
                root->left = NULL;
                delete root;
                return newnode;
            }
            else if (root->left == NULL)
            {
                BinaryTreeNode<int> *newnode = root->right;
                root->right = NULL;
                delete root;
                return newnode;
            }
            else
            {
                BinaryTreeNode<int> *maxnode = root->right;
                while (maxnode->left != NULL)
                {
                    maxnode = maxnode->left;
                }
                int mx = maxnode->data;
                root->data = mx;
                root->right = remove(data, root->right);
            }
        }
        return root;
    }

    void print(BinaryTreeNode<int> *node)
    {
        if (root == NULL)
        {
            return;
        }
        print(node->left);
        cout << node->data;
        if (root->left != NULL)
            cout << ":L:" << node->left->data;
        if (root->right != NULL)
            cout << ",R:" << node->right->data << "\n";
        print(node->right);
    }

    BinaryTreeNode<int> *insert(data, BinaryTreeNode<int> *root)
    {
        if (root == NULL)
        {
            BinaryTreeNode<int> *node = new BinaryTreeNode<int>(data);
            root = node;
            return root;
        }
        if (data <= root->data)
        {
            root->left = insert(data, root->left);
        }
        else if (data > root->data)
        {
            root->right = insert(data, root->right);
        }
        return root;
    }

    bool search(data, BinaryTreeNode<int> *root)
    {
        if (root == NULL)
        {
            return false;
        }
        if (root->data == data)
        {
            return true;
        }
        return search(data, root->left) && search(data, root->right);
    }

public:
    void remove(int data)
    {
        remove(data, root);
    }

    void print()
    {
        print(root);
    }

    void insert(int data)
    {
        insert(data, root);
    }

    bool search(int data)
    {
        search(data, root);
    }
};