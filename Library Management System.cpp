#include<iostream>
#include<string>
#include <cstdlib>

using namespace std;

const int admin_max_size = 4
const int librarians_username = 20;
const int librarians_password = 38;
const int user_max_size = 100;
const int book_max_size = 30;
int book_arrangement = 0;


struct librarians
{

	char username[librarians_username];
	char password[librarians_password];

} lib[admin_max_size] , admin;

struct creation_date
{

	unsigned int day =0;
	unsigned int month =0;
	unsigned int year =0;
	unsigned int date_days = 0;

};

struct user_details
{

	unsigned short int ID=0;
	string Name ;
	string e_mail ;
	string password ;
	string account_type ;
	creation_date date;
	string contact_number[3] ;
	bool full_information=false ;

} user[user_max_size];

struct book_information
{

	string Title;
	unsigned short int Production_year=0;
	unsigned short int Number_of_copies=0;
	string category;
	unsigned short int Edition=0;

} book[book_max_size];



void pattern_display();
void welcome();
void librarians_information();

bool admin_validation_check(librarians);
void admin_request_window();
void admin_recieve_information();
void add_user_receive_information_window ();
void default_2user_information();
void add_user_receive_information();

void books_information_bydefault();
void searching_book_window();
void print_book_information(int);
void search_by_title();
void search_by_production_year();
void book_search();

void number_of_copies_check(int);
void user_buying_validition();

void print_user_information(int i);

void report_print_user_information(creation_date date);



	

int main()
{

m:

	int user_choice;
	char user_choice_admin;
	


	librarians_information();
	
	default_2user_information();

	books_information_bydefault();
	
	welcome();
	

	cin >> user_choice;

				switch (user_choice)
				{
						case 1:
						{
							bool validition_check = 0;

								system("CLS");

								admin_request_window();

								cin >> user_choice_admin;
				

										if (user_choice_admin == 'ok')
										{

										}
										else if (user_choice_admin == 'm' || user_choice_admin == 'M')
										{
												system("CLS");
												goto m;

										}
										else if(user_choice_admin=='e' || user_choice_admin=='E')
										{
												exit(0);
										}

								cin.ignore();
				
			
c:
								admin_recieve_information();
					

								validition_check=admin_validation_check(admin);

											if (validition_check == 1)
											{
												char choice;


												system("CLS");

												pattern_display();

													cout << "\t\t\t\t Welcome admin" << endl;
													cout << "\t\t\t\t You have the power now " << endl;

a:

													add_user_receive_information_window();
													add_user_receive_information();

													system("CLS");

												cout << "\t\t\t\t1: if you want to add another account press a or A ";
												cout << "\t\t\t\t2: if you want to return to main menu press m or M" << endl;
												cout << "\t\t\t\t3: if you want to exit press e or E \n\t\t\t\t";
									
												cin >> choice;

															if (choice == 'a' || choice == 'A')
															{
																goto a;
															}

															else if (choice == 'm' || choice == 'M')
															{
																goto m;
															}

															else if (choice == 'e' || choice == 'E')
															{
																exit(0);
															}
						

											}
											else
											{
												char wrong_answer;

												cout << "\t\t\t\tsomething get Wrong " << endl;
												cout << "press c to try again or press m to return to main menu  " << endl;
												
												cin >> wrong_answer;


													if (wrong_answer == 'c')
													{
														system("CLS");

														goto c;
													}
													else if (wrong_answer == 'm')
													{
														system("CLS");
													
														goto m;
													}
					

											}

						}	
				
							break;
				

						case 2:
						{
				
							book_search();
					
						}

							break;
	
						
						case 3:
						{
								default_2user_information();

								user_buying_validition();

						}
							break;
				
						
						case 4:
						{

							bool validition_check_report = 0;

							system("CLS");

							admin_request_window();

							cin >> user_choice_admin;


							if (user_choice_admin == 'ok')
							{

							}
							else if (user_choice_admin == 'm' || user_choice_admin == 'M')
							{
								system("CLS");
								goto m;

							}
							else if (user_choice_admin == 'e' || user_choice_admin == 'E')
							{
								exit(0);
							}

							cin.ignore();


k:
							admin_recieve_information();


							validition_check_report = admin_validation_check(admin);

							if (validition_check_report == 1)
							{
								creation_date report_day;
								char choice;

								system("CLS");

								pattern_display();

								cout << "\t\t\t\t Welcome admin" << endl;
								cout << "\t\t\t\t You have the power now " << endl;


								cout << "\t\t\t\t Enter Today is date as shown day then space then month then space then year \n\t\t\t\t ";
								
								cin >> report_day.day >> report_day.month >> report_day.year;


								report_print_user_information(report_day);

								
								


								

								cout << "\t\t\t\t**********************************************************\n";

								cout << "\t\t\t\t1: if you want to return to main menu press m or M" << endl;
								cout << "\t\t\t\t2: if you want to exit press e or E \n\t\t\t\t";

								cin >> choice;

								

								 if (choice == 'm' || choice == 'M')
								{
									 system("CLS");
									goto m;
								}

								else if (choice == 'e' || choice == 'E')
								{
									exit(0);
								}


							}
							else
							{
								char wrong_answer;

								cout << "\t\t\t\tsomething get Wrong " << endl;
								cout << "press c to try again or press m to return to main menu  " << endl;

								cin >> wrong_answer;


								if (wrong_answer == 'c')
								{
									system("CLS");

									goto k;
								}
								else if (wrong_answer == 'm')
								{
									system("CLS");

									goto m;
								}


							}
							
						}
						break;
	default:
		break;
	}

	
	
	
	return 0;
}



