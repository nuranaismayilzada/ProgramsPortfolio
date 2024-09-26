#include<iostream>
using namespace std;
struct Book {
	char* name;
	char* autor;
	int page;
	int price;
	int code;

	void Show_Book() {
		cout << "Book's name: " << name<<endl;
		cout << "Book's autor: " << autor << endl;
		cout << "Book's page: " << page << endl;
		cout << "Book's price: " << price << endl;
		cout << "Book's code: " << code << endl;
	}
};
void Show_All_Book(Book**& books, int& size) {
	for (size_t i = 0; i < size; i++)
	{
		books[i]->Show_Book();
		cout << endl;
	}
}

int Search_Book(Book**& books, int& size, int& book_code) {
	for (size_t i = 0; i < size; i++)
	{
		if (books[i]->code==book_code)
		{
			return i;
		}
	}
	return -1;
}
void Delete_Book(Book**& books, int& size, int& book_code) {
	int index = Search_Book(books, size, book_code);
	if (index==-1)
	{
		cout << "Book not found.";
	}
	delete[]books[index];
	for (size_t i = index; i < size-1; i++)
	{
		books[i] = books[i + 1];
	}
	size--;
}
void main() {
	Book* b1 = new Book{ new char[20] {"The Prince"}, new char[40] {"Niccolo Machiavelli"}, 400, 30, 1 };
	Book* b2 = new Book{ new char[20] {"War and Peace"}, new char[20] {"Leo Tolstoy"}, 300, 50, 2 };
	Book* b3 = new Book{ new char[40] {"Crime and Punishment"}, new char[20] {"Fyodor Dostoevsky"}, 300, 45, 3 };
	Book* b4 = new Book{ new char[20] {"Pride and Prejudice"}, new char[20] {"Jane Austen"}, 200, 35, 4 };
	Book* b5 = new Book{ new char[20] {"The Great Gatsby"}, new char[20] {"F. Scott Fitzgerald"}, 302, 40, 5 };
	Book* b6 = new Book{ new char[20] {"Moby Dick"}, new char[20] {"Herman Melville"}, 202, 38, 6 };
	Book* b7 = new Book{ new char[20] {"Leyli ve Mecnun"}, new char[20] {"Nizami Gencevi"}, 200, 22, 7 };
	Book* b8 = new Book{ new char[40] {"To Kill a Mockingbird"}, new char[20] {"Harper Lee"}, 900, 48, 8 };
	Book* b9 = new Book{ new char[40] {"The Catcher in the Rye"}, new char[20] {"J.D. Salinger"}, 87, 36, 9 };
	Book* b10 = new Book{ new char[20] {"Brave New World"}, new char[20] {"Aldous Huxley"}, 211, 4, 10 };

	int size = 10;
	Book** books = new Book * [size] {b1, b2, b3, b4, b5, b6, b7, b8, b9, b10};
	Book** Books = new Book * [size] {
		new Book{ new char[30] {"The Prince"}, new char[40] {"Niccolo Machiavelli"}, 400, 30, 1 },
			new Book{ new char[20] {"War and Peace"}, new char[20] {"Leo Tolstoy"}, 340, 50, 2 },
			new Book{ new char[40] {"Crime and Punishment"}, new char[20] {"Fyodor Dostoevsky"}, 201, 45, 3 },
			new Book{ new char[20] {"Pride and Prejudice"}, new char[20] {"Jane Austen"}, 222, 35, 4 },
			new Book{ new char[20] {"The Great Gatsby"}, new char[20] {"F. Scott Fitzgerald"}, 123, 40, 5 },
			new Book{ new char[20] {"Moby Dick"}, new char[20] {"Herman Melville"}, 355, 38, 6 },
			new Book{ new char[20] {"Leyli ve Mecnun"}, new char[20] {"Nizami Gencevi"}, 92, 42, 7 },
			new Book{ new char[40] {"To Kill a Mockingbird"}, new char[20] {"Harper Lee"}, 224, 48, 8 },
			new Book{ new char[40] {"The Catcher in the Rye"}, new char[20] {"J.D. Salinger"}, 342, 36, 9 },
			new Book{ new char[20] {"Brave New World"}, new char[20] {"Aldous Huxley"}, 234, 44, 10 }
	};
	//Show_All_Book(books,size);


	//cout<<Search_Book(books, size, code);
	cout << "Butun kitablar : " << endl<<endl<<endl;
	Show_All_Book(books,size);
	int code;
	cout << "Silmek istediyiniz kitabin kodunu daxil edin: ";
	cin >> code;
	cout << "Silindikden sonrs qalan kitablar : " << endl << endl << endl;
	Search_Book(books, size, code);
	Delete_Book(books, size, code);
	Show_All_Book(books, size);


	for (size_t i = 0; i < size; i++)
	{
		delete[]books[i];
	}
	delete[]books;

}