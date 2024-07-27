#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

//Liked list

class LinkedList {
private:
    Node* head;

public:
    LinkedList() {
        head = nullptr;
    }

    void insert(int value) {
        Node* newNode = new Node;
        newNode->data = value;
        newNode->next = nullptr;

        if (head == nullptr) {
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    void display() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList myList;

    // Insert elements into the linked list
    myList.insert(5);
    myList.insert(10);
    myList.insert(15);

    // Display the linked list
    myList.display();

    return 0;
}
