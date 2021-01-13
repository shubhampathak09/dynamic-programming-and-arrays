// trees all problrms

1. traversals

preorder traversal root left root

void preorder(struct node*root)
{
	if(root==NULL)
	return;
	
	cout<<root->data;
	preorder(root->left);
	preorder(root->right);
}
void inorder(struct node*root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	cout<<root->data;
	inorder(root->right);
}

void postorder(struct node*root)
{
	if(root==NULL)
	return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data;
}Time complextiy is o(n);


AVL tree Self balancing trees
difference between left and right cannpt be more thatn 1
insertion
1.left left case
left right case
right right case
right left case
insertion is simliar to bst

struct node*insert(struct node*node,key)
{
	if(node==NULL)
	return newNode(key);
	
	if(key<node->key)
	node->left=insert(node->left,key);
	else if(key>mode->key)
	node->right=insert(node-right,key);
	else
	return node;
	
	
	node->height=1+max(height(node->left),height(node->right));
	
}

