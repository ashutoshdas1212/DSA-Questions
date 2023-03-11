vector<Node<int> *> constructLinkedListForEachLevel(BinaryTreeNode<int> *root)
{
  queue<BinaryTreeNode<int> *> q;
  vector<Node<int> *> v;
  Node<int> *newNode = new Node<int>(root->data);
  q.push(root->data);
  q.push(NULL);
  Node<int> *temp = NULL;
  while (!q.empty())
  {
       
    BinaryTreeNode<int> *front = q.front();
    q.pop();
    if (q.front() != NULL)
    {
      Node<int> *newNode = new Node<int>(q.front()->data);
      temp->next=newNode;
      temp=temp->next;
      if (front->left != NULL)
        q.push(front->left);
      if (front->right != NULL)
        q.push(front->right);
    }
    else
    {
      q.push(NULL);
      q.pop();
      Node<int> *newNode < int >= new Node<int>(q.front()->data);
      temp=newNode;
      v.push(temp);
    }
  }
  return v;
}