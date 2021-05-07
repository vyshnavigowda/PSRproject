#include<iostream>
using namespace std;
class student
{
public:
 int age;
 int rollno;
 string name;
 int marks[5];
 float perc;

 void read(){
 int i,s=0;
 cout<<"Enter your name\n";
 cin>>name;
 cout<<"enter your rollno\n";
 cin>>rollno;
 cout<<"Enter your age\n";
 cin>>age;
 cout<<"Enter 5 subject marks\n";
 for(i=0;i<5;i++){
 cin>>marks[i];
 s=s+marks[i];
 }
 perc=s/5.0;
 }

 void display(){
 int i;
 cout<<"Name="<<name<<"\nage="<<age<<endl;
 cout<<"5 Subject marks are:\n";
 for(i=0;i<5;i++){
 cout<<marks[i]<<"\t";
 }
 cout<<"\nPercentage="<<perc<<endl;
 }
};
int main()
{
 student s[100];
 int n,i;
 cout<<"Enter number of students\n";
 cin>>n;
 for(i=0;i<n;i++)
 {
 cout<<"\nEnter student "<<(i+1)<<" data:\n";
 s[i].read();
 }
 for(i=0;i<n;i++)
 {
 cout<<"\nstudent "<<(i+1)<<" data is:\n";
 s[i].display();
 }
}
