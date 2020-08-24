#include<iostream>

using namespace std;
struct Node
{
   int data;
   struct Node * next;
};
Node* head = NULL;
void insertNode();
void deleteNode();
void displayList();

int main()
{
    int choice;
    int breakPoint = 1;
    while( breakPoint < 5 )
    {
        cout <<"\nEnter your option \n1) Insert \n2) Delete \n3) Display \n4) Exit   --> ";
        cin >>choice;
        
        switch(choice)
        {
            case 1: insertNode();
                break;
            case 2: deleteNode();
                break;
            case 3: displayList();
                break;
            case 4: breakPoint = 5;
                break;
            default:
                    cout <<"\nEnter valid option\n";
                    cin >>choice;
                break;
        }
    }
    return 0;
}
void insertNode()
{
  Node *node = new Node;
  Node *ptr = head;

  int number;
  cout <<"\nEnter number : ";
  cin >> number;

  node->data = number;
  node->next=NULL;

  if( head == NULL ){
    head = node;
  } else {
      while(ptr->next !=NULL){   
          ptr = ptr->next;
      }
      ptr->next = node;
    }
}
void deleteNode()
{
  int number;
  cout <<"\nEnter number : ";
  cin >> number;

  Node *prev = NULL;
  Node *ptr = head;
  if (ptr != NULL && ptr->data == number)
  {
    head = ptr->next;
    //free(ptr);
  }else{
    while ( ptr != NULL && ptr->data != number)
    {
      prev = ptr;
      ptr = ptr->next;
    }
    prev->next = ptr->next;
    }
}
void displayList()
{
  cout<<"====List Contain===="<<endl;
  Node *tempPtr = head;
  while( tempPtr != NULL )
  {
    cout<<tempPtr->data<<" ";
    tempPtr = tempPtr->next;
  }
}