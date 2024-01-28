#include<iostream>
#include<conio.h>
#include<windows.h>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;
float cart = 0;


void loading();

float instant(void);
float chips(void);
float noodles(void);
float pasta(void);


float meat(void);
float chicken(void);
float mutton(void);
float beef(void);

float fish(void);
float bnlfish(void);
float fcuts(void);
float crustaceans(void);

float grocery(void);
float spices(void);
float baking(void);
float spread(void);

float personal(void);
float men(void);
float women(void);
float dental(void);

float nut(void);
float nuts(void);

float home(void);
float laundry(void);
float clean(void);
float kitchen(void);

float baby(void);
float diaper(void);
float food(void);
float bath(void);

float bakery(void);
float milk(void);
float butter(void);
float egg(void);

float drink(void);
float tea(void);
float cold(void);
float juices(void);

struct person
{
	string address;
	string name;
	long int num;
};
void add_to_file()
{
	fstream file;
	file.open("delivery_data.txt", ios::app);
	person p[50];
	for (int jk = 0;jk < 1;jk++)
	{
		cout << "Enter Your Mobile Phone Number: ";
		cin >> p[0].num;
		cout << "Enter Your Address: ";
		cin >> p[0].address;
		cout << "Enter Your First Name: ";
		cin >> p[0].name;
	}
	file << "Location " + p->address << endl;
	file << "Phone# " + p->num << endl;
	file << "Name " + p->name << endl;

	file.close();
}

void main()
{
	double rev = 196564.61;
	person p[50];
	char cho, cho1;
	int category;

	//tesitng
	//tesitng
	//tesitng
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	loading();
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	cout << "\t\t\t\t\t\t\t\t\t\t\tC++ Store";
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	system("delay");

	for (int mvp = 0;mvp < 1;mvp++)
	{
		system("color B0");
		

		system("cls");
		cout << "----------------------------------------------------------------------------------------------------CATEGORIES----------------------------------------------------------------------------------------------------";
		Beep(523, 500);
		cout << "\n\n\n\nPress 0 For Instant Food ";
		cout << "\n\n\n\nPress 1 For Fresh Meat ";
		cout << "\n\n\n\nPress 2 For Fish & Seafood";
		cout << "\n\n\n\nPress 3 for Grocery ";
		cout << "\n\n\n\nPress 4 For Personal Care ";
		cout << "\n\n\n\nPress 5 For Dry Fruits & Nuts ";
		cout << "\n\n\n\nPress 6 Home Care ";
		cout << "\n\n\n\nPress 7 For Baby Care ";
		cout << "\n\n\n\nPress 8 For Bakery Diary ";
		cout << "\n\n\n\nPress 9 For Beverages ";
		cout << "\n\nYour Choice: ";
		cin >> category;
		if (category == 0)
			cart += instant();
		else if (category == 1)
			cart += meat();
		else if (category == 2)
			cart += fish();
		else if (category == 3)
			cart += grocery();
		else if (category == 4)
			cart += personal();
		else if (category == 5)
			cart += nut();
		else if (category == 6)
			cart += home();
		else if (category == 7)
			cart += baby();
		else if (category == 8)
			cart += bakery();
		else if (category == 9)
			cart += drink();

		cout << "\n\n\nYour Total Bill = Rs. " << cart;
		rev += cart;
		cout << "\n\nPress 'Y' To Add More Items From Categories: ";
		cin >> cho;
		if (cho == 'y' || cho == 'Y')
			mvp--;
	}
	
	system("cls");
	cout << "\t\t\t\t\t\t\t\t\t\t\tDelivery Information \n\n\n";
	for (int i = 0;i < 1;i++)
	{
		add_to_file();
		cout << "Press 'y' To Continue  \nPress 'n' To Re - Enter Information : ";
		cin >> cho;
		if (cho == 'n' || cho == 'N')
			i--;
		system("cls");
	}
	cout << "Your Total Bill:" << cart << endl;
	cout << "You will receive your order at your doorstep in 30 minutes";
	_getch();
}



//loading screen 
//loading screen 
//loading screen 

void loading() {

	char x = 219; 



	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << "\t\t\t\t\t\t\t\t\tL O A D I N G " << endl;

	cout << "\t\t\t\t\t";


	int bar_size = 69;   


	for (int i = 0; i < bar_size; i++) {
		cout << x << setw(0);


		int loading_time = 20;  


		Sleep(loading_time);
	}

	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
}
//This store has unlimited stock

