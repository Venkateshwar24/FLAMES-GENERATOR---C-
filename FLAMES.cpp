#include <iostream>

using namespace std;
struct node{
    int data;
    node* next;
    node* prev;
};
node* head;
void insert(char x)
{
 node* temp1=new node();
 temp1->data=x;
 temp1->next=NULL;
 temp1->prev=NULL;
 if(head==NULL)
 {
      head=temp1;
      temp1->next=head;
      temp1->prev=head;
     
 }
 else{
   node*temp2=head;
 while(temp2->next!=head)
 {
     temp2=temp2->next;
 }
     
     temp2->next=temp1;
     temp1->prev=temp2;
     head->prev=temp1;
     temp1->next=head;

}
}
void answer()
{
    node * temp= head;
    do
    {
        cout<<char(temp->data)<<"\t";
        temp=temp->next;
     }while(temp!=head);
            cout<<"\n";
}


int main()
{
    int n1,n2,count=0;
    string name1,name2;
    getline(cin,name1);
    getline(cin,name2);
    n1=name1.length();
    n2=name2.length();
    if(n1<=n2)
    {
    for(int i=0;i<n1;i++)
    {
        for(int j=0;j<n2;j++)
        {
            if(name1[i]==name2[j])
            {
                name1[i]=name2[j]='#';
                break;
            }
        }
    }
}
else if(n2<n1)
    {
    for(int i=0;i<n2;i++)
    {
        for(int j=0;j<n1;j++)
        {
            if(name2[i]==name1[j])
            {
                name2[i]=name1[j]='#';
                break;
            }
        }
    }
}
//cout<<name1<<" "<<name2<<"\n";
for(int i=0;i<n1;i++)
{
    if(name1[i]!='#' && name1[i]!=' ')
    {
        count++;
    }
}
for(int i=0;i<n2;i++)
{
    if(name2[i]!='#' && name2[i]!=' ')
    {
        count++;
    }
}
cout<<"COUNT :"<<count<<"\n";
if(count==0)
{
    cout<<"No matches";
}
else{
head=NULL;
    char x;
    insert('F');
    insert('L');
    insert('A');
    insert('M');
    insert('E');
    insert('S');
    answer();
    node* t=head;
   node*t2=head;
   for(int i=1;i<6;i++)
    {
        
       
        for(int i=1;i<count;i++)
        {
            t=t->next;
        }
        /*if(t->next==t2 && t->prev==t2)
        {
            //cout<<char(t->data);
            head=NULL;
            
        }*/
       //else{
        t->prev->next=t->next;
        t->next->prev=t->prev;
        
        t=t->next;
       
       //}
      //  t2=t;
       
   } 
    cout<<"Answer is "<<char(t->data);
}
    return 0;
}
