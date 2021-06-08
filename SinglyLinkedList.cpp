// SinglyLinkedList.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

struct ListNode {
    double value;
    ListNode* next; //self referential
};

int main()
{
    //head node 
    ListNode *head = new ListNode;//creating a new node 
    head->value = 12.5;
    head->next = nullptr; //when there was only one node
    cout << "\nThe value in the node is " << head->value << endl;
    cout << "\nThe next of the node is " << head->next << endl;
    //second node
    ListNode* secondNode = new ListNode;
    secondNode->value = 5.2;
    secondNode->next = nullptr;
    head->next = secondNode;
    cout << "\nThe value in the second node is " << secondNode->value << endl;
    cout << "\nThe next of the second node is " << secondNode->next << endl;
    cout << "\nThe next of the head node is " << head->next << endl;
    //lastNode
    ListNode *last = new ListNode;
    last->value = 15.7;
    last->next = nullptr;
    secondNode->next = last;
    cout << "\nThe value of the first node (head) is " << head->value;
    cout << "\nThe value of the second node is "<<secondNode->value;
    cout << "\nThe value of the last node is " << last->value;
    cout << "\nThe pointer of the head node points to : " << head->next;
    cout << "\nThe pointer of the second node points to : " << secondNode->next;
    cout << "\nThe pointer of teh last ndoe points to nothing " << last->next;
}

