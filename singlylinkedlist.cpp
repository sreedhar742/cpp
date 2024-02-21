#include <iostream>
#include<bits/stdc++.h>
using namespace std;
// Node class to represent each element in the linked list
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize the node with data and a null next pointer
    Node(int value) : data(value), next(nullptr) {}
};

// LinkedList class to manage the linked list operations
class LinkedList {
private:
    Node* head;

public:
    // Constructor to initialize an empty linked list
    LinkedList() : head(nullptr) {}

    // Destructor to free the memory occupied by the linked list
    ~LinkedList() {
        clear();
    }

    // Function to insert a new node at the beginning of the linked list
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;
        head = newNode;
    }

    // Function to insert a new node at the end of the linked list
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);
        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }

        current->next = newNode;
    }

    // Function to display the elements of the linked list
    void display() {
        Node* current = head;
        while (current != nullptr) {
            std::cout << current->data << " ";
            current = current->next;
        }
        std::cout << std::endl;
    }

    // Function to delete a node with the given value from the linked list
    void deleteNode(int value) {
        if (head == nullptr) {
            return;
        }

        if (head->data == value) {
            Node* temp = head;
            head = head->next;
            delete temp;
            return;
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

    // Function to clear the linked list and free the memory
    void clear() {
        while (head != nullptr) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
    }
};

// Example usage
int main() {
    LinkedList myList;

    myList.insertAtEnd(1);
    myList.insertAtEnd(2);
    myList.insertAtEnd(3);

    std::cout << "Linked List: ";
    myList.display();

    myList.insertAtBeginning(0);
    myList.insertAtEnd(4);

    std::cout << "Linked List after insertion: ";
    myList.display();

    myList.deleteNode(2);

    std::cout << "Linked List after deletion: ";
    myList.display();
    int num=100;
    cout<<endl;
    int* nums=&num;
    cout<<num<<endl;
    cout<<nums;
    return 0;
}