void pattern_display()
{
	cout << "\n\n\t\t\t*******************************************" << endl;
	cout << "\t\t\t------------------------------------------" << endl;;
	cout << "\t\t\t\tLIBRARY MANAGEMENT SYSTEM" << endl;
	cout << "\t\t\t------------------------------------------" << endl;
	cout << "\t\t\t*******************************************" << endl;
}

void welcome()
{
	pattern_display();
	cout << "\t\t\t\tHow can i help you \n" << endl;
	cout << "\t\t\t\t 1.add an account " << endl;						//should have validition check
	cout << "\t\t\t\t 2.Search for a specific book " << endl;
	cout << "\t\t\t\t 3.buy a book " << endl;							//should have account type check number of book check
	cout << "\t\t\t\t 4.generate reports " << endl;						//should have validition check
}



void librarians_information()
{
	
	strcpy_s(lib[0].username, "ah");
	strcpy_s(lib[0].password, "123");
	strcpy_s(lib[1].username, "ahmed magdy");
	strcpy_s(lib[1].password, "1234567");
	strcpy_s(lib[2].username, "kamal aser");
	strcpy_s(lib[2].password, "1234");
	strcpy_s(lib[3].username, "hassan kamal");
	strcpy_s(lib[3].password, "4321");
	
	
}



bool admin_validation_check(librarians x)
{
	bool check = 0;



	for (int i = 0;i < 4;i++)
	{

	bool username_check = 1;
	bool password_chech = 1;

					username_check = strcmp(x.username, lib[i].username);
					password_chech = strcmp(x.password, lib[i].password);
					
									if (username_check == false && password_chech == false)
									{
											check = 1;
											break;
									}
									else
									{
										check = 0;
										continue;
									}
	}

	return check;

}

void admin_request_window()
{
	system("CLS");

	pattern_display();

	cout << "\t\t\t\t You must have the authority to do so or you should be an admin" << endl;
	cout << "\t\t\t\t if you want to continue press ok " << endl;
	cout << "\t\t\t\t if you want to return to main menu press m or M" << endl;
	cout << "\t\t\t\t if you want to exit press e or E " << endl;
	
}

void admin_recieve_information()
{
	system("CLS");
	pattern_display();

	cin.ignore();
	cout << "\t\t\t\t Enter admin name " << endl;

	cin.getline(admin.username, 20);
	cout << "\t\t\t\t Enter admin password " << endl;
	cin.getline(admin.password, librarians_password);

}

void add_user_receive_information_window()
{
	system("CLS");

	pattern_display();

	cout << "\t\t\t\t You add a new user now" << endl;

}

