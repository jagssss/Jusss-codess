//{ Driver Code Starts
// driver

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}

Node* subLinkedList(Node* l1, Node* l2);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        
        Node* res = subLinkedList(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends


/* Structure of linked list Node

struct Node
{
    int data;
    struct Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};

*/

//You are required to complete this method

Node* insertFront(Node *head,int data){
    if(!head){
        return new Node(data);
    }
    else{
        Node *newHead=new Node(data);
        newHead->next=head;
        head=newHead;
    }
    return head;
}

Node* subLinkedList(Node* l1, Node* l2)
{
    string num1,num2;
    
    Node *trav=l1;
    while(trav && trav->data==0){
        trav=trav->next;
    }
    
    while(trav){
        num1.push_back('0'+trav->data);
        trav=trav->next;
    }
    trav=l2;
    while(trav && trav->data==0){
        trav=trav->next;
    }
    while(trav){
        num2.push_back('0'+trav->data);
        trav=trav->next;
    }
    int borrow=0;
    if(num1.size()>num2.size()){
        while(num2.size()<num1.size()){
            num2.insert(0,"0");
        }
    }
    else if(num1.size()<num2.size()){
        while(num2.size()>num1.size()){
            num1.insert(0,"0");
        }
        swap(num1,num2);
    }
    else if(num1.size()==num2.size()){
        int i=0;
        while(num1[i]==num2[i]){
            i++;
        }
        if(num1[i]<num2[i]) swap(num1,num2);
    }
    int ind=num1.size()-1;
    Node *ans=nullptr;
    while(ind>=0){
        int n1=num1[ind]-'0';
        int n2=num2[ind]-'0';
        if(n1<n2+borrow){
            int number=n1+10-borrow-n2;
            ans=insertFront(ans,number);
            borrow=1;
        }
        else{
            int number=n1-borrow-n2;
            ans=insertFront(ans,number);
            borrow=0;
        }
        ind--;
    }
    trav=ans;
    while(trav && trav->data==0){
        trav=trav->next;
    }
    ans=trav;
    if(!ans) ans=insertFront(ans,0);
    return ans;
    
}

