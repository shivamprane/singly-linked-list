#include <iostream>
using namespace std;
// structure Data + pointer for next addres
struct Node{
    int data;
    Node* next;
};
int main(){
    // memory allocation to 4 pointers of node
    Node* new_node1 = new Node;
    Node* new_node2 = new Node;
    Node* new_node3 = new Node;
    Node* new_node4 = new Node;
    // stored data in all 4 locations    
    new_node1->data = 10;
    new_node2->data = 20;
    new_node3->data = 30;
    new_node4->data = 40;
    new_node1->next = new_node2;
    new_node2->next = new_node3;
    new_node3->next = new_node4;
    new_node4->next = NULL;
    // for display    
    Node* ptr = new_node1;
    while (ptr!=NULL)
    {
        cout << "Address: " << ptr;
        cout << " Data:" << ptr->data << " Next Address:" << ptr->next << endl;
        ptr=ptr->next;
    }
}