#include<iostream>
#include<string>
using namespace std;

//Base Class
class student{
protected:
   string name;
   int roll_no;
 
 public:
   void getdata(){
        cout<<"Enter student name: ";
        cin>>name;
        cout<<"Enter roll number: ";
        cin>>roll_no;
  }
};

class student_marks:public student{
protected:
   float marks[5];
   float totalmarks;
   
public:
  void getmarks(){
     totalmarks=0;
     cout<<"Enter marks for 5 subjects:\n";
     for (int i=0;i<5;i++) {
        cout<<"Subject"<<i+1<<":";
        cin>>marks[i];
        totalmarks+=marks[i];
     }
   }
};

class student_result:public student_marks{
private:
   float percent;
   
public:
   void display(){
      percent=(totalmarks/500.0)*100.0;
      
      cout<<"\n Student Result \n";
      cout<<"Name: "<<name<<endl;
      cout<<"Roll Number: "<<roll_no<<endl;
      cout<<"Total Marks: "<<totalmarks<<"/500"<<endl;
      cout<<"Percentage: "<<percent<<"%"<<endl;
   }
};

int main(){
  student_result sr;
  sr.getdata();
  sr.getmarks();
  sr.display();
  
  return 0;
}

      
      
  
        

