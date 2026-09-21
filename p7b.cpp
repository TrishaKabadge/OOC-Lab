#include<iostream>
#include<string>
using namespace std;

//Base Class
class Library{
protected:
  string library_name;

public:
  void setLibraryName(){
    library_name="College Library";
  }
};

class Book:public Library{
private:
  string book_title;
public:
  void getBookDetails(){
    setLibraryName();
    cout<<"Enter Book Title: ";
    cin>>book_title;
  }
  void displayBook(){
    cout<<"\n Book Record ("<<library_name<<") \n";
    cout<<"Book Title: "<<book_title<<endl;
  }
};

class Magazine:public Library{
private:
  string magazine_title;
public:
  void getMagazineDetails(){
    setLibraryName();
    cout<<"Enter Magazine Title: ";
    cin>>magazine_title;
  }
  void displayMagazine(){
    cout<<"\n Magazine Record ("<<library_name<<") \n";
    cout<<"Magazine Title: "<<magazine_title<<endl;
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
   
  
