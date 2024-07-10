#include <iostream>
#include <string>
using namespace std;

#define BOOK_BORROW_LIMIT	5
#define LIB_MAX_BOOKS	50
#define LIB_MAX_USERS	10

// user ID shenanigans
unsigned int book_id = 1;
unsigned int user_id = 1;

struct book
{
	// VARS
	string name;
	unsigned int id; 
	unsigned char copies;
	
	// METHODS
	book()
	{
		if (book_id > LIB_MAX_BOOKS)
		{
			cout << "Max Number of Books Reached!"
				 << endl
				 << "Cannot Add More!"
				 << endl;
			return;
		}
		this->name = "";
		this->id = book_id;
		book_id++;
		this->copies = 1; 
	}
	void inc_copies()
	{
		copies++;
	}
	void dec_copies()
	{
		copies--;
	}
};

struct user
{
	// VAR
	string name;
	unsigned int id;
	unsigned int listOfBorrowedBooks[BOOK_BORROW_LIMIT];
	
	// METHODS
	user()
	{
		if (user_id > LIB_MAX_USERS)
		{
			cout << "Max Number of Users Reached!"
				 << endl
				 << "Cannot Add More!"
				 << endl;
			return;
		}
		this->name = "";
		this->id = user_id;
		user_id++;
		for (int i = 0; i < BOOK_BORROW_LIMIT; i++)
			this->listOfBorrowedBooks[i] = 0;
	} 
	void borrow_book(struct book book1)
	{
		// check if id is valid
		// check if the copies of this book > 0
		// if yes -> decrement available copies && add user to borrow list && add book to list of borrowed books for user
		// if no -> print message for admin saying out of copies or sth

		// check if user already has a copy
		if (is_borrowed_book(book1))
		{
			cout << "Cannot Borrow Another Copy of The Same Book, Silly!"
				 << endl;
			return;
		}
					
		if (book1.copies > 0) // there are available copies
		{
			// dec copies
			book1.dec_copies(); 
			// add book id to borrowed books list
			for (int i = 0; i < BOOK_BORROW_LIMIT; i++)
				if (this->listOfBorrowedBooks[i] != 0)
					this->listOfBorrowedBooks[i] = book1.id;
		}	
		else // no copies available
		{
			cout << "No Copies are Available of This Book."
				 << endl;
		}

		return;
	}
	bool is_borrowed_book(struct book book1)
	{
		for (int i = 0; i < BOOK_BORROW_LIMIT; i++)
			if (this->listOfBorrowedBooks[i] == book1.id)
				return true;

		return false;
	}
	void return_book(struct book book1)
	{
		// check if id is valid
		// incement available copies && remove user to borrow list && remove book to list of borrowed books for user
		// user must have a copy to return

		// check if user already has a copy
		if (!is_borrowed_book(book1))
		{
			cout << "Cannot Return a Copy of a Book You Do Not Have, Silly!"
				 << endl;
			return;
		}

		// inc copies
		book1.inc_copies(); 
		// add book id to borrowed books list
		for (int i = 0; i < BOOK_BORROW_LIMIT; i++)
			if (this->listOfBorrowedBooks[i] == book1.id)
				this->listOfBorrowedBooks[i] = 0;

		return;
	}
	void print_borrowed_books()
	{
		// simply print
	}
};

struct library
{
	struct user users[LIB_MAX_USERS];
	struct book books[LIB_MAX_BOOKS];
	unsigned int book_id[LIB_MAX_BOOKS];
	unsigned int user_id[LIB_MAX_USERS];
	unsigned char lib_book_count;
	unsigned char lib_user_count;

	library()
	{
		this->lib_book_count = 0;
		this->lib_user_count = 0;
	}
	void search_book_prefix(string prefix)
	{
		for (int i = 0; i < LIB_MAX_BOOKS; i++)
			if (is_prefix(prefix, this->books[i].name))
				cout << this->books[i].name << " ";

		cout << endl;

		return;
	}
	bool add_book(string bookName, unsigned char bookCopies = 1)
	{
		// if successful -> true
		// if not -> false
		// maybe reorder them just in case
		if (lib_book_count == LIB_MAX_BOOKS)
		{
			cout << "Max Number of Books Reached!"
				 << endl;

			return false;
		}
		else
		{
			struct book bookDumDum;
			bookDumDum.name = bookName;
			bookDumDum.copies = bookCopies;
			
			this->books[lib_book_count] = bookDumDum;
			this->lib_book_count++;
		}

		return true;
	}
	bool add_user(string userName)
	{
		// add them to array + assign a random ID to them
		// if successful -> true
		// if not -> false
		if (lib_user_count == LIB_MAX_USERS)
		{
			cout << "Max Number of Users Reached!"
				 << endl;

			return false;
		}
		else
		{
			struct user userDumDum;
			userDumDum.name = userName;

			this->users[lib_user_count] = userDumDum;
			this->lib_user_count++;
		}

		return true;
	}
	void print_users_by_name()
	{
		for (int i = 0; i < lib_user_count; i++)
			cout << this->users[i].name << endl;

		return;
	}
	void print_users_borrowing_book(struct book book1)
	{
		for (int i = 0; i < lib_user_count; i++)
		{
			if (this->users[i].is_borrowed_book(book1))
			{
				cout << this->users[i].name
					 << endl;
			}
		}
	}
	void print_books_by_name(struct book books[])
	{
		order_books_by_name(books, this->lib_book_count);

		for (int i = 0; i < lib_book_count; i++)
			cout << this->books[i].name << endl;

		return;
	}
	void print_books_by_id(struct library lib)
	{
		order_books_by_id(books, this->lib_book_count);
		
		for (int i = 0; i < lib_book_count; i++)
			cout << this->books[i].id << endl;

		return;
	}
};


