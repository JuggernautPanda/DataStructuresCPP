#include <iostream>
using namespace std;
class Base {
private:
    string Name;
    int age;
protected:
    int protectedVar;  // Protected member variable

    void protectedMethod() {  // Protected member function
        // Implementation
        cout<<"The value of protectedVar is : "<<protectedVar<<endl;
    }
    
public:
    Base(string name,int old)
    {
        Name = name;
        age = old;
    }
    int getprotectedVar()
    {
        return protectedVar;
    }
    void setprotectedVar(int c)
    {
        protectedVar = c;
    }
    string getprotectedName()
    {
        return Name;
    }
    int getprotectedAge()
    {
        return age;
    }
    
};

class Derived : public Base {
public:
    //Example of constructor of derived class with that of parent
    Derived(string name,int old) : Base(name,old){};
    void accessProtectedMembers() {
        protectedVar = 20;  // Accessible
        protectedMethod();  // Accessible
    }
};

int main() {
    Base baseObj("Cat",10);
    Derived derivedObj("Kitten",1);
    //baseObj.protectedVar = 10; // Not possible
    //baseObjprotectedMethod(); // Not possible
    baseObj.setprotectedVar(10);
    
    derivedObj.accessProtectedMembers();  // Works, as derived class can access protected members
    cout<<"Accessing the variable from base class "<<baseObj.getprotectedName()<<"\t"<< baseObj.getprotectedVar();  // Not accessible
    
    return 0;
}
