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
        #include <iostream>
#include <vector>
#include <string>

// Existing Library class remains unchanged
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

// New Feature Screen 1: Book of the Day
class BookOfTheDay {
public:
    void displayBookOfTheDay() {
        std::cout << "\n--- BOOK OF THE DAY ---" << std::endl;
        std::cout << "Calculus Made Easy by Silvanus P. Thompson" << std::endl;
        std::cout << "Rating: *****" << std::endl;
        std::cout << "Price: 20$" << std::endl;
        std::cout << "[1] BUY NOW  [2] ADD TO WISHLIST" << std::endl;
    }
};

// New Feature Screen 2: Personalization
class Personalization {
public:
    void displayOptions() {
        std::cout << "\n--- PERSONALIZATION SCREEN ---" << std::endl;
        std::cout << "[1] Adjust Font Size/Style" << std::endl;
        std::cout << "[2] Enable Audiobooks" << std::endl;
        std::cout << "[3] Download for Offline" << std::endl;
        std::cout << "[4] Contact Live Support" << std::endl;
    }
};

int main() {
    Library myLibrary;
    BookOfTheDay botd;
    Personalization pScreen;
    int choice;

    do {
        std::cout << "\n1. Shto liber";
        std::cout << "\n2. Shfaq librat";
        std::cout << "\n3. Book of the Day";
        std::cout << "\n4. Personalization";
        std::cout << "\n5. Dil";
        std::cout << "\nZgjedh opsionin: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
        case 1:
            {
                std::string title, author;
                std::cout << "Titulli: ";
                std::getline(std::cin, title);
                std::cout << "Autori: ";
                std::getline(std::cin, author);
                myLibrary.addBook(title, author);
                break;
            }
        case 2:
            myLibrary.displayBooks();
            break;
        case 3:
            botd.displayBookOfTheDay();
            break;
        case 4:
            pScreen.displayOptions();
            break;
        case 5:
            std::cout << "Duke dale..." << std::endl;
            break;
        default:
            std::cout << "Opsion i pavlefshem!" << std::endl;
        }
    } while (choice != 5);

    return 0;
}

    }
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
