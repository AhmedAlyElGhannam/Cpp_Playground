#include <iostream>
#include <string>
using namespace std;

#define lib_book_count 5

struct book
{
	// VARS
	string name;
	unsigned int id; 
	unsigned int copies;
	
	// METHODS
	book()
	{
		name = "";
		id = 0;
		copies = 1; 
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

void swap_books(struct book & book1, struct book & book2)
{
	struct book temp;

	temp = book1;
	book1 = book2;
	book2 = temp;
}

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

void order_books_by_name(struct book books[])
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


void order_books_by_id(struct book books[])
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


void print_books_by_name(struct book books[])
{
	for (int i = 0; i < lib_book_count; i++)
	{
		cout << books[i].name << endl;
	}
	return;
}

int main()
{
	struct book books[lib_book_count];
	books[0].name = "ayo";
	books[1].name = "oi";
	books[2].name = "aah";
	books[3].name = "yo";
	books[4].name = "boi";
// 3 4 1 2 0
	books[0].id = 510;
	books[1].id = 64;
	books[2].id = 69;
	books[3].id = 10;
	books[4].id = 17;
	order_books_by_id(books);
	print_books_by_name(books);
	//books[0].copies = 2;
	cout << books[0].copies << endl;
	books[0].inc_copies();
	cout << books[0].copies << endl;
	
	return 0;
}