void default_2user_information()
{
	user[0].ID = 1111;
	user[0].Name = "mohamed";
	user[0].password = "45451fdbas";
	user[0].account_type = "staff";
	user[0].e_mail = "mohamed@gmail.com";
	user[0].date.day = 11;
	user[0].date.month = 1;
	user[0].date.year = 2020;
	user[0].date.date_days = user[0].date.day + user[0].date.month * 30 + user[0].date.year * 12 * 30;
	user[0].contact_number[0]= "012526345651";
	user[0].full_information = true;


	user[1].ID = 2222;
	user[1].Name = "ahmed";
	user[1].password = "64645bas";
	user[1].account_type = "student";
	user[1].e_mail = "ahmed@gmail.com";
	user[1].date.day = 12;
	user[1].date.month = 1;
	user[1].date.year = 2020;
	user[1].date.date_days = user[1].date.day + user[1].date.month * 30 + user[1].date.year * 12 * 30;
	user[1].contact_number[0] = "01252634565135";
	user[1].full_information = true;

	}

void add_user_receive_information()
{
	for (int i = 2;i < user_max_size;i++)
	{
		if (user[i].full_information == true)
		{
			continue ;
		}
		else
		{
			cout << i << endl;
			cout << "\t\t\t\t Enter user id \n \t\t\t\t";
			cin>>user[i].ID;
			cout << endl;
			
			cout<< "\t\t\t\t Enter user name \n \t\t\t\t";
			cin >> user[i].Name;
			cout << endl;
			cout<<"\t\t\t\t Enter user password \n \t\t\t\t";
			cin >> user[i].password;
			cout << endl;
			cout << "\t\t\t\t Enter user E-mail as like *****@gmail.com\n \t\t\t\t";
			cin >> user[i].e_mail;
			cout << endl;
			cout << "\t\t\t\t Enter user type (Student/Staff/Guest) \n \t\t\t\t";
			cin >> user[i].account_type;
			cout << endl;
			cout << "\t\t\t\t Enter user creation date  day then space then month then year \n \t\t\t\t";
			cin >> user[i].date.day >> user[i].date.month >> user[i].date.year;

			user[i].date.date_days = user[i].date.year * 12 * 30 + user[i].date.month * 30 + user[i].date.day;
			cout << endl;
			cout << "\t\t\t\t Enter user contact number (You should enter 3 numbers) \n \t\t\t\t";
			cout << "\t\t\t\t 1:";
			cin >> user[i].contact_number[0];
			cout << endl;
			cout << "\t\t\t\t 2:";
			cin >> user[i].contact_number[1];
			cout << endl;
			cout << "\t\t\t\t 3:";
			cin >> user[i].contact_number[2];
			cout << endl;

			user[i].full_information = true;
			
			break;
			

		}

	}
}

void books_information_bydefault()
{
	book[0].Title = "narouto";
	book[0].Production_year = 2005;
	book[0].category = "carton";
	book[0].Edition = 19;
	book[0].Number_of_copies = 4;

	book[1].Title = "The End";
	book[1].Production_year = 2020;
	book[1].category = "action";
	book[1].Edition = 21;
	book[1].Number_of_copies = 1;

	book[2].Title = "The Crew";
	book[2].Production_year = 2000;
	book[2].category = "stories";
	book[2].Edition = 18;
	book[2].Number_of_copies = 0;
}

void searching_book_window()
{
	
	
	system("CLS");

	pattern_display();

	cout << "\t\t\t\t You can search for specifing book by " << endl;
	cout << "\t\t\t\t 1. searching by Name " << endl;
	cout << "\t\t\t\t 2. searching by Production year " << endl;

}

void print_book_information(int i)
{
	cout << "\t\t\t\t Title:" << book[i].Title << endl;
	cout << "\t\t\t\t Category:" << book[i].category << endl;
	cout << "\t\t\t\t Edition:" << book[i].Edition << "th" << endl;
	cout << "\t\t\t\t Production Year:" << book[i].Production_year << endl;
}

void search_by_title()
{

	h:

	string search_title;

	bool book_found = 0;
	cout << "\t\t\t\t Enter the title of book \n\t\t\t\t";
	cin >> search_title;

	for (int i = 0;i < book_max_size;i++)
	{
		if (search_title == book[i].Title)
		{
			book_found = 1;
			book_arrangement = i;

			print_book_information(i);

			break;
		}
		else
		{
			continue;

		}


	}
	char search_again;
	if (book_found == 0)
	{
		cout << "\t\t\t\t Sorry book not found \n";
		cout << "\t\t\t\t press r to search again \n\t\t\t\t";
		cin >> search_again;

		if (search_again == 'r' || search_again == 'R')
		{
			goto h;
		}
	}
}


