#include"BST.hpp"

void test_lev()
{
	BST bst;
	bst.insert_node(50);
	bst.insert_node(25);
	bst.insert_node(75);
	bst.insert_node(30);
	bst.insert_node(90);
	bst.insert_node(12);
	bst.insert_node(62);
	bst.insert_node(80);
	bst.insert_node(7);
	bst.insert_node(85);
	bst.insert_node(2);
	bst.insert_node(100);
	bst.insert_node(15);
	bst.insert_node(55);
	bst.insert_node(37);
	bst.insert_node(45);

	bst.display_bylevel();
}



void test_level()
{
	BST bst;
	bst.insert_node(10);
	bst.insert_node(7);
	bst.insert_node(2);
	bst.insert_node(15);
	bst.insert_node(8);
	bst.insert_node(4);
	bst.insert_node(20);
	bst.insert_node(18);
	bst.insert_node(9);

	bst.display_bylevel();
}

void test_insert()
{
	BST bst;
	bst.insert_node(10);
	bst.insert_node(7);
	bst.insert_node(2);
	bst.insert_node(15);
	bst.insert_node(8);
	bst.insert_node(4);
	bst.insert_node(20);
	bst.insert_node(18);
	bst.insert_node(9);
	std::cout << "\033[01;032m";
	bst.display_inorder();
	std::cout <<"\033[0m" << std::endl;

}

int main()
{
	test_insert();
	test_level();
	test_lev();
return 0;
}
