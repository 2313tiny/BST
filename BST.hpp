#ifndef BST_H_
#define BST_H_

#include<iostream>
#include<cstdlib>
#include<queue>

class BST
{
	private: //will be private
		struct node
		{
		  int value;
		  node * left;
		  node * right;		  
		node(){
			left = NULL;	
			right = NULL;
			}
		};	
		node * root; //pointer to the root
		void insert(node *&, node *&);
		void display_inorder(node *) const;
		void display_bylevel(node *, std::queue<node *>) const;
	public:
		BST() //if not init will be 0 
		{
			root = NULL;
		 }
		void insert_node(int num);
		void display_inorder() const
		{
			display_inorder(root);
		}	
		void display_bylevel() const
		{
			std::queue<node *> deposit;
	 		display_bylevel(root, deposit);
		}
};


#endif //BST_H_
