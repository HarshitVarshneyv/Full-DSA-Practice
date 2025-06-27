#include <iostream>
using namespace std;

// Node structure
class Node {
public:
    int data;      // Data of the node
    Node* next;    // Pointer to the next node

    // Constructor to initialize a node
    Node(int value) {
        data = value;
        next = nullptr;  // Initially, next is NULL
    }
};

// LinkedList class to manage the linked list
class LinkedList {
private:
    Node* head;  // Points to the first node

public:
    // Constructor to initialize an empty linked list
    LinkedList() {
        head = nullptr;
    }

    // 1. Insert at the beginning
    void insertAtHead(int value) {
        Node* newNode = new Node(value);
        newNode->next = head;  // New node points to old head
        head = newNode;        // Update head to new node
    }

    // 2. Insert at the end
    void insertAtTail(int value) {
        Node* newNode = new Node(value);
        if (!head) {  // If list is empty, new node becomes the head
            head = newNode;
            return;
        }
        Node* temp = head;
        while (temp->next) {  // Traverse to the last node
            temp = temp->next;
        }
        temp->next = newNode;  // Link last node to new node
    }

    // 3. Delete a node by value
    void deleteNode(int value) {
        if (!head) return;  // Empty list, nothing to delete

        // If head itself holds the value
        if (head->data == value) {
            Node* temp = head;
            head = head->next;  // Move head to next node
            delete temp;
            return;
        }

        Node* current = head;
        Node* prev = nullptr;

        // Search for the node to delete
        while (current && current->data != value) {
            prev = current;
            current = current->next;
        }

        if (!current) return;  // Value not found

        prev->next = current->next;  // Bypass the node
        delete current;              // Free memory
    }

    // 4. Display the linked list
    void display() {
        Node* temp = head;
        while (temp) {
            cout << temp->data << " -> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};

// Main function
int main() {
    LinkedList list;

    list.insertAtHead(10);

    cout << "Linked List: ";
    list.display();

    list.deleteNode(20);
    cout << "After Deletion: ";
    list.display();

    return 0;
}
