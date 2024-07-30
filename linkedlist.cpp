// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;


class Node
{
  public:
  int data;
  Node* link;
};

class Methods
{
  private: 
  Node* root; // pointer
  uint32_t len = 0;
  public :
   Methods() : root(nullptr), len(0) {} // constructor to initialize with root.
  void append(uint32_t dat)
  {
      Node* temp = new Node();
      temp->data = dat;
      temp->link = NULL;
      
      if(root == NULL)
      {
          root = temp;
      }
      else
      {
          Node* p = new Node();
          p = root;
          while(p->link!=NULL)
          {
              p=p->link;
          }
          p->link = temp;
      }
  }
  void addAtloc(uint32_t loc,int dat)
  {
      if(loc>=length())
      {
          cout<<"impossible to add at that location as length=" <<length()<<endl;
      }
      else
      {
          Node* temp = root;
          len = 0;
          while(len++<loc)
          {
              temp = temp->link;
          }
          
          temp->data = dat;
          temp = temp->link; // may have no effect.
      }
  }
  
  void addAfterloc (uint32_t loc,int dat)
  {
      int temp_var = 0;
    cout<<"adding after location :"<<loc<<endl;
      if(loc>=length())
      {
          cout<<"impossible to add at that location as length=" <<length()<<endl;
      }
      else
      {
          Node* temp = root;
          len = 0;
          while(len++<loc)
          {
              temp = temp->link;
          }
          
       Node* newNode = new Node();
        newNode->data = dat;
        newNode->link = temp->link;
        temp->link = newNode;
          
      }
  }
  
  uint32_t length()
  {
      len = 0;
      Node* temp;
      temp = root;
      while(temp!=NULL)
      {
          len++;
          temp=temp->link;
      }
      return len;
  }
  void insertAtHead(int dat)
  {
      Node *temp = new Node();
      temp->data = dat;
      temp->link = root;
      root = temp;
  }
  void print()
  {
      Node* temp;
      temp = root;
      cout<<"Linked list elements are"<<endl;
      while(temp!=NULL)
      {
          cout<<temp->data<<"\t";
          temp=temp->link;
      }
      cout<<endl;
  }
};

void init(Methods &m)
{

    uint32_t dat=0;
    uint32_t loc = 0;
    m.append(1);
    m.append(-2);
    cout<<"Length of  LL:"<<m.length()<<endl;
    m.print();
    cout<<"value to add:"<<endl;
    cin>>dat;
    cout<<"location to add:"<<endl;
    cin>>loc;
    m.addAtloc(loc,dat);
    m.print();
}
Methods m;
int main() {
    // Write C++ code here
    
    uint32_t dat=0;
    uint32_t loc = 0;
    init(m);
    loc = 0;
    dat = -6;
    m.addAfterloc(loc,dat);
    m.print();
    
    cout<<"Inserting at head"<<endl;
    m.insertAtHead(-9);
    m.print();
    cout<<"Length of  LL:"<<m.length()<<endl;
    
    
    return 0;
}