float instant()
{
	system("cls");
	system("color 70");
	int choice ;
		float bill = 0;
	cout << "\nEnter 1 for Noodles";
	cout << "\nEnter 2 for Pasta";
	cout << "\nEnter 3 for Chips";
	cout << "\n\nYour Choice: ";
	cin >> choice;
	if (choice == 1)
		bill += noodles();
	else if (choice == 2)
		bill += pasta();
	else if (choice == 3)
		bill += chips();
	return bill;
}

float noodles()
{
	system("cls");
	system("color 90");
	float cart1 = 0;
	int choice;
	float kolson = 40.0, knorr = 41.0, samyang = 270.0;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Kolson Noodles (Rs40) ";
		cout << "\n\n\nPress 2 for Knorr Noodles (Rs 41)";
		cout << "\n\n\nPress 3 for Samyang (Rs 270)";
		cout << "\n\nYour Choice: ";
		cin >> choice;
		for (int i = choice; i < 2 && i>0;i++)
		{
			cart1 += kolson;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart1 += knorr;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart1 += samyang;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float pasta()
{
	system("cls");
	system("color 90");
	int choice;
	float vermicelli = 32.0, elbow = 124.0, spaghetti = 135.0;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for National Vermicelli (Rs 32)";
		cout << "\n\n\nPress 2 for Kolson Large Elbow (Rs 124)";
		cout << "\n\n\nPress 3 for Kolson Spaghetti (Rs 135)";
		cout << "\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += vermicelli;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += elbow;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += spaghetti;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float chips(void)
{
	system("cls");
	system("color 90");
	int choice;
	float lays = 50.0, pringles = 300.0, lites = 20.0;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Lays Masala  (Rs 50)";
		cout << "\n\n\nPress 2 for Pringles (Rs 300)";
		cout << "\n\n\nPress 3 for Lites(Rs 20)";
		cout << "\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += lays;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += pringles;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += lites;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float meat(void)
{
	system("cls");
	system("color 70");
	int choice, bill = 0;
	cout << "\nEnter 1 for Chicken";
	cout << "\nEnter 2 for Mutton";
	cout << "\nEnter 3 for Beef";
	cout << "\n\nYour Choice: ";
	cin >> choice;
	if (choice == 1)
		bill += chicken();
	else if (choice == 2)
		bill += mutton();
	else if (choice == 3)
		bill += beef();
	return bill;
}

float chicken(void)
{
	system("cls");
	system("color 90");
	int choice;
	float mince = 530.0, karahi = 360.0, boneless = 520.0;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Chicken Mince (Rs.530/Kg)";
		cout << "\n\n\nPress 2 for Karahi Cut (Rs 360/Kg)";
		cout << "\n\n\nPress 3 for Boneless(Rs 520/kg)";
		cout << "\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += mince;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += karahi;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += boneless;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float mutton(void)
{
	system("cls");
	system("color 90");
	int choice;
	float mince = 1500.0, shoulder = 1500.0, boneless = 2100.0;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Mutton Mince (Rs.1500/Kg)";
		cout << "\n\n\nPress 2 for Shoulder/Dusti (Rs 1500/Kg)";
		cout << "\n\n\nPress 3 for Boneless(Rs 2100/Kg)";
		cout << "\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += mince;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += shoulder;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += boneless;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float beef(void)
{
	system("cls");
	system("color 90");
	int choice;
	float mince = 1000.0, shoulder = 1500.0, boneless = 1700.0;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Beef Mince (Rs.1000/Kg)";
		cout << "\n\n\nPress 2 for Shoulder/Dusti (Rs 1500/Kg)";
		cout << "\n\n\nPress 3 for Boneless(Rs 1700/Kg)";
		cout << "\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += mince;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += shoulder;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += boneless;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float fish(void)
{
	system("cls");
	system("color 70");
	int choice, bill = 0;
	cout << "\nEnter 1 for Boneless Fish";
	cout << "\nEnter 2 for Fish Cuts";
	cout << "\nEnter 3 for Crustaceans";
	cout << "\n\nYour Choice: ";
	cin >> choice;
	if (choice == 1)
		bill += bnlfish();
	else if (choice == 2)
		bill += fcuts();
	else if (choice == 3)
		bill += crustaceans();
	return bill ;
}

float bnlfish(void)
{
	system("cls");
	system("color 90");
	int choice;
	float tilapia = 1100.0, rahu = 1500.0;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Tilapia Fish Fillets (Rs.1100/Kg)";
		cout << "\n\n\nPress 2 for Rahu Fish (Rs 1500/Kg)";
		cout << "\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += tilapia;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += rahu;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float fcuts(void)
{
	system("cls");
	system("color 90");
	int choice;
	float tuna = 1700.0, surmai = 2200.0;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Tuna Fish (Rs.1700/Kg)";
		cout << "\n\n\nPress 2 for Surmai Fish (Rs 2200/Kg)";
		cout << "\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += tuna;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += surmai;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float crustaceans(void)
{
	system("cls");
	system("color 90");
	int choice;
	float tilapia = 1000.0, prawn = 3000.0, crab = 1700.0;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Tilapia (Rs.1000/Kg)";
		cout << "\n\n\nPress 2 for Tiger Jumbo Prawn (Rs 1500/Kg)";
		cout << "\n\n\nPress 3 for Mud Crab (Rs 1700/Kg)";
		cout << "\n\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += tilapia;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += prawn;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += crab;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}
float grocery(void)
{
	system("cls");
	system("color 70");
	int choice, bill = 0;
	cout << "\nEnter 1 for Spices";
	cout << "\nEnter 2 for Baking Deserts";
	cout << "\nEnter 3 for Spreads";
	cout << "\n\nYour Choice: ";
	cin >> choice;
	if (choice == 1)
		bill += spices();
	else if (choice == 2)
		bill += baking();
	else if (choice == 3)
		bill += spread();
	return bill ;
}

float spices(void)
{
	system("cls");
	system("color 90");
	int choice;
	float chilli = 137.0, salt = 55.0, sugar = 110.0, vinegar = 120.0;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Red Chilli Powder(Rs. 137/200g)";
		cout << "\n\n\nPress 2 for National Iodized Pink Salt (Rs 50/g)";
		cout << "\n\n\nPress 3 for Sugar (Rs 110/Kg)";
		cout << "Press 4 for Vinegar (Rs. 120/800ml)";
		cout << "\n\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += chilli;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += salt;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += sugar;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 5 && i>3;i++)
		{
			cart += vinegar;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float baking(void)
{
	system("cls");
	system("color 90");
	int choice;
	float kheer = 100.0, icream = 100.0, custard = 100.0, jelly = 80.0;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for National Kheer mix (Rs. 100/100g)";
		cout << "\n\n\nPress 2 for National Ice Cream Powder (Rs 50/100g)";
		cout << "\n\n\nPress 3 for Rafhan Custard Powder (Rs 100/130g)";
		cout << "Press 4 for Shan Jelly mix (Rs. 120/60g)";
		cout << "\n\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += kheer;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += icream;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += custard;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 5 && i>3;i++)
		{
			cart += jelly;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}

		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float spread(void)
{
	system("cls");
	system("color 90");
	int choice;
	float jam = 100.0, honey = 193.0, Spread = 380.0;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Mitchells's Orange Marmalade Jam(Rs. 100/100g)";
		cout << "\n\n\nPress 2 for Marhaba Herbal Honey (Rs 50/g)";
		cout << "\n\n\nPress 3 for Chicken Mayonnaise Spread (Rs 380/500g)";
		cout << "\n\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += jam;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += honey;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += Spread;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float personal(void)
{
	system("cls");
	system("color 70");
	int choice, bill = 0;
	cout << "\nEnter 1 for Men Care";
	cout << "\nEnter 2 for Dental Care";
	cout << "\nEnter 3 for Women Care";
	cout << "\n\nYour Choice: ";
	cin >> choice;
	if (choice == 1)
		bill += men();
	else if (choice == 2)
		bill += women();
	else if (choice == 3)
		bill += dental();
	return bill ;
}

float men(void)
{
	system("cls");
	system("color 90");
	int choice;
	float bspray = 500.0, shave = 400.0, beard = 1100.0;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Nivea Men Black Body Spray(Rs. 500)";
		cout << "\n\n\nPress 2 for Gillette Mach 3 Shaving Form (Rs. 400) ";
		cout << "\n\n\nPress 3 for Dari Mooch Beard Growth Oil(Rs. 1100)";
		cout << "\n\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += bspray;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += shave;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += beard;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float  dental(void)
{
	system("cls");
	system("color 90");
	int choice;
	float brush = 171.0, paste = 245.0, wash = 320.0;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Colgate Pro-relief Toothbrush(Rs. 171)";
		cout << "\n\n\nPress 2 for Sensodyne Toothpaste(Rs. 245)";
		cout << "\n\n\nPress 3 for Listerine Mouthwash(Rs. 320)";
		cout << "\n\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += brush;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += paste;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += wash;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float  women(void)
{
	system("cls");
	system("color 90");
	int choice;
	float nail = 175.0, foundation = 420.0, mascara = 2387.6;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Medora Nail Enamel (Rs. 175)";
		cout << "\n\n\nPress 2 for CVB Skin Foundation Rs.(Rs. 420)";
		cout << "\n\n\nPress 3 for PinkFlash Waterproof Mascara (Rs.237)";
		cout << "\n\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += nail;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += foundation;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += mascara;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float nut(void)
{
	system("cls");
	system("color 70");
	int choice, bill = 0;
	cout << "\nEnter 1 for Dry Nuts";
	cout << "\n\nYour Choice: ";
	cin >> choice;
	if (choice == 1)
		bill += nuts();
	return bill ;
}

float nuts(void)
{
	system("cls");
	system("color 90");
	int choice;
	float almond = 2000.0, date = 310.0, wallnut = 2500.0;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Almond White (Rs. 2000/1Kg)";
		cout << "\n\n\nPress 2 for Ajwa Dates (Rs. 2000/Kg)";
		cout << "\n\n\nPress 3 for Wallnuts (Rs.2500/Kg)";
		cout << "\n\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += almond;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += date;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += wallnut;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float home(void)
{
	system("cls");
	system("color 70");
	int choice, bill = 0;
	cout << "\nEnter 1 for Laundry Items";
	cout << "\nEnter 2 for Cleaning Accessories";
	cout << "\nEnter 3 for Kitchen Items";
	cout << "\n\nYour Choice: ";
	cin >> choice;
	if (choice == 1)
		bill += laundry();
	else if (choice == 2)
		bill += clean();
	else if (choice == 3)
		bill += kitchen();
	return bill ;
}

float laundry(void)
{
	system("cls");
	system("color 90");
	int choice;
	float surf = 330, bar = 45, killer = 278;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Ariel Surf (Rs.330/1kg)";
		cout << "\n\n\nPress 2 for Floral Scent Bar (Rs.45/380g) ";
		cout << "\n\n\nPress 3 for Mortien Insect Killer Spray (Rs. 278/250ml)";
		cout << "\n\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += surf;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += bar;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += killer;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float clean(void)
{
	system("cls");
	system("color 90");
	int choice;
	float trash = 270, wiper = 250, broom = 190;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Trash Bags (Rs.110/80L)";
		cout << "\n\n\nPress 2 for Crown Fancy Wiper (Rs.250/1unit)";
		cout << "\n\n\nPress 3 for Broom(Rs.190/1unit)";
		cout << "\n\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += trash;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += wiper;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += broom;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float kitchen(void)
{
	system("cls");
	system("color 90");
	int choice;
	float scotch = 64, bar = 48, match = 40;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Scotch Brite(Rs. 64/1unit)";
		cout << "\n\n\nPress 2 for Lemon Max Dish Washing Bar(Rs48/1unit)";
		cout << "\n\n\nPress 3 for Kite Matchbox-->10<--(Rs.40/1unit)";
		cout << "\n\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += scotch;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += bar;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += match;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float baby(void)
{
	system("cls");
	system("color 70");
	int choice, bill = 0;
	cout << "\nEnter 1 for Baby Diapers";
	cout << "\nEnter 2 for Food and Milk";
	cout << "\nEnter 3 for Baby Bath Items";
	cout << "\n\nYour Choice: ";
	cin >> choice;
	if (choice == 1)
		bill += diaper();
	else if (choice == 2)
		bill += food();
	else if (choice == 3)
		bill += bath();
	return bill ;
}

float diaper(void)
{
	system("cls");
	int choice;
	float wipes = 340, diaper = 255;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Johnsons Baby Wipes(Rs. 340/1unit)";
		cout << "\n\n\nPress 2 for Pampers Diaper(Rs./7unit)";
		cout << "\n\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += wipes;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += diaper;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float food(void)
{
	system("cls");
	system("color 90");
	int choice;
	float nestle = 2560, nido = 1120, cerelac = 278;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Nestle Nangrow Optipro3 (Rs.2560/900g)";
		cout << "\n\n\nPress 2 for Nestle Nido Shield(Rs. 1120/800g)";
		cout << "\n\n\nPress 3 for Nestle Cerelac (Rs. 278/175g)";
		cout << "\n\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += nestle;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += nido;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += cerelac;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float bath(void)
{
	system("cls");
	system("color 90");
	int choice;
	float lotion = 360, powder = 450, shampoo = 738;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Johnsons Baby Lotion(RS360/200ml)";
		cout << "\n\n\nPress 2 for Johnsons Baby Powder(RS450/500g)";
		cout << "\n\n\nPress 3 for Johnsons Baby Shampoo(Rs.738/500ml)";
		cout << "\n\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += lotion;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += powder;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += shampoo;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float bakery(void)
{
	system("cls");
	system("color 70");
	int choice, bill = 0;
	cout << "\nEnter 1 for Milk Items";
	cout << "\nEnter 2 for Chesse & Butter";
	cout << "\nEnter 3 for Eggs";
	cout << "\n\nYour Choice: ";
	cin >> choice;
	if (choice == 1)
		bill += milk();
	else if (choice == 2)
		bill += butter();
	else if (choice == 3)
		bill += egg();
	return bill ;
}

float milk(void)
{
	system("cls");
	system("color 90");
	int choice;
	float olpers = 1099.0, nurpur = 217.0, everyday = 20.0;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Olpers 1 Liter carton(Rs. 1099/6packs)";
		cout << "\n\n\nPress 2 for Nupur milk(Rs. 217/1pack)";
		cout << "\n\n\nPress 3 for Nestle Everydays Liquid Tea Whitener(Rs20/sachet)";
		cout << "\n\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += olpers;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += nurpur;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += everyday;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float butter(void)
{
	system("cls");
	system("color 90");
	int choice;
	float Butter = 289.0, cheddar = 390.0, mozzarella = 430.0;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Nurpur Unsalted Butter(Rs.289/200g)";
		cout << "\n\n\nPress 2 for Nurpur Cheddar Cheese (Rs. 390/200g)";
		cout << "\n\n\nPress 3 for Adam's Single Mozezarella Cheese(slices) (Rs.430/200g)";
		cout << "\n\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += Butter;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += cheddar;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += mozzarella;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float egg(void)
{
	system("cls");
	system("color 90");
	int choice;
	float classic = 204.0, sb = 199.0, desi = 149.0;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Classic Eggs Farm Fresh(Rs.204/12pcs)";
		cout << "\n\n\nPress 2 for Sb Eggs Super (Rs. 199/12pcs)";
		cout << "\n\n\nPress 3 for Desi Kukkari Eggs(Rs. 149/6pcs)";
		cout << "\n\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += classic;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += sb;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += desi;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float drink(void)
{
	system("cls");
	system("color 70");
	int choice, bill = 0;
	cout << "\nEnter 1 for Tea";
	cout << "\nEnter 2 for Cold Drinks";
	cout << "\nEnter 3 for Juices";
	cout << "\n\nYour Choice: ";
	cin >> choice;
	if (choice == 1)
		bill += tea();
	else if (choice == 2)
		bill += cold();
	else if (choice == 3)
		bill += juices();
	return bill ;
}

float tea(void)
{
	system("cls");
	system("color 90");
	int choice;
	float lipton = 1045.0, green = 99, bags = 270;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Lipton Yellow Label Pouch(Rs.1045/950)";
		cout << "\n\n\nPress 2 for Tapal Green Tea (Rs.99/1unit)";
		cout << "\n\n\nPress 3 for Tapal Danedar Teabags(50pc) (Rs.270/1 unit*50pc)";
		cout << "\n\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += lipton;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += green;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += bags;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float cold(void)
{
	system("cls");
	system("color 90");
	int choice;
	float fanta = 45.0, coke = 60.0, sup = 34.0;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Fanta Orange Flavour(Rs.45/500ml) ";
		cout << "\n\n\nPress 2 for Coke Tin Can (Rs.60/330ml)";
		cout << "\n\n\nPress 3 for Seven up Diet (Rs.34/345ml)";
		cout << "\n\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += fanta;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += coke;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += sup;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}

float juices(void)
{
	system("cls");
	system("color 90");
	int choice;
	float nestle = 180, shezan = 20, cappy = 65;
	char j;
	for (int l = 0;l < 1;l++)
	{
		cout << "\n\n\nPress 1 for Nestle Fruta Vitals (Rs. 180/1L) ";
		cout << "\n\n\nPress 2 for Shezan Mango Juice(Rs.20/250ml)";
		cout << "\n\n\nPress 3 for Cappy Pulpy Orange Juice(Rs.65/350ml)";
		cout << "\n\n\nYour Choice: ";
		cin >> choice;

		for (int i = choice; i < 2;i++)
		{
			cart += nestle;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 3 && i>1;i++)
		{
			cart += shezan;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		for (int i = choice;i < 4 && i>2;i++)
		{
			cart += cappy;
			cout << "Added to cart! Press 'Y' to enter another one: ";
			cin >> j;
			if (j == 'y' || j == 'Y')
				i--;
			else
				continue;
		}
		char k;
		cout << "Bill=Rs. " << cart << endl;
		cout << "Press 'Y' to enter more items from this category: ";
		cin >> k;
		if (k == 'y' || k == 'Y')
			l--;
	}
	return 0;
}