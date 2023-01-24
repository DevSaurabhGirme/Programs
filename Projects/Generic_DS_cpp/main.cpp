/// main function for Generic Linked List ///

int main()
{
    DoublyLL<int> obj1;

    obj1.InsertFirst(121);
    obj1.InsertFirst(111);
    obj1.InsertFirst(101);
    obj1.InsertFirst(51);
    obj1.InsertFirst(21);
    obj1.InsertFirst(11);

    obj1.Display();
    cout << "Number of nodes in Linked List are : " << obj1.CountNode() << "\n";

    obj1.InsertLast(151);
    obj1.Display();
    cout << "Number of nodes in Linked List are : " << obj1.CountNode() << "\n";

    obj1.InsertAtPos(75, 4);
    obj1.Display();
    cout << "Number of nodes in Linked List are : " << obj1.CountNode() << "\n";

    obj1.DeleteFirst();
    obj1.Display();
    cout << "Number of nodes in Linked List are : " << obj1.CountNode() << "\n";

    obj1.DeleteLast();
    obj1.Display();
    cout << "Number of nodes in Linked List are : " << obj1.CountNode() << "\n";

    obj1.DeleteAtPos(4);
    obj1.Display();
    cout << "Number of nodes in Linked List are : " << obj1.CountNode() << "\n";

    return 0;
}