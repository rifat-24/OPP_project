#include<iostream>
using namespace std;
class ECE
{
public:
    void display(void)
    {
        string name, dept, cours_name;
        int roll;
        float gpa;
        cin >> name >> dept>> roll >> cours_name>> gpa;
        cout<<"Name : "<< name << endl;
        cout<<"Department : "<< dept << endl;
        cout<<"Roll Number : "<<roll << endl;
        cout<<"Course Name : "<< cours_name << endl;
        cout<<"Course G.P.A. : "<<gpa << endl;
    }

};

int main()
{
   ECE obj;
   obj.display();
}
