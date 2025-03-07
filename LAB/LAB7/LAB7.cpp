#include <iostream>
using namespace std;

class Node {
public:
    int Data;
    Node *Next;
    Node *Back;
    Node(int data = 0) : Data(data), Next(NULL), Back(NULL) {}
};

class DoubleLinkedList {
private:
    Node *head;
    Node *tail;
public:
    DoubleLinkedList() : head(NULL), tail(NULL) {}
    void AddNode(int data);
    void InsertNode(int data, int pos);
    void DeleteNode(int pos);
    void ShowFront();
    void ShowBack();
};

    int main() {
    DoubleLinkedList A, B;
    A.AddNode(57);
    A.AddNode(19);
    A.ShowFront();
    A.InsertNode(23, 2);
    A.ShowFront();
    A.DeleteNode(3);
    A.DeleteNode(1);
    A.ShowFront();
    cout << "---\n";
    B.AddNode(1);
    B.AddNode(7);
    B.AddNode(13);
    B.ShowBack();
    return 0;
}

void DoubleLinkedList::AddNode(int data) {
    Node *newNode = new Node(data);
    if (!head) {
        head = tail = newNode;
    } else {
        tail->Next = newNode;
        newNode->Back = tail;
        tail = newNode;
    }
}

void DoubleLinkedList::InsertNode(int data, int pos) {
    Node *newNode = new Node(data);
    if (pos <= 1 || !head) {
        newNode->Next = head;
        if (head) head->Back = newNode;
        head = newNode;
        if (!tail) tail = newNode;
        return;
    }
    Node *temp = head;
    int index = 1;
    while (temp->Next && index < pos - 1) {
        temp = temp->Next;
        index++;
    }
    newNode->Next = temp->Next;
    if (temp->Next) temp->Next->Back = newNode;
    temp->Next = newNode;
    newNode->Back = temp;
    if (!newNode->Next) tail = newNode;
}

void DoubleLinkedList::DeleteNode(int pos) {
    if (!head) return;
    Node *temp = head;
    if (pos == 1) {
        head = head->Next;
        if (head) head->Back = NULL;
        else tail = NULL;
        delete temp;
        return;
    }
    int index = 1;
    while (temp && index < pos) {
        temp = temp->Next;
        index++;
    }
    if (!temp) return;
    if (temp->Next) temp->Next->Back = temp->Back;
    if (temp->Back) temp->Back->Next = temp->Next;
    if (temp == tail) tail = temp->Back;
    delete temp;
}

void DoubleLinkedList::ShowFront() {
    Node *temp = head;
    cout << "Show Front : ";
    while (temp) {
        cout << temp->Data << " ";
        temp = temp->Next;
    }
    cout << endl;
}

void DoubleLinkedList::ShowBack() {
    Node *temp = tail;
    cout << "Show Back : ";
    while (temp) {
        cout << temp->Data << " ";
        temp = temp->Back;
    }
    cout << endl;
}
