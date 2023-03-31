/*This is the code for Create, Display, Insert at (Beginning,End,Given Position),
in Singly Linked List Linked list
Author: Md. Sami Alam
*/

#include <iostream>
using namespace std;
// GLOBAL DECLARATION
struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;

// FUNCTION DECLARATION
void Create_Single_Link_List();
void Display_Single_Link_List();
void Insert_At_Beginning();
void Insert_At_End();
void Insert_At_Given_poisition();
void Delete_In_The_Beginning();
void Delete_In_The_End();
void Delete_At_Given_position();
void Find_The_Length_Of_Linked_List_OR_Count_Nodes();
void Reverse_Linked_List();
// MAIN FUNCTION SECTION
int main()
{
    cout << "---------WELCOME TO LINKED LIST WORLD---------" << endl;
    Create_Single_Link_List();
    cout << "Here is the LInked List You've created" << endl;
    Display_Single_Link_List();

    int x;

    cout << "1. Insert At the Beginning" << endl;
    cout << "2. Insert At the End" << endl;
    cout << "3. Insert At the given Position" << endl;
    cout << "4. Delete Linked List Element Form Beginning" << endl;
    cout << "5. Delete Linked List Element From End" << endl;
    cout << "6. Delete At Given Position" << endl;
    cout << "7. Find_The_Length_Of_Linked_List_OR_Count_Nodes" << endl;
    cout << "8. Reverse Linked List" << endl;
lebel:
    cout << "Press (1/2/3/4/5/6/7/8): ";
    cin >> x;
    switch (x)
    {
    case 1:
        Insert_At_Beginning();
        Display_Single_Link_List();
        break;
    case 2:
        Insert_At_End();
        Display_Single_Link_List();
        break;
    case 3:
        Insert_At_Given_poisition();
        Display_Single_Link_List();
        break;
    case 4:
        Delete_In_The_Beginning();
        break;
    case 5:
        Delete_In_The_End();
        break;
    case 6:
        Delete_At_Given_position();
        break;
    case 7:
        Find_The_Length_Of_Linked_List_OR_Count_Nodes();
        break;
    case 8:
        Reverse_Linked_List();
        break;
    default:
        cout << "Invalid Input!!!" << endl;
        goto lebel;
        break;
    }
    return 0;
}

// FUNCTION DEFINITION SECTION
void Create_Single_Link_List()
{
    struct Node *new_node, *temp;
    int num;
    cout << "Enter the Element & if you want to close press(0): ";
    cin >> num;

    while (num != 0)
    {
        new_node = (struct Node *)malloc(sizeof(struct Node));
        new_node->data = num;
        new_node->next = NULL;

        if (head == NULL)
        {
            head = temp = new_node;
        }
        else
        {
            temp->next = new_node;
            temp = new_node;
        }

        cout << "Enter the Element & if you want to close press(0): ";
        cin >> num;
    }
}

void Display_Single_Link_List()
{
    struct Node *temp;
    temp = head;
    int i = 1;

    while (temp != NULL)
    {
        cout << "Element " << i++ << ": " << temp->data << endl;
        temp = temp->next;
    }
}
// Function for Insert at Beginning
void Insert_At_Beginning()
{
    cout << "\n";
    cout << "Insertion At Beginning Is Running......." << endl;
    struct Node *new_node = head;

    new_node = (struct Node *)malloc(sizeof(struct Node));
    cout << "Enter the data you wanna insert at beginning: ";
    cin >> new_node->data;
    new_node->next = head;
    head = new_node;
}
// Inserting Function At the End
void Insert_At_End()
{
    cout << "\n";
    cout << "Insertion At End Is Running......." << endl;
    struct Node *new_node, *temp = head;

    new_node = (struct Node *)malloc(sizeof(struct Node));
    cout << "Enter the data you wanna insert at the end: ";
    cin >> new_node->data;
    new_node->next = NULL;
    temp = head;

    while (temp->next != 0)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}
// Function for Inserting in given position
void Insert_At_Given_poisition()
{
    cout << "\n";
    cout << "Insertion At Position Is Running......." << endl;
    int num, pos, i = 1;
    struct Node *new_node, *temp = head;

    new_node = (struct Node *)malloc(sizeof(struct Node));
    cout << "Enter the number you wanna Insert: ";
    cin >> num;
    cout << "Enter the position where you wanna Insert: ";
    cin >> pos;
    new_node->data = num;

    while (i < pos - 1)
    {
        temp = temp->next;
        i++;
    }
    new_node->next = temp->next;
    temp->next = new_node;
}

// Function for Deleting In the the Beginning
void Delete_In_The_Beginning()
{
    cout << endl;
    cout << "The first Element has been deleted Successfully" << endl;
    struct Node *temp;
    temp = head;
    head = head->next;
    free(temp); // To clean our memory garbage

    cout << "New linked List is here" << endl;
    Display_Single_Link_List();
}
// Function for Deleting In the the End
void Delete_In_The_End()
{
    struct Node *previous_node;
    struct Node *temp;
    temp = head;
    while (temp->next != 0)
    {
        previous_node = temp;
        temp = temp->next;
    }
    if (temp == head)
    {
        head = 0;
    }
    else
    {
        previous_node->next = 0;
    }
    free(temp);
    Display_Single_Link_List();
}
// Function for Deleting In the the position
void Delete_At_Given_position()
{
    struct Node *temp;
    struct Node *next_node;
    int i = 1, position;
    temp = head;
    cout << "Enter the position that you wanna delete: "
         << " ";
    cin >> position;
    while (i < position - 1)
    {
        temp = temp->next;
        i++;
    }
    next_node = temp->next;
    temp->next = next_node->next;
    free(next_node);
    Display_Single_Link_List();
}

// Function to Find_The_Length_Of_Linked_List_OR_Count_Nodes
void Find_The_Length_Of_Linked_List_OR_Count_Nodes()
{
    struct Node *temp;
    int count = 0;
    temp = head;
    while (temp != 0)
    {
        count++;
        temp = temp->next;
    }
    cout << endl;
    cout << "The lenght or number of nodes are: "
         << " ";
    cout << count << endl;
}
// Function to Reverse the linked list
void Reverse_Linked_List()
{
    cout << "Here is the reverse Linked List" << endl;
    struct Node *previous_node, *current_node, *next_node;
    previous_node = 0;
    current_node = next_node = head;
    while (next_node != 0)
    {
        next_node = next_node->next;
        current_node->next = previous_node;
        previous_node = current_node;
        current_node = next_node;
    }
    head = previous_node;
    Display_Single_Link_List();
}
