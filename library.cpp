#include <iostream>
using namespace std;

class Library
{
    public:
    string bookName;
    string authorNAme;
    string  company;// the company which published the book
    string publication;
    string isbnNumber;
    string totalCopy;//total copy in library

    public:
    void information()//information about the books
    {
        cout << "Name of the book: "<< bookName<< endl;
        cout<< "Author Name: " << authorNAme << endl;
        cout<< "Company: " << company << endl;
        cout<< "Date of Publication: " <<publication << endl;
        cout<< "Isbn number: " << isbnNumber << endl;
        cout<< "Total copies available in the library: " << totalCopy << endl;
        
    }
};
int main()
{
    Library book1;
    book1.bookName ="Six of crows";
    book1.authorNAme ="Leigh bardvgo";
    book1.company = "Something";
    book1.publication = " September 29, 2015";
    book1.totalCopy = " 3";
    book1.isbnNumber = "1233341" ;

    cout << "  *******____BOOK 1 INFORMATION____*******"<< endl;
    book1.information();

    Library book2;
    book2.bookName ="The lost symbol";
    book2.authorNAme ="DAn brown";
    book2.company = "Something";
    book2.publication = " September 30, 2015";
    book2.totalCopy = " 5";
    book2.isbnNumber = "34343341" ;

    cout << "  *******____BOOK 2 INFORMATION____*******"<< endl;
    book2.information();

    Library book3;
    book3.bookName ="Kafka on the shore";
    book3.authorNAme ="Haruki murakami";
    book3.company = "Something";
    book3.publication = " november 1, 2015";
    book3.totalCopy = " 3";
    book3.isbnNumber = "1343141234" ;

    cout << " *******____BOOK 3 INFORMATION____*******"<< endl;
    book3.information();



}