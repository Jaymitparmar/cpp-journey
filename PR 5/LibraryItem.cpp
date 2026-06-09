#include <iostream>
#include <string.h>

using namespace std;

class LibraryItem
{
private:
    string title;
    string author;
    string dueDate;

public:
    LibraryItem(string t, string a, string d)
    {
        title = t;
        author = a;
        dueDate = d;
    }

    string getTitle()
    {
        return title;
    }

    string getAuthor()
    {
        return author;
    }

    string getDueDate()
    {
        return dueDate;
    }

    virtual void checkOut() = 0;
    virtual void returnItem() = 0;
    virtual void displayDetails() = 0;

    virtual ~LibraryItem() {}
};


class Book : public LibraryItem
{
private:
    string isbn;

public:
    Book(string t, string a, string d, string i)
        : LibraryItem(t, a, d)
    {
        if (i.length() != 13)
            throw "ISBN must contain 13 characters.";

        isbn = i;
    }

    void checkOut()
    {
        cout << endl<< "Book Checked Out Successfully.";
    }

    void returnItem()
    {
        cout <<endl<< "Book Returned Successfully.";
    }

    void displayDetails()
    {
        cout <<endl<<endl<< "----- BOOK DETAILS -----";
        cout <<endl<< "Title    : " << getTitle();
        cout <<endl<< "Author   : " << getAuthor();
        cout <<endl<< "Due Date : " << getDueDate();
        cout <<endl<< "ISBN     : " << isbn;
    }
};

class DVD : public LibraryItem
{
private:
    int duration;

public:
    DVD(string t, string a, string d, int dur)
        : LibraryItem(t, a, d)
    {
        if (dur <= 0)
            throw "Duration must be greater than 0.";

        duration = dur;
    }

    void checkOut()
    {
        cout <<endl<< "DVD Checked Out Successfully.";
    }

    void returnItem()
    {
        cout <<endl<< "DVD Returned Successfully.";
    }

    void displayDetails()
    {
        cout <<endl<<endl<< "----- DVD DETAILS -----";
        cout <<endl<< "Title    : " << getTitle();
        cout <<endl<< "Author   : " << getAuthor();
        cout <<endl<< "Due Date : " << getDueDate();
        cout <<endl<< "Duration : " << duration << " Minutes";
    }
};


class Magazine : public LibraryItem
{
private:
    int issueNo;

public:
    Magazine(string t, string a, string d, int issue)
        : LibraryItem(t, a, d)
    {
        if (issue <= 0)
            throw "Issue Number must be greater than 0.";

        issueNo = issue;
    }

    void checkOut()
    {
        cout <<endl<< "Magazine Checked Out Successfully.";
    }

    void returnItem()
    {
        cout <<endl<< "Magazine Returned Successfully.";
    }

    void displayDetails()
    {
        cout <<endl<<endl<< "----- MAGAZINE DETAILS -----";
        cout <<endl<< "Title        : " << getTitle();
        cout <<endl<< "Author       : " << getAuthor();
        cout <<endl<< "Due Date     : " << getDueDate();
        cout <<endl<< "Issue Number : " << issueNo;
    }
};

int main()
{
    LibraryItem *items[100];
    int count = 0;
    int choice;

    do
    {
        cout <<endl<<endl<< "===== LIBRARY MANAGEMENT SYSTEM =====";
        cout <<endl<< "1. Add Book";
        cout <<endl<< "2. Add DVD";
        cout <<endl<< "3. Add Magazine";
        cout <<endl<< "4. Display All Items";
        cout <<endl<< "5. Check Out Item";
        cout <<endl<< "6. Return Item";
        cout <<endl<< "7. Exit";
        cout <<endl<< "Enter Choice : ";
        cin >> choice;

        try
        {
            if (choice == 1)
            {
                char title[50], author[50], dueDate[50], isbn[20];

                fflush(stdin);

                cout << "Enter Title : ";
                gets(title);

                cout << "Enter Author : ";
                gets(author);

                cout << "Enter Due Date : ";
                gets(dueDate);

                cout << "Enter ISBN (13 Characters) : ";
                gets(isbn);

                items[count] = new Book(title, author, dueDate, isbn);
                count++;

                cout <<endl<< "Book Added Successfully.";
            }

            else if (choice == 2)
            {
                char title[50], author[50], dueDate[50];
                int duration;

                fflush(stdin);

                cout << "Enter Title : ";
                gets(title);

                cout << "Enter Author : ";
                gets(author);

                cout << "Enter Due Date : ";
                gets(dueDate);

                cout << "Enter Duration : ";
                cin >> duration;

                items[count] = new DVD(title, author, dueDate, duration);
                count++;

                cout <<endl<< "DVD Added Successfully.";
            }

            else if (choice == 3)
            {
                char title[50], author[50], dueDate[50];
                int issue;

                fflush(stdin);

                cout << "Enter Title : ";
                gets(title);

                cout << "Enter Author : ";
                gets(author);

                cout << "Enter Due Date : ";
                gets(dueDate);

                cout << "Enter Issue Number : ";
                cin >> issue;

                items[count] = new Magazine(title, author, dueDate, issue);
                count++;

                cout <<endl<< "Magazine Added Successfully.";
            }

            else if (choice == 4)
            {
                if (count == 0)
                {
                    cout <<endl<< "No Items Available.";
                }
                else
                {
                    for (int i = 0; i < count; i++)
                    {
                        cout <<endl<< "Item Number : " << i + 1;
                        items[i]->displayDetails();
                    }
                }
            }

            else if (choice == 5)
            {
                int num;

                cout << "Enter Item Number : ";
                cin >> num;

                if (num >= 1 && num <= count)
                    items[num - 1]->checkOut();
                else
                    cout <<endl<< "Invalid Item Number.";
            }

            else if (choice == 6)
            {
                int num;

                cout << "Enter Item Number : ";
                cin >> num;

                if (num >= 1 && num <= count)
                    items[num - 1]->returnItem();
                else
                    cout <<endl<< "Invalid Item Number.";
            }
        }
        catch (const char *msg)
        {
            cout <<endl<< "Error : " << msg;
        }

    } while (choice != 7);

    for (int i = 0; i < count; i++)
    {
        delete items[i];
    }

    cout <<endl << "Program Ended Successfully.";

    return 0;
}