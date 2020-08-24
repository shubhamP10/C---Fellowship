#include<iostream>

using namespace std;
int hashTableSize = 11;
struct Node
{
   int data;
   struct Node * next;
};

int hashFunction(int value)
{
    return value % hashTableSize;
}
void pop( int* hashTable[], int number )
{
    int index = hashFunction(number);
    Node *prev = NULL;
    Node *ptr = (Node*)hashTable[index];
        if (ptr != NULL && ptr->data == number)
        {
            hashTable[index] = (int*)ptr->next;
            free(ptr);
        }else{
            while ( ptr != NULL && ptr->data != number)
            {
                prev = ptr;
                ptr = ptr->next;
            }
            prev->next = ptr->next;
        }
}

int getNumberAtIndex( int* hashTable[] )
{
    int number;
    cout <<"\nEnter number to search : ";
    cin >> number;

    int index = hashFunction(number);
    Node *ptr = (Node*)hashTable[index];
     while( ptr != NULL )
     {
        if ( ptr->data == number )
        {
            pop( hashTable, number);
            return index;
        }
        ptr = ptr->next;
     }
     return -1;
}
void insert(int* hashTable[] )
{
    int number;
    cout <<"\nEnter number : ";
    cin >> number;

    Node *node = new Node;
    int index = hashFunction(number);
    if ( hashTable[index] == NULL ){
        node->data = number;
        node->next = NULL;
        hashTable[index] = (int*)node;
    } else {
        node->data = number;
        node->next = NULL;
        Node *tempPtr = (Node*)hashTable[index];

        while( tempPtr->next != NULL )
        {
            tempPtr = tempPtr->next;
        }
        tempPtr->next = node;
    }
}
void display(int* hashTable[] )
{
    for (int index = 0; index < hashTableSize; index++ )
    {
        Node *ptr = (Node*)hashTable[index];
        cout<<index<<" : ";
        while( ptr != NULL )
        {
            cout<<ptr->data<<"  ";
            ptr = ptr->next;
        }
        cout<<"\n";
    }
}
int main()
{
    int* hashTable[hashTableSize];
    int choice, index;
    for (int i= 0; i < hashTableSize; i++)
        hashTable[i] = NULL;

    int numberOfInputs;
    cout <<"Enter number of inputs\n";
    cin >> numberOfInputs;

    for ( int i= 0; i < numberOfInputs; i++)
        insert( hashTable );

    do
    {
        cout <<"\nEnter your option \n1) insert \n2) Search \n3) Display--> ";
        cin >>choice;
        switch(choice)
        {
            case 1: insert( hashTable );
                break;
            case 2:
                    index = getNumberAtIndex( hashTable );
                    if ( index == -1 )
                    {
                        cout <<"\nNumber is not present in HashTable\n";
                    } else {
                        cout <<"\nNumber is at index : "<<index<<endl;
                    }
                break;
            case 3: display( hashTable );
                break;
            default:
                break;
        }
    }while(true);
}