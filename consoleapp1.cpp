// consoleapp1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <string>

struct Book {
    std::string title;
    std::string author;
};

class Library {
private:
    std::vector<Book> books;
public:
    void addBook(const std::string& title, const std::string& author) {
        books.push_back({ title, author });
        std::cout << "Libri u shtua me sukses!" << std::endl;
    }
    void displayBooks() const {
        if (books.empty()) {
            std::cout << "Asnje liber nuk eshte shtuar ende." << std::endl;
            return;
        }
        std::cout << "Librat ne biblioteke:" << std::endl;
        for (size_t i = 0; i < books.size(); ++i) {
            std::cout << i + 1 << ". " << books[i].title << " nga " << books[i].author << std::endl;
        }
    }
};

int main()
{
    Library myLibrary;
    int choice;
    std::string title, author;

    do { 
         std::cout << "\n1. Shto liber";
         std::cout << "\n2. Shfaq librat";
         std::cout << "\n3. Dil";
         std::cout << "\nZgjedh opsionin";
         std::cin >> choice;
         std::cin.ignore();
        if (choice == 1) {
            std::string title, author;
            std::cout << "Titulli: ";
            std::getline(std::cin, title);
            std::cout << "Autori: ";
            std::getline(std::cin, author);
            myLibrary.addBook(title, author);
            myLibrary.displayBooks();
        }
    } while (choice != 2);

    return 0;
    
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