// AUX Functions

char prompt_message()
{
	char user_choice = -1;
	cout << "\n\n"
		 << "Enter Your Choice:"
		 << "\n";
	
	cout << "1) Add a New Book to Library DB" << endl
		 << "2) Search for a Book by Name Prefix" << endl
		 << "3) Print Users who Borrowed a Book (Enter Book Name/ID)" << endl
		 << "4) Print Books in Library (By Name/ID)" << endl
		 << "5) Print Books in Library (By Name/ID)" << endl
		 << "4) Exit\n" << endl;

	/*
		add book
		search for book by prefix
		print users who borrowed book (takes book name)
		print books in library by id
		print books in library by name
		add user
		user borrow
		user return
		print users by name
		exit 
	*/
	// getline(cin,fullname,'\n');

	cin >> user_choice;

	return user_choice;
}

/**UNIT TEST PASS*/
bool is_prefix(string s1, string s2) // s1 is prefix, s2 is og string
{
	size_t len1 = s1.length();
	size_t len2 = s2.length();

    if (len1 > len2)
        return false;

    for (int i = 0; i < len1; i++)
        if (s1[i] != s2[i])
            return false;

    return true;
}
/**UNIT TEST PASS*/
bool is_first_alphabetically(string s1, string s2)
{
	size_t len = 0;

	if (s1.length() < s2.length())
		len = s1.length();
	else
		len = s2.length();

	for (int i = 0; i < len; i++)
	{
		if (s1[i] < s2[i])
			return true;
		else if (s1[i] > s2[i])
			return false;
		else // s1[i] == s2[i]
			continue;
	}
	
	// both same string
	return true;
}
/**UNIT TEST PASS*/
void swap_books(struct book & book1, struct book & book2)
{
	struct book temp;

	temp = book1;
	book1 = book2;
	book2 = temp;
}
/**UNIT TEST PASS*/
void order_books_by_name(struct book books[], unsigned int lib_book_count)
{
	for (int i = 0; i < lib_book_count; i++)
	{
		for (int j = i+1; j < lib_book_count; j++)
		{
			if (!(is_first_alphabetically(books[i].name, books[j].name)))
				swap_books(books[i], books[j]);
		}
	}
}
/**UNIT TEST PASS*/
void order_books_by_id(struct book books[], unsigned int lib_book_count)
{
	for (int i = 0; i < lib_book_count; i++)
	{
		for (int j = i+1; j < lib_book_count; j++)
		{
			if (books[i].id > books[j].id)
				swap_books(books[i], books[j]); // swap based on id 
		}
	}
}


string userName2userID()
{

}
unsigned int userID2userName()
{

}
struct book bookName2bookID(struct library & lib, string & bookName)
{
	for (int i = 0; i < lib.lib_book_count; i++)
		if (lib.books[i].name == bookName)
			return lib.books[i];
}
struct book bookID2bookName(struct library & lib, unsigned int & bookID)
{
	for (int i = 0; i < lib.lib_book_count; i++)
		if (lib.books[i].id == bookID)
			return lib.books[i];
}

int main()
{
	char choice;
	bool is_program_running = true;
	
	while (is_program_running)
	{
		cin.clear();
		choice = prompt_message();
		switch (choice)
		{
			case (1):
				add_patient();
				break;
			
			case (2):
				print_patients();
				break;
			
			case (3):
				cout << "Enter Specialization: ";
				cin >> choice;
				get_next_patient(choice);
				break;
			
			case (4):
				is_program_running = false;
				break;
			default:
				cout << "Invalid Input!"
					 << "\n"
					 << "Try Again."
					 << endl;
				break;
		}
	}
	
	cout << "Adios, bitches!"
		 << endl;
	
	return 0;
}