#include<iostream>
#include<stdlib.h>
using namespace std;

struct node
{
    char name[20];
    char index[5];
    struct node *sib;
    struct node *sub;
};

struct node *head = NULL;
struct node *sub_head = NULL;
struct node *top_head = NULL;

class library
{
       public:
    void add_chapter()
    {
        struct node *new_node;
        new_node = new node;
        cout<<"give name of chapter :";
        cin>>new_node->name;
        cout<<"Give chapter number :";
        cin>>new_node->index;

        new_node->sib = NULL;
        new_node->sub = NULL;

        if(head == NULL)
        {
            head = new_node;
        }
        else
        {
            new_node->sib = head;   
            //head = new_node;         
        }
        
    }

    void add_topic()
    {
        struct node *new_node;
        new_node = new node;
        cout<<"give name of Topic :";
        cin>>new_node->name;
        cout<<"Give topic Number :";
        cin>>new_node->index;

        new_node->sib = NULL;
        new_node->sub = NULL;

        if(head == NULL)
        {
            cout<<"Chapter does not exits\n";
        }
        else
        {
            head->sub = sub_head;
            sub_head = new_node;            
        }
        
    }

    void add_subsection()
    {
        struct node *new_node;
        new_node = new node;
        cout<<"give name of subTopic : ";
        cin>>new_node->name;
        cout<<"Give subtopic Number : ";
        cin>>new_node->index;

        new_node->sib = NULL;
        new_node->sub = NULL;

        if(sub_head == NULL)
        {
            cout<<"Topic does not exits\n";
        }
        else
        {
            sub_head->sub = top_head;
            top_head = new_node;            
        }
        
    }

    void display()
    {
        struct node *ptr;
        struct node *ptr1;
        struct node *ptr2;

        ptr = head;
        ptr1 = sub_head;
        ptr2 = top_head;

        while(ptr != NULL)
        {
            cout<<ptr->index<<" "<<ptr->name<<endl;

            while(ptr1 != NULL)
            {
                cout<<"\t"<<ptr1->index<<" "<<ptr->name<<endl;

                while(ptr2 != NULL)
                {
                    cout<<"\t\t"<<ptr2->index<<" "<<ptr2->name<<endl;
                    ptr2 = ptr2->sib;
                }
                ptr1 = ptr1->sib;
            }
            ptr = ptr->sib;
        }

        
    }
};

int main()
{
    library l;
    int ch;
    char ans;

    do
    {
        cout<<"1.add chapter\n2.add topic\n3.add subsection\n4.display\n";
        cin>>ch;

        switch(ch)
        {
            case 1:l.add_chapter();
                break;
            case 2:l.add_topic();
                break;
            case 3:l.add_subsection();
                break;
            case 4:l.display();
                break;
            
        }

        cout<<"want to continue ? \n";
        cin>>ans;
    }while(ans == 'y' || ans == 'Y');

    return 0;
}