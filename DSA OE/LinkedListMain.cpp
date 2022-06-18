#include "/home/piyush/C++/DSA OE/linkedListDefinitions.hpp"

int main()
{
    Node *head=NULL;
    Node n1;

    int x=0;
    int choice;

    while(x!=-1)
    {
        cout<<"Enter\n 1: insert beginning\n 2: insert middle\n 3: insert end\n 4: delete node\n 5: print list\n";
        cin>>choice;
        switch(choice)
        {
            case 1:
                n1.insert_begin(&head);
                break;
            case 2:
                n1.insert_middle(&head);
                break;
            case 3:
                n1.insert_end(&head);
                break;
            case 4:
                n1.delete_node(&head);
                break;
            case 5:
                n1.print_list(head);
                break;
            default:
                cout<<"Exiting ... \n";
                x=-1;
                break;
        }
    }

    return 0;
}