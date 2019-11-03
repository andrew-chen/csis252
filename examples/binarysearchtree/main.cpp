// This demonstrates the binary search tree class, BST,
// particularly the new methods added to the class.
#include <iostream>
#include "binarySearchTree.h"

using namespace std;

// function prototypes
void doubleit(int&);
void visit2(int&);
void visit1(int&);

int main()
{
   bSearchTreeType<int> tree; 
   
   int num;

   cout << "Enter numbers ending with 0." << endl;
   cin >> num;
   while (num != 0)
   {
      tree.insert(num);
      cin >> num;
   }

   cout << "inorder traversal:\n";
   tree.inorderTraversal();
/*
   cout << endl;
   cout << "preorder traversal:\n";
   tree.preorderTraversal();
   cout << endl;

   cout << "postorder traversal:\n";
   tree.postorderTraversal();
   cout << endl;

   cout << "------- Passing visit1 function to inorderTraversal -------\n";
   cout << "inorder traversal\n";
   tree.inorderTraversal(visit1); // pass visit1 function to traveral

   cout << "------- Passing visit2 function to inorderTraversal -------\n";
   tree.inorderTraversal(doubleit);
   cout << "inorder traversal: ";
   tree.inorderTraversal(visit2); // pass visit2 function to traversal
   cout << endl << endl;
*/
   return 0;
}

// Function passed to traverals. Must return void and take a single pass by
// reference argument of the type stored in the binary search tree.  This
// is a requirement of the traversals.
void visit1(int& x)
{
   cout << x << endl;
}
   
// Function passed to traverals. Must return void and take a single pass by
// reference argument of the type stored in the binary search tree.  This
// is a requirement of the traversals.
void visit2(int& x)
{
   cout << x << ' ';
}

void doubleit(int& x)
{
   x = x*2;
}
   
