#include<iostream>
#include<string>
using namespace std;

//Base Class
class Library{
protected:
  string library_name;
  int issue_number;

public:
  void setLibraryName(){
    library_name="College Library";
  }
};

//Derived Class1
class Book:public Library{
private:
  string book_title;
  
public:
  void getBookDetails(){
    setLibraryName();
    cout<<"Enter Book Title: ";
    cin>>book_title;
    cout<<"Enter Book Issue Number: ";
    cin>>issue_number;
  }
  void displayBook(){
    cout<<"\n Book Record ("<<library_name<<") \n";
    cout<<"Book Title: "<<book_title<<endl;
    cout<<"Issue Number: "<<issue_number<<endl;
  }
};

//Derived Class2
class Magazine:public Library{
private:
  string magazine_title;
  
public:
  void getMagazineDetails(){
    setLibraryName();
    cout<<"Enter Magazine Title: ";
    cin>>magazine_title;
    cout<<"Enter Magazine Issue Number: ";
    cin>>issue_number;
  }
  void displayMagazine(){
    cout<<"\n Magazine Record ("<<library_name<<") \n";
    cout<<"Magazine Title: "<<magazine_title<<endl;
    cout<<"Issue Number: "<<issue_number<<endl;
  }
};

int main(){
  Book b;
  Magazine m;
  
  cout<<"Reading Book Data:\n";
  b.getBookDetails();
  cout<<"Reading Magazine Data:\n";
  m.getMagazineDetails();
  
  b.displayBook();
  m.displayMagazine();
  
  return 0;
}
   
  
