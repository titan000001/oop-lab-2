#include<iostream>
using namespace std;

class Book{
    public:
    string title;
    string author;
    string ISBN;

    Book(string rTitle,string rAuthor,string rISBN){
        title = rTitle;
        author = rAuthor;
        ISBN = rISBN;
        cout << title << " created" << endl;
    }

    ~Book(){
        cout << title << " destroyed" << endl;
    }
};

int main(){
    Book book1("Introduction to OOP", "John Doe", "123456789");
    Book book2("Data Structures and Algorithms", "Jane Smith", "98765421");
    return 0;
}