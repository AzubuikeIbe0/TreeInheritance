#include <iostream>
#include "BinaryTree.h"
#include "BinarySearchTree.h"

using namespace std;

int main()
{
    //BinaryTree T1;

   /* T1.InsertNode(1);
    T1.InsertNode(2);
    T1.InsertNode(3);
    T1.InsertNode(4);
    T1.InsertNode(5);
    T1.InsertNode(6);
    T1.InsertNode(7);

    T1.InOrder();

    T1.DeleteNode(7);
    T1.InOrder();

    T1.DeleteNode(3);
    T1.InOrder();*/

    BinarySearchTree T2;
    T2.InsertNode(25);
    T2.InsertNode(10);
    T2.InsertNode(5);
    T2.InsertNode(2);
    T2.InsertNode(13);
    T2.InsertNode(8);
    
    T2.InsertNode(6);
    T2.InsertNode(7);

    T2.InOrder();
    cout << "Printing in Pre Order" << endl;
   
    /*T2.InOrder();
    cout << "Printing in In Order" << endl;
    
    T2.PostOrder();
    cout << "Printing in Post Order" << endl;*/
    T2.DeleteNode(2);
    cout << "Deleted Node 2" << endl;
    cout << endl;

    T2.InOrder();
    cout << "Printing in In Order After deleting 2" << endl;

    T2.GetHeight();
    cout << "Tree Height" << endl;
    
    T2.InOrder();
    cout << "Printing in In Order After tree height" << endl;

    /*T2.~BinarySearchTree();
    T2.InOrder();*/

    return 0;
}

