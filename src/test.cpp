#include "BinarySearchTree.hpp"

int main(){
	BinarySearchTree<int> *agac = new BinarySearchTree<int>();
	agac->Ekle(15);
	agac->Ekle(1);
	agac->Ekle(157);
	agac->Ekle(215);
	agac->Ekle(120);
	agac->Ekle(132);
	agac->Ekle(310);
	agac->Ekle(500);
	cout<<"Inorder :";
	agac->Inorder();
	cout<<endl<<"Preorder :";
	agac->Preorder();
	cout<<endl<<"Postorder :";
	agac->Postorder();
	delete agac;
	return 0;
}