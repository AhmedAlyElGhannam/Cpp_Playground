#include <iostream>
#include <string>
using namespace std;

#define BOOK_BORROW_LIMIT	10
#define LIB_MAX_BOOKS	50
#define LIB_MAX_USERS	10

struct book
{
	// VARS
	string name;
	unsigned int id; 
	unsigned char copies;
	
	// METHODS
	book()
	{
		name = "";
		id = 0;
		copies = 0; 
	}
	book(string & _name, unsigned int _id, unsigned char _copies)
	{
		name = _name;
		id = _id;
		copies = _copies; 
	}
	unsigned int get_id()
	{
		return id;
	}
	unsigned char get_num_of_copies()
	{
		return copies;
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
		name = "";
		id = 0;
		for (int i = 0; i < BOOK_BORROW_LIMIT; i++)
			listOfBorrowedBooks[i] = 0;
	} 
	user(string & _name, unsigned int _id)
	{
		name = _name;
		id = _id;
	} 
	bool is_valid_id()
	{
		
	}
	void borrow_book(unsigned int book_id)
	{
		// check if id is valid
		// check if the copies of this book > 0
		// if yes -> decrement available copies && add user to borrow list && add book to list of borrowed books for user
		// if no -> print message for admin saying out of copies or sth
	}
	void return_book(unsigned int book_id)
	{
		// check if id is valid
		// incement available copies && remove user to borrow list && remove book to list of borrowed books for user
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

	}
	void search_book_prefix(string prefix)
	{
		for (int i = 0; i < LIB_MAX_BOOKS; i++)
			if (is_prefix(prefix, books[i].name))
				cout << books[i].name << " ";

		cout << endl;

		return;
	}
	bool add_book(string bookName, unsigned int bookID)
	{
		// if successful -> true
		// if not -> false
		// maybe reorder them just in case

		return true; 
	}
	bool add_user(string userName)
	{
		// add them to array + assign a random ID to them
		// if successful -> true
		// if not -> false
		return true;
	}
	void print_users_by_name()
	{
		return;
	}
	void print_users_by_id()
	{
		return;
	}
	void print_books_by_name(struct book books[])
	{
		for (int i = 0; i < lib_book_count; i++)
		{
			cout << books[i].name << endl;
		}
		return;
	}
	void print_books_by_id()
	{
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
		print users by id
		print users by name
		exit 
	*/
	
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
				swap_books(books[i], books[j]); // swap based on id // swap based on id
		}
	}
}


string userName2userID()
{

}
unsigned int userID2userName()
{

}
string bookName2bookID()
{

}
unsigned int bookID2bookName()
{

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