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
  
  void print()
  {
      Node* temp;
      temp = root;
      while(temp!=NULL)
      {
          cout<<temp->data<<endl;
          temp=temp->link;
      }
  }
};

int main() {
    // Write C++ code here
    Methods m;
    uint32_t dat=0;
    cout<<"value to append:"<<endl;
    cin>>dat;
    m.append(dat);
    cout<<"Length of  LL:"<<m.length()<<endl;
    m.print();
    return 0;
}
