#include<bits/stdc++.h>
using namespace std;
class Node{
public:
    int data;
    Node* next;

    Node(int value):data(value),next(nullptr){}
};

class Linkedlist{
private:
    Node* head;

public:
    Linkedlist():head(nullptr){}
    void addnodefirst(int value){
        Node* newnode=new Node(value);
        newnode->next=head;
        head=newnode;
    }
    
    void addnodelast(int value){
        Node* newnode=new Node(value);
        if (head==nullptr){
            head=newnode;
            return;
        }
        Node* current=head;
        while (current->next!=nullptr){
            current=current->next;
        }
        current->next=newnode;
    }
    void display(){
        Node* current=head;
        while (current!=nullptr){
            cout<<current->data<<" ";
            current=current->next;
        }
    }
    void deletenode(int value){
        if (head==nullptr){
            return;
        }
        if(head->data==value){
            Node* currrent=head;
            head=head->next;
            delete currrent;
            return ;
        }
        Node* current = head;
        while (current->next != nullptr && current->next->data != value) {
            current = current->next;
        }

        if (current->next == nullptr) {
            // Node with the given value not found
            return;
        }

        Node* temp = current->next;
        current->next = current->next->next;
        delete temp;

    }
};

 int main(){
    Linkedlist l;
    l.addnodefirst(100);
    l.addnodefirst(200);
    l.addnodefirst(300);
    l.addnodelast(1000);
    l.addnodefirst(0);
    l.addnodefirst(800);
    l.addnodelast(763);
    cout<<"Linkedlist created"<<endl;
    cout<<"Displaying linked list elements:"<<endl;
    l.display();
    cout<<endl;
    l.deletenode(100);
    l.deletenode(200);
    cout<<"after the deletion linked list is :"<<endl;
    l.display();
    return 0;
 }