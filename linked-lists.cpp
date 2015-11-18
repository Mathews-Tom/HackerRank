#include<iostream>
using namespace std;

struct node {
    int number;
    node *next; 
};

bool isEmpty(node *head);
char menu();
void insertAsFirstElement(node *&head, node *&tail, int number);
void insert(node *&head, node *&tail, int number);
void remove(node *&head, node *&tail);
void showlist(node *&current);

bool isEmpty(node *head) {
    if (head == NULL)
        return true;
    else
        return false;
}

char menu() {
    char choice;
    cout << "Menu\n";
    cout << "1. Add an item\n";
    cout << "2. Remove an item\n";
    cout << "3. Show the list\n";
    cout << "4. Exit\n";

    cin >> choice;
    return choice;
}

void insertAsFirstElement(node *&head, node *&tail, int number){
    node *temp = new node;
    temp->number = number;
    temp->next = NULL;
    head = temp;
    tail = temp;
}

void insert(node *&head, node *&tail, int number) {
    if (isEmpty(head))
        insertAsFirstElement(head, tail, number);
    else {
        node *temp = new node;
        temp->number = number;
        temp->next = NULL;
        tail->next = temp;
        tail = temp;
    }
}

void remove(node *&head, node *&tail) {
    if (isEmpty(head))
        cout << "The list is already empty\n"
    else if (head == tail) {
        delete head;
        head = NULL;
        tail = NULL;
    }
    else {
        node *temp = head;
        head = head->next;
        delete temp;
    }
}

void showlist(node *&current) {
    if (isEmpty(current))
        cout << "The list is empty\n"
    else {
        cout << "The list contains: \n";
        while (current != NULL) {
            cout << current->number << endl;
            current = current->next;
        }
    }
}


int main() {
    node *head = NULL
    node *tail = NULL
    char choice;
    int number;
    do {
        choice = menu();
        switch (choice) {
            case '1':   cout << "Please insert a number: ";
                        cin >> number;
                        insert(head, last, number);
                        break;
            case '2':   remove(head, last);
                        break;
            case '3':   showlist(head);
                        break;
            default:    cout << "System Exit\n";
        }
    } while (choice != '4');
    return 0;
}