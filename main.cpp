#include <iostream>

using namespace std;

struct Node
{
    int data ;
    Node* next ;
};



// DISPLAY THE LINK LIST :

void Display( Node* head )
{

    Node* temp = head ;

    while( temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;

    }

    cout <<" NULL " << endl;

}
// ========================================= //
//      INSERTION OF LINK LIST               //
//===========================================//

//
////  INSERT AT THE START OF NODE :
//
//
//void InsertStart(Node*& head ,int value )
//{
//    Node*  newnode = new Node ;
//    newnode-> data = value ;
//    newnode-> next = head ;
//
//    head = newnode;
//
//
//}
//// INSERT AT THE END ::
//
// void InsertEnd(Node*& head , int value )
// {
//    Node* newnode = new Node ;
//
//    newnode -> data = value ;
//    newnode-> next = NULL;
//
//    if(head == NULL)
//    {
//        head = newnode;
//        return ;
//    }
//
//    Node* temp = head ;
//
//    while( temp-> next != NULL)
//    {
//        temp = temp->next ;
//    }
//
//    temp-> next = newnode;
//
//
// }
//
// //  FUCTION OF INSERTION AT MID :
//
// void InsertMid(Node*& head , int value , int pos )
// {
//     Node* newnode = new Node ;
//     newnode-> data = value ;
//
//
//    if ( pos < 1 )
//    {
//        cout <<" Invalid Position "<< endl;
//        delete newnode;
//        return;
//    }
//
//    if ( pos == 1 )
//    {
//        newnode -> next = head ;
//        head = newnode;
//        return;
//
//    }
//
//    // Temp to traverse it ;
//
//    Node * temp = head ;
//
//    for ( int i= 1 ; i < pos -1 && temp != NULL ; i++)
//    {
//        temp = temp -> next ;
//
//    }
//    if( temp == NULL)
//    {
//        delete newnode;
//        return ;
//
//    }
//
//    newnode -> next = temp -> next ;
//    temp -> next = newnode;
//
//
// }
 // ========================================= //
//      INSERTION OF LINK LIST               //
//===========================================//



// ========================================= //
//      DELETION OF LINK LIST               //
//===========================================//
//
//
//void deleteStart( Node*& head)
//{
//    if (head == NULL)
//    {
//        cout <<" The List is Empty " << endl;
//        return ;
//    }
//    Node * temp = head ;
//    head = head-> next ;
//    delete temp ;
//
//
//}
//
//
//
//// DELETE AT THE END :
//
//void DeleteEnd(Node*& head )
//{
//    if(head == NULL)
//    {
//        cout << " List is Empty "<< endl;
//        return ;
//
//    }
//
//    if (head ->next == NULL)
//    {
//        delete head ;
//        head = NULL;
//        return ;
//
//    }
//
//    Node *temp = head ;
//
//    while(temp-> next-> next != NULL)
//    {
//        temp = temp ->next ;
//
//    }
//
//    delete temp -> next ;
//    temp-> next = NULL;
//
//}

//
//// DELETION AT THE MID :
//
//void deleteMid( Node *&head , int pos )
//{
//    if( head == NULL)
//    {
//        cout << " List is Empty "<< endl;
//        return ;
//
//    }
//    if ( pos <  1)
//    {
//        cout <<" Invalid position "<< endl;
//        return ;
//
//    }
//    if ( pos == 1 )
//    {
//        Node *temp = head ;
//        head = head -> next ;
//        delete temp ;
//        return ;
//    }
//    Node * temp = head ;
//
//    for( int i =1 ; i < pos -1 && temp != NULL; i++)
//    {
//        temp = temp -> next ;
//
//    }
//        if( temp == NULL || temp-> next == NULL)
//        {
//            cout << " InValid Position " <<endl;
//            return ;
//
//        }
//
//        Node * deletenode = temp-> next ;
//        temp-> next = deletenode-> next;
//delete deletenode;
//
//
//
//}

// SEARCH IN THE LINK LIST :

void SearchElement( Node* head  , int value )
{
    Node * temp = head ;
    int position = 11 ;

    while (temp != NULL)
    {

      if( temp -> data == value  )
      {
          cout << " We have found the Value "<< position << endl;
          return ;
      }

      temp = temp -> next  ;
      position++ ;

    }
    cout << "Value not Found in list !! " << endl;

}




int main()
{
    Node* head = NULL;
    Node* tail = NULL;

    Node* newnode;

    int n , value ;

    cout <<" Enter the Number of Nodes Wanna Create ? " <<endl;
    cin >> n ;

    for ( int i = 1 ; i <= n ; i ++)
    {
        cout <<" Enter value " << i << endl;
        cin >> value ;

        newnode = new Node ;

        newnode-> data = value ;
        newnode-> next = NULL  ;

        // SIMPLE CONDITION TO CHECK IT IS NULL OR NOT :;
        // ONE THING THE HEAD WILL RUN FOR THE FIRST TIME AN DTHEN THE TAIL WILL INTEGRATE IT SELF :::

        if( head == NULL )
        {
            head = newnode;
            tail = newnode;

        }
        else
        {

        tail -> next = newnode;
        tail = newnode;

        }
    }

    // HERE WE GET THE TEMP TO DISPLAY THE WHOLE VALUES :
    cout << " =============== "<< endl;

  cout <<" Created The Link List :  ";

    Display(head);



// ========================================= //
//      INSERTION OF LINK LIST               //
//===========================================//

//    // INSERT NEW VALUE :
//
//
//     int NewValue ;
//
//     cout <<" Enter the value You wanna Add At Start : " << endl;
//
//     cin >> NewValue;
//
//     InsertStart(head , NewValue);
//
//     cout << " New List Displayed !!" << endl;
//
//        Display(head);
//
//        // INSERT AT THE END :
//
//
//    int NewValue1 ;
//
//     cout <<" Enter the value You wanna Add At End : " << endl;
//
//     cin >> NewValue1;
//
//     InsertEnd(head , NewValue1);
//
//     cout << " New List Displayed !!" << endl;
//
//        Display(head);


      // INSERT AT THE MID AND ANY POINT ::


//    int NewValue2 ;
//    int pos ;
//
//      cout << " Enter the Position where YOU wanna Add the Term: " << endl;
//      cin >> pos;
//
//
//     cout <<" Enter the value You wanna Add At POINT  : " << endl;
//
//     cin >> NewValue2;
//
//     InsertMid(head , NewValue2 , pos);
//
//     cout << " New List Displayed !!" << endl;
//
//        Display(head);
//

// ========================================= //
//      DELETION OF LINK LIST               //
//===========================================//
//
//// DELETE AT THE START :
//
//cout <<" HERE WE WILL DELETE AT START \n" << endl;
//
//deleteStart(head );
//
//cout << " New List  : "<< endl;
//
//   Display(head);
//
//// DELETE AT THE END :
//
//    DeleteEnd(head );
//
//    cout << " New List here "<< endl;
//
//    Display(head );
//

//    cout << " DELETION AT THE MID "<<  endl;
//
//    int pos ;
//
//    cout << " Enter the Position where we wanna delete the Node "<< endl;
//    cin >> pos ;
//
//    deleteMid(head , pos );
//
//    cout <<" New List " << endl;
//
//    Display(head );



// SEARCH IN THE LINK LIST :

cout << " SEARCH IN THE LINK LIST :"<< endl;
int key ;
    cin >> key ;

    SearchElement( head , key );






    return 0;
}
