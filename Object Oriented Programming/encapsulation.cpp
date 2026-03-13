#include<bits/stdc++.h>
using namespace std;
class Book{
    private:
    vector<bool> isAvailable;
    public:
    vector<string> bookNames;
    vector<string> authors;
    Book(vector<string> bookNames,vector<string> authors,vector<bool> isAvailable){
        this->bookNames = bookNames;
        this->authors = authors;
        this->isAvailable = isAvailable;
    }

    void borrowBook(string bookIssue){
        for(int i=0;i<bookNames.size();i++){
            if(bookNames[i]==bookIssue){
                if(isAvailable[i]){
                    cout<<"Book issued successfully: "<<bookIssue<<endl;
                    isAvailable[i] = false;
                }
                else{
                    cout<<"Book is not available: "<<bookIssue<<endl;
                }
            }
        }
    }
    void returnBook(string bookReturn){
        for(int i=0;i<bookNames.size();i++){
            if(bookNames[i]==bookReturn){
                cout<<"Book returned successfully: "<<bookReturn<<endl;
                isAvailable[i] = true;
            }
            else{
                cout<<"Book not found: "<<bookReturn<<endl;
            }
        }
    }
    void checkAvailability(string bookName){
        for(int i=0;i<bookNames.size();i++){
            if(bookNames[i]==bookName){
                if(isAvailable[i]){
                    cout<<"Book is available: "<<bookName<<endl;
                }
                else{
                    cout<<"Book is not available: "<<bookName<<endl;
                }
            }
        }
    }
};
int main(){
    vector<string> bookNames = {"Book1","Book2","Book3"};
    vector<string> authors = {"Author1","Author2","Author3"};
    vector<bool> isAvailable = {true,true,true};
    Book library(bookNames,authors,isAvailable);
    library.borrowBook("Book1");
    library.checkAvailability("Book1");
    library.returnBook("Book1");
    library.checkAvailability("Book1");
    return 0;
}