void search_by_production_year()
{
	h:
		unsigned short int search_production_year;

		bool book_found2 = 0;
		

		cout << "\t\t\t\t Enter the Production year of book \n\t\t\t\t";
		cin >> search_production_year;

		for (int i = 0;i < book_max_size;i++)
		{
			if (search_production_year == book[i].Production_year)
			{
				book_found2 = 1;
				book_arrangement = i;

				print_book_information(i);

				break;
			}
			else
			{
				continue;

			}


		}
		char search_again2;
		if (book_found2 == 0)
		{
			cout << "\t\t\t\t Sorry book not found \n";
			cout << "\t\t\t\t press r to search again \n\t\t\t\t";
			cin >> search_again2;

			if (search_again2 == 'r' || search_again2 == 'R')
			{
				goto h;
			}
		}
	}


void book_search()
{
	h:
	int searching_type;

	searching_book_window();

	cout << "\t\t\t\t Enter you choice \n\t\t\t\t" ;
	cin >> searching_type;
	
	switch (searching_type)
	{
	case 1:
	{
		search_by_title();
	}
		break;
	case 2:
	{
		search_by_production_year();
	}
		break;

	default:
	{
		cout << "\t\t\t\t some thing get wrong ";

		goto h;
	}
		break;
	}

}

void user_buying_validition()
{

r:

	unsigned short int id_check = 0;
	bool user_found = 0;

	cout << "\t\t\t\t Enter your ID please \n\t\t\t\t";
	cin >> id_check;
	
	for (int i = 0;i < user_max_size;i++)
	{
		if (id_check == user[i].ID)
		{
			if (user[i].account_type == "staff")
			{
				user_found = 1;
				book_search();

				number_of_copies_check(book_arrangement);

				char press_check;

				cout << "\t\t\t\t Do you need to buy another book \n\t\t\t\t";
				cout << "\t\t\t\t press r or R  to try again \n\t\t\t\t ";

				cin >> press_check;

				if (press_check == 'r' || press_check == 'R')
				{
					system("CLS");
					goto r;
				}

				break;
			}
			else
			{
				user_found = 1;
				cout << "\t\t\t\tI'm sorry you can't buy a book \n";
				cout << "\t\t\t\tYou are not from staff \n";
				break;
			}
		}
		else
		{
			continue;
		}

	}

	if (user_found == 0)
	{
		char press_check;

		cout << "\t\tSorry some thing get wrong -> id is wrong , account not found \n ";
		cout << "\t\t\t\t press r or R  to try again \n\t\t\t\t ";
		cin >> press_check;

		if (press_check == 'r' || press_check == 'R')
		{
			system("CLS");

			goto r;
		}
	}

}




void number_of_copies_check(int i)
{
	if (book[i].Number_of_copies > 1)
	{

		cout << "\n\t\t\t\t You can buy this book \n ";
		
		book[i].Number_of_copies --;
	}
	else
	{
		cout << "\n\t\t\t\t Sorry no copies avilable from this book \n";

	}

}
void print_user_information(int i)
{
	cout << " \n\t\t\t\t Name :" << user[i].Name << "\n";
	cout << " \n\t\t\t\t ID :" << user[i].ID << "\n";
	cout << " \n\t\t\t\t E-mail :" << user[i].e_mail << "\n";
	cout << " \n\t\t\t\t Account type :" << user[i].account_type << "\n";
	cout << " \n\t\t\t\t Date created :" << user[i].date.day<<"/"<<user[i].date.month<<"/"<<user[i].date.year << "\n";
	cout << " \n\t\t\t\t Contact Number [1]:" << user[i].contact_number[0] << "\n";
	cout << " \n\t\t\t\t Contact Number [2]:" << user[i].contact_number[1] << "\n";
	cout << " \n\t\t\t\t Contact Number [3]:" << user[i].contact_number[2] << "\n";
	cout << " \n\t\t\t\t ************************************************ \n";


}

void report_print_user_information(creation_date date)
{
	
	int j = 1;

	date.date_days = date.day + ( date.month * 30 ) + ( date.year * 30 * 12);
	

	while (j < 8)
	{
		
		//cout << "\n\t\t\t\t " << j << " day ago : \n ";

		for (int i = 0;i < user_max_size;i++)
		{
			if (user[i].full_information == true)
			{

				if (user[i].date.date_days == date.date_days - j)

				{
					cout << "\n\t\t\t\t " << j << " day ago : \n ";
					print_user_information(i);

				}

			}
			else
			{

				break;

			}

		}

		j++;

	}
	

}



