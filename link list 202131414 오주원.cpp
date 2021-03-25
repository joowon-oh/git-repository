#include  <iostream>
#include <string>

using namespace std;

struct  node
{
    string name;
    int  id;
    float salary;

    node* p_next;
};

class  linked_list
{
private:
    node* head, * tail;
public:
    linked_list()
    {
        head = NULL;
        tail = NULL;
    }

    // Linked List에 node 추가
    void  add_node(string i_name, int  i_id, float i_salary)
    {
        node* tmp = new  node;
        tmp->name = i_name;
        tmp->id = i_id;
        tmp->salary = i_salary;
        tmp->p_next = NULL;

        if (head == NULL) // 첫번째 Data일 경우
        {
            head = tmp;
            tail = tmp;
        }
        else
        {
            tail->p_next = tmp;
            tail = tail->p_next;
        }
    }
    void printList(void)
    {
        node* temp = head;
        int i = 1;

        while (temp != NULL)
        {
            cout << "My team member [" << i++ << "]" << endl;
            cout << "Name   : " << temp->name << endl;
            cout << "ID     : " << temp->id << endl;
            cout << "Salary : " << temp->salary << endl;
            cout << "====================================" << endl;

            temp = temp->p_next;
        }


    }
};

int  main()
{
    
    linked_list  a;

   
    a.add_node("ohjoowon", 202131414, 200000);
    a.add_node("pagksujin", 202131407, 400000);
    a.add_node("moonsunhju", 202131459, 300000);
    a.add_node("sinchangu", 202131411, 600000);

 
    a.printList();

    return 0;
}