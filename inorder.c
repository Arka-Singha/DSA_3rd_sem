void insert (int key)
   {
    if (root==NULL)
      {
        root=malloc(sizeof struct node);
        root -> data=key;
        root -> left = root -> right = NULL;
      }
      else 
            {
                struct node *temp=head, *parent;
                while(temp!= NULL)
                    {
                        parent=temp;
                        if(temp->data==key)
                            printf("KEY EXIST");
                            return ();
                    }
            }
        else if (temp->data<key)
            temp=temp -> right;
        else
            temp=temp -> left;
            struct node *newnode
            newnode=malloc(sizeof(struct node));
            newnode->right=NULL;
            newnode->left=NULL;
            newnode->data=key;

            if(parent->data<key)
                parent->right=newnode;
            else
                parent->left=newnode;
   }

    inorder(root)
        {
            
        }
            
   }
   void main()
   {
     insert(45);
     insert(82);
     insert(38);
     insert(40);
     insert(36);
     inorder(root);
   }