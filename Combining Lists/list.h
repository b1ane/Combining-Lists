//
//  list.h
//  Combining Lists
//
//  Created by blane on 9/12/22.
//

#ifndef list_h
#define list_h

#include <iostream>
using namespace std;

struct node{
    int data;
    node* next;
};

class number{
private:
    node* head; //holds reference to first node in list
public:
    number() { //constructor
        head = nullptr;
    }
    
    bool isEmpty() {
        return head == nullptr;
    }
    
    //insert data in list
    void insert(int x) {
        node* newNode = new node; //new node created
        newNode->data = x;  //new node holds value to insert
        newNode->next = nullptr; // new node points to null
        
        //inserting into list
        //if node is empty, set node equal to header
        if(isEmpty()) {
            head = newNode;
        }
        //search for last node
        else {
            node* cu = head;
            while(cu->next != nullptr) {
                cu = cu->next;
            }
            cu->next = newNode;
        }
        
    }
    
    void print() {
        node* current = head;

        cout << "[";
        //executes if node is NOT empty
        while( current != nullptr) {
          //executes if NEXT node is NOT empty
          if(current->next != nullptr) {
            cout << current->data << ", ";
          }
          else {
            //outputs last node
            cout << current->data;
          }
          //loop condition
          current = current->next;
        }

        cout << "]";
    }
    
    
    //function to merge lists and place in order
    void merge( number l1, number l2, number &l3) {
        
        node* cu1 = l1.head;
        node* cu2 = l2.head;
        
        //compare first 2 numbers
        if(cu1->data < cu2->data) {
            l3.insert(cu1->data);
            cu1 = cu1->next;
        }
        else {
            l3.insert(cu2->data);
            cu2 = cu2->next;
        }
        
        //node* cu3 = l3.head; //holds first value of new list
        
        while(cu1!=nullptr && cu2!=nullptr) {
            if(cu1->data < cu2->data) {
                l3.insert(cu1->data);
                cu1 = cu1->next;
            }
            else {
                l3.insert(cu2->data);
                cu2 = cu2->next;
            }

        }
        
        
        
        

    }
    
    
};

#endif /* list_h */
