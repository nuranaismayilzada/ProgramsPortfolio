#include<iostream>
using namespace std;

struct Book {
	double price;
	char* title;
	char* author_name;
	int page;
};

struct BookItem {
	Book book;
	int quantity;
};

struct Library {
	BookItem** items;
	int size = 0;
};


void Show_Book(const Book& book) {
	cout << "------Book Info------" << endl;
	cout << "Author name: " << book.author_name << endl;
	cout << "Title: " << book.title << endl;
	cout << "Page: " << book.page << endl;
	cout << "Price: " << book.price << endl;
}

void Show_BookItem(const BookItem& bookItem) {
	Show_Book(bookItem.book);
	cout << "Quantity: " << bookItem.quantity << endl;
}

void Show_Library(const Library& library) {
	for (size_t i = 0; i < library.size; i++)
	{
		cout << "_________________ No " << i + 1 << " __________________________" << endl;
		Show_BookItem(*library.items[i]);
	}
}

void Add_Book(Library*& library) {

	Book* book = new Book{ 0,new char[30] {},
						  new char[20] {},0 };

	cout << "Enter title: ";
	cin.getline(book->title, 30);

	cout << "Enter author name: ";
	cin.getline(book->author_name, 20);

	cout << "Enter price: ";
	cin >> book->price;

	cout << "Enter page: ";
	cin >> book->page;


	BookItem* item = new BookItem{ *book,0 };
	cout << "Enter quantity: ";
	cin >> item->quantity;


	auto items = new BookItem * [library->size + 1] {};

	for (size_t i = 0; i < library->size; i++)
	{
		items[i] = library->items[i];
	}
	items[library->size] = item;
	library->size += 1;
	library->items = items;

	cin.ignore();
}
void Search_Book(const Library& library, int book_no) {
	if (book_no > 0 && book_no <= library.size) {
		Show_BookItem(*library.items[book_no - 1]);
	}
	else {
		cout << "Yalnis index: " << book_no << endl;
	}
}
void Update_Book(Library& library, int book_no) {
	if (book_no > 0 && book_no <= library.size) {
		BookItem* item = library.items[book_no - 1];

		cout << "Yeni title daxil edin: ";
		cin.ignore();
		cin.getline(item->book.title, 30);

		cout << "Yeni author name daxil edin: ";
		cin.getline(item->book.author_name, 20);

		cout << "Yeni price daxil edin: ";
		cin >> item->book.price;

		cout << "Yeni page daxil edin: ";
		cin >> item->book.page;

		cout << "Yeni quantity daxil edin: ";
		cin >> item->quantity;

		cout << "Kitab update olundu." << endl;
	}
	else {
		cout << "Yalnis index: " << book_no << endl;
	}
}

void Delete_Book(Library& library, int book_no) {
	if (book_no > 0 && book_no <= library.size) {
		delete library.items[book_no - 1]; 

		BookItem** new_items = new BookItem * [library.size - 1];

		for (int i = 0, j = 0; i < library.size; i++) {
			if (i != book_no - 1) {
				new_items[j++] = library.items[i];
			}
		}

		library.size--;  
		delete[] library.items; 
		library.items = new_items;  

		cout << "Kitab silindi!" << endl;
	}
	else {
		cout << "Yalnis index: " << book_no << endl;
	}
}


void main() {


	Book* b1 = new Book{ 10.5,new char[30] {"Tom Sawer Adventures"},
						  new char[20] {"Mark Twen"},410 };

	Book* b2 = new Book{ 34.7,new char[30] {"Yeddi gozel"},
						  new char[20] {"Nizami Gencevi"},410 };

	Book* b3 = new Book{ 10.5,new char[30] {"Da Vinci Code"},
						  new char[20] {"Dan Brown"},410 };

	BookItem* item1 = new BookItem{ *b1,5 };
	BookItem* item2 = new BookItem{ *b2,8 };
	BookItem* item3 = new BookItem{ *b3,10 };


	Library* library = new Library;
	library->items = new BookItem * [3] {item1, item2, item3};
	library->size = 3;

	while (true)
	{
		cout << "Secimler:"<<endl;
		cout << "1.Show Library     2.Add Book    3.Update Book   4.Delete Book"<<endl;
		int choice;
		cout << "Seciminizi daxil edin:";
		cin >> choice;
		if (choice==1)
		{
			Show_Library(*library);
		}
		else if (choice == 2) {
			Add_Book(library);
		}
		else if (choice == 3) {
			int updateBookNumber;
			cout << "Update etmek istediyiniz kitabin nomresini daxil edin:";
			cin >> updateBookNumber;
			Update_Book(*library, updateBookNumber);
		}
		else if (choice == 4) {
			int deleteBookNumber;
			cout << "Delete etmek istediyiniz kitabin nomresini daxil edin:";
			cin >> deleteBookNumber;
			Delete_Book(*library, deleteBookNumber);
		}
		else {
			cout << "Wrong choice!!!";
		}
	}

	//Show_Library(*library);

	//Show_Library(*library);

	//Add_Book(library);

	//Search_Book(*library, 3);

	//cout << endl;
	//Update_Book(*library, 2);
	//cout << endl;
	//Show_Library(*library);
	//cout << endl;
	//Delete_Book(*library, 3);
	//cout << endl;
	//Show_Library(*library);



	for (size_t i = 0; i < library->size; i++)
	{
		delete library->items[i];
	}
	delete library->items;
	delete library;

}


