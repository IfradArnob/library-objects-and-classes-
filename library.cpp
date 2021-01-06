#include <iostream>
#include <string>
using namespace std;

class Library
{
    private:
        string bookName,authorNAme,company,publication,isbnNumber,totalCopy;

    public:
        Library(string ab,string ac,string ad,string ae,string af,string ai)
        {
            bookName = ab;
            authorNAme = ac;
            company = ad;
            publication = ae;
            isbnNumber = af;
            totalCopy = ai;
        }
    
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
    Library book1("Six of crows","Leigh bardvgo","something", "September 29, 2015"," 3","1233341");
    

    cout << "  *******____BOOK 1 INFORMATION____*******"<< endl;
    book1.information();

    Library book2("The lost symbol","DAn brown","Something"," September 30, 2015"," 5","34343341");
  

    cout << "  *******____BOOK 2 INFORMATION____*******"<< endl;
    book2.information();

    Library book3("Kafka on the shore","Haruki murakami","Something"," november 1, 2015"," 3","1343141234");
   

    cout << " *******____BOOK 3 INFORMATION____*******"<< endl;
    book3.information();



}