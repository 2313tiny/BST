#include"BST.hpp"

void BST::insert(node *& nodePtr, node *& newNode)
{
	if (nodePtr == NULL){
		nodePtr = newNode; // insert the node //root
	} else {	if (nodePtr->value > newNode->value) {
		    	insert(nodePtr->left , newNode);
			}
	  		else  {
			    insert( nodePtr->right,newNode);
			}
		}
}

void BST::insert_node(int num)
{
	node * newNode = NULL; 
	newNode = new node;
	newNode->value = num;
	newNode->left = NULL;
	newNode->right = NULL;
	
	insert(root,newNode);	
}

void BST::display_inorder(node * nodePtr) const
{
	if(nodePtr != NULL)
	{
		display_inorder(nodePtr->left);
		std::cout << nodePtr->value << " ";
		display_inorder(nodePtr->right);
	}
}

void BST::display_bylevel(node * nodePtr, std::queue<node *> deposit) const
{
	node * delimiter = new node;
	
	node * temp;
//	nodePtr = root;
//	temp = nodePtr;	
	if(nodePtr == NULL){
		return ;
	}
	deposit.push(nodePtr);
	deposit.push(delimiter);
	
	int p = 0;
	while( p != 2){
		temp = deposit.front();
		if(temp == delimiter){
			std::cout << "\n";
			deposit.pop();
			deposit.push(delimiter);
			p++;
			continue;
		}
		p =0;
	
		if (temp->left != NULL){
			deposit.push(temp->left);
		}
		if (temp->right != NULL){
			deposit.push(temp->right);
		}
		std::cout << temp->value <<" ";
		deposit.pop();
	}

}


