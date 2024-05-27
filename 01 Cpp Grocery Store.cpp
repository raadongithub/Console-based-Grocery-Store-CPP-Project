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
    try
    {
        fstream file;
        file.open("delivery_data.txt", ios::app);
        if (!file)
        {
            throw runtime_error("Error opening file");
        }
        person p[1];
        cout << "Enter Your Mobile Phone Number: ";
        cin >> p[0].num;
        cout << "Enter Your Address: ";
        cin >> p[0].address;
        cout << "Enter Your First Name: ";
        cin >> p[0].name;

        file << "Location: " + p[0].address << endl;
        file << "Phone#: " << p[0].num << endl;
        file << "Name: " + p[0].name << endl;

        file.close();
    }
    catch (exception& e)
    {
        cerr << "Exception: " << e.what() << endl;
    }
}

int main()
{
    double rev = 196564.61;
    char cho, cho1;
    int category;

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    loading();
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\t\tC++ Store";
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    Sleep(1000);

    for (int mvp = 0; mvp < 1; mvp++)
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
        cout << "\n\n\n\nPress 8 For Bakery Dairy ";
        cout << "\n\n\n\nPress 9 For Beverages ";
        cout << "\n\nYour Choice: ";
        cin >> category;

        if (cin.fail())
        {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Invalid input, please enter a number between 0 and 9." << endl;
            mvp--;
            continue;
        }

        switch (category)
        {
        case 0: cart += instant(); break;
        case 1: cart += meat(); break;
        case 2: cart += fish(); break;
        case 3: cart += grocery(); break;
        case 4: cart += personal(); break;
        case 5: cart += nut(); break;
        case 6: cart += home(); break;
        case 7: cart += baby(); break;
        case 8: cart += bakery(); break;
        case 9: cart += drink(); break;
        default:
            cout << "Invalid choice, please try again." << endl;
            mvp--;
            continue;
        }

        cout << "\n\n\nYour Total Bill = Rs. " << cart;
        rev += cart;
        cout << "\n\nPress 'Y' To Add More Items From Categories: ";
        cin >> cho;
        if (cho == 'y' || cho == 'Y')
            mvp--;
    }

    system("cls");
    cout << "\t\t\t\t\t\t\t\t\t\t\tDelivery Information \n\n\n";
    for (int i = 0; i < 1; i++)
    {
        add_to_file();
        cout << "Press 'y' To Continue  \nPress 'n' To Re-enter Information : ";
        cin >> cho;
        if (cho == 'n' || cho == 'N')
            i--;
        system("cls");
    }
    cout << "Your Total Bill: " << cart << endl;
    cout << "You will receive your order at your doorstep in 30 minutes";
    _getch();
    return 0;
}

//loading screen 
void loading() {
    char x = 219;
    cout << endl << endl << endl << endl << endl;
    cout << "\t\t\t\t\t\t\t\t\tL O A D I N G " << endl;
    cout << "\t\t\t\t\t";

    int bar_size = 69;
    for (int i = 0; i < bar_size; i++) {
        cout << x << setw(0);
        int loading_time = 20;
        Sleep(loading_time);
    }
    cout << endl << endl << endl << endl;
}

// Menu functions
float instant() {
    system("cls");
    system("color 70");
    int choice;
    float bill = 0;
    cout << "\nEnter 1 for Noodles";
    cout << "\nEnter 2 for Pasta";
    cout << "\nEnter 3 for Chips";
    cout << "\n\nYour Choice: ";
    cin >> choice;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Invalid input. Returning to main menu." << endl;
        return 0;
    }
    if (choice == 1) bill += noodles();
    else if (choice == 2) bill += pasta();
    else if (choice == 3) bill += chips();
    return bill;
}

float noodles() {
    system("cls");
    system("color 90");
    float cart1 = 0;
    int choice;
    float kolson = 40.0, knorr = 41.0, samyang = 270.0;
    char j;
    for (int l = 0; l < 1; l++) {
        cout << "\n\n\nPress 1 for Kolson Noodles (Rs40) ";
        cout << "\n\n\nPress 2 for Knorr Noodles (Rs 41)";
        cout << "\n\n\nPress 3 for Samyang (Rs 270)";
        cout << "\n\nYour Choice: ";
        cin >> choice;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Invalid input. Returning to main menu." << endl;
            return 0;
        }
        if (choice == 1) cart1 += kolson;
        else if (choice == 2) cart1 += knorr;
        else if (choice == 3) cart1 += samyang;
        cout << "Added to cart! Press 'Y' to enter another one: ";
        cin >> j;
        if (j == 'y' || j == 'Y') l--;
    }
    return cart1;
}

float pasta() {
    system("cls");
    system("color 90");
    int choice;
    float vermicelli = 32.0, elbow = 124.0, spaghetti = 135.0;
    char j;
    for (int l = 0; l < 1; l++) {
        cout << "\n\n\nPress 1 for National Vermicelli (Rs 32)";
        cout << "\n\n\nPress 2 for Kolson Large Elbow (Rs 124)";
        cout << "\n\n\nPress 3 for Kolson Spaghetti (Rs 135)";
        cout << "\n\nYour Choice: ";
        cin >> choice;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Invalid input. Returning to main menu." << endl;
            return 0;
        }
        if (choice == 1) cart += vermicelli;
        else if (choice == 2) cart += elbow;
        else if (choice == 3) cart += spaghetti;
        cout << "Added to cart! Press 'Y' to enter another one: ";
        cin >> j;
        if (j == 'y' || j == 'Y') l--;
    }
    return cart;
}

float chips() {
    system("cls");
    system("color 90");
    int choice;
    float lays = 50.0, pringles = 300.0, lites = 20.0;
    char j;
    for (int l = 0; l < 1; l++) {
        cout << "\n\n\nPress 1 for Lays Masala  (Rs 50)";
        cout << "\n\n\nPress 2 for Pringles (Rs 300)";
        cout << "\n\n\nPress 3 for Lites(Rs 20)";
        cout << "\n\nYour Choice: ";
        cin >> choice;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Invalid input. Returning to main menu." << endl;
            return 0;
        }
        if (choice == 1) cart += lays;
        else if (choice == 2) cart += pringles;
        else if (choice == 3) cart += lites;
        cout << "Added to cart! Press 'Y' to enter another one: ";
        cin >> j;
        if (j == 'y' || j == 'Y') l--;
    }
    return cart;
}

float meat() {
    system("cls");
    system("color 70");
    int choice;
    float bill = 0;
    cout << "\nEnter 1 for Chicken";
    cout << "\nEnter 2 for Mutton";
    cout << "\nEnter 3 for Beef";
    cout << "\n\nYour Choice: ";
    cin >> choice;
    if (cin.fail()) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cout << "Invalid input. Returning to main menu." << endl;
        return 0;
    }
    if (choice == 1) bill += chicken();
    else if (choice == 2) bill += mutton();
    else if (choice == 3) bill += beef();
    return bill;
}

float chicken() {
    system("cls");
    system("color 90");
    int choice;
    float mince = 530.0, karahi = 360.0, boneless = 520.0;
    char j;
    for (int l = 0; l < 1; l++) {
        cout << "\n\n\nPress 1 for Chicken Mince (Rs.530/Kg)";
        cout << "\n\n\nPress 2 for Karahi Cut (Rs 360/Kg)";
        cout << "\n\n\nPress 3 for Boneless(Rs 520/kg)";
        cout << "\n\nYour Choice: ";
        cin >> choice;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Invalid input. Returning to main menu." << endl;
            return 0;
        }
        if (choice == 1) cart += mince;
        else if (choice == 2) cart += karahi;
        else if (choice == 3) cart += boneless;
        cout << "Added to cart! Press 'Y' to enter another one: ";
        cin >> j;
        if (j == 'y' || j == 'Y') l--;
    }
    return 0;
}

float mutton() {
    system("cls");
    system("color 90");
    int choice;
    float mince = 1500.0, shoulder = 1500.0, boneless = 2100.0;
    char j;
    for (int l = 0; l < 1; l++) {
        cout << "\n\n\nPress 1 for Mutton Mince (Rs.1500/Kg)";
        cout << "\n\n\nPress 2 for Shoulder/Dusti (Rs 1500/Kg)";
        cout << "\n\n\nPress 3 for Boneless(Rs 2100/Kg)";
        cout << "\n\nYour Choice: ";
        cin >> choice;
        if (cin.fail()) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cout << "Invalid input. Returning to main menu." << endl;
            return 0;
        }
        if (choice == 1) cart += mince;
        else if (choice == 2) cart += shoulder;
        else if (choice == 3) cart += boneless;
        cout << "Added to cart! Press 'Y' to enter another one: ";
        cin >> j;
        if (j == 'y' || j == 'Y') l--;
    }
    return 0;
}
float beef() {
    system("cls");
    system("color 90");
    int choice;
    float mince = 1000.0, shoulder = 1500.0, boneless = 1700.0;
    char j;
    for (int l = 0; l < 1; l++) {
        try {
            cout << "\n\n\nPress 1 for Beef Mince (Rs.1000/Kg)";
            cout << "\n\n\nPress 2 for Shoulder/Dusti (Rs 1500/Kg)";
            cout << "\n\n\nPress 3 for Boneless(Rs 1700/Kg)";
            cout << "\n\nYour Choice: ";
            cin >> choice;
            if (cin.fail()) {
                throw runtime_error("Invalid input.");
            }
            if (choice == 1) cart += mince;
            else if (choice == 2) cart += shoulder;
            else if (choice == 3) cart += boneless;
            else {
                throw runtime_error("Invalid choice, please select between 1 and 3.");
            }
            cout << "Added to cart! Press 'Y' to enter another one: ";
            cin >> j;
            if (j == 'y' || j == 'Y') l--;
        }
        catch (const exception& e) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cerr << "Exception: " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}

float fish() {
    system("cls");
    system("color 70");
    int choice;
    float bill = 0;
    cout << "\nEnter 1 for Boneless Fish";
    cout << "\nEnter 2 for Fish Cuts";
    cout << "\nEnter 3 for Crustaceans";
    cout << "\n\nYour Choice: ";
    cin >> choice;
    try {
        if (cin.fail()) {
            throw runtime_error("Invalid input.");
        }
        if (choice == 1) bill += bnlfish();
        else if (choice == 2) bill += fcuts();
        else if (choice == 3) bill += crustaceans();
        else {
            throw runtime_error("Invalid choice, please select between 1 and 3.");
        }
    }
    catch (const exception& e) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cerr << "Exception: " << e.what() << endl;
        return 0;
    }
    return bill;
}

float bnlfish() {
    system("cls");
    system("color 90");
    int choice;
    float tilapia = 1100.0, rahu = 1500.0;
    char j;
    for (int l = 0; l < 1; l++) {
        try {
            cout << "\n\n\nPress 1 for Tilapia Fish Fillets (Rs.1100/Kg)";
            cout << "\n\n\nPress 2 for Rahu Fish (Rs 1500/Kg)";
            cout << "\n\nYour Choice: ";
            cin >> choice;
            if (cin.fail()) {
                throw runtime_error("Invalid input.");
            }
            if (choice == 1) cart += tilapia;
            else if (choice == 2) cart += rahu;
            else {
                throw runtime_error("Invalid choice, please select between 1 and 2.");
            }
            cout << "Added to cart! Press 'Y' to enter another one: ";
            cin >> j;
            if (j == 'y' || j == 'Y') l--;
        }
        catch (const exception& e) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cerr << "Exception: " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}
float fcuts() {
    system("cls");
    system("color 90");
    int choice;
    float tuna = 1700.0, surmai = 2200.0;
    char j;
    for (int l = 0; l < 1; l++) {
        try {
            cout << "\n\n\nPress 1 for Tuna Fish (Rs.1700/Kg)";
            cout << "\n\n\nPress 2 for Surmai Fish (Rs 2200/Kg)";
            cout << "\n\nYour Choice: ";
            cin >> choice;
            if (cin.fail()) {
                throw runtime_error("Invalid input.");
            }
            if (choice == 1) cart += tuna;
            else if (choice == 2) cart += surmai;
            else {
                throw runtime_error("Invalid choice, please select between 1 and 2.");
            }
            cout << "Added to cart! Press 'Y' to enter another one: ";
            cin >> j;
            if (j == 'y' || j == 'Y') l--;
        }
        catch (const exception& e) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cerr << "Exception: " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}

float grocery() {
    system("cls");
    system("color 70");
    int choice;
    float bill = 0;
    cout << "\nEnter 1 for Spices";
    cout << "\nEnter 2 for Baking Desserts";
    cout << "\nEnter 3 for Spreads";
    cout << "\n\nYour Choice: ";
    cin >> choice;
    try {
        if (cin.fail()) {
            throw runtime_error("Invalid input.");
        }
        if (choice == 1) bill += spices();
        else if (choice == 2) bill += baking();
        else if (choice == 3) bill += spread();
        else {
            throw runtime_error("Invalid choice, please select between 1 and 3.");
        }
    }
    catch (const exception& e) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cerr << "Exception: " << e.what() << endl;
        return 0;
    }
    return bill;
}
float crustaceans() {
    system("cls");
    system("color 90");
    int choice;
    float tilapia = 1000.0, prawn = 3000.0, crab = 1700.0;
    char j;
    for (int l = 0; l < 1; l++) {
        try {
            cout << "\n\n\nPress 1 for Tilapia (Rs.1000/Kg)";
            cout << "\n\n\nPress 2 for Tiger Jumbo Prawn (Rs 3000/Kg)";
            cout << "\n\n\nPress 3 for Mud Crab (Rs 1700/Kg)";
            cout << "\n\n\nYour Choice: ";
            cin >> choice;
            if (cin.fail()) {
                throw runtime_error("Invalid input.");
            }
            if (choice == 1) cart += tilapia;
            else if (choice == 2) cart += prawn;
            else if (choice == 3) cart += crab;
            else {
                throw runtime_error("Invalid choice, please select between 1 and 3.");
            }
            cout << "Added to cart! Press 'Y' to enter another one: ";
            cin >> j;
            if (j == 'y' || j == 'Y') l--;
        }
        catch (const exception& e) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cerr << "Exception: " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}

float grocery() {
    system("cls");
    system("color 70");
    int choice;
    float bill = 0;
    cout << "\nEnter 1 for Spices";
    cout << "\nEnter 2 for Baking Desserts";
    cout << "\nEnter 3 for Spreads";
    cout << "\n\nYour Choice: ";
    cin >> choice;
    try {
        if (cin.fail()) {
            throw runtime_error("Invalid input.");
        }
        if (choice == 1) bill += spices();
        else if (choice == 2) bill += baking();
        else if (choice == 3) bill += spread();
        else {
            throw runtime_error("Invalid choice, please select between 1 and 3.");
        }
    }
    catch (const exception& e) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cerr << "Exception: " << e.what() << endl;
        return 0;
    }
    return bill;
}

float spices() {
    system("cls");
    system("color 90");
    int choice;
    float chilli = 137.0, salt = 55.0, sugar = 110.0, vinegar = 120.0;
    char j;
    for (int l = 0; l < 1; l++) {
        try {
            cout << "\n\n\nPress 1 for Red Chilli Powder(Rs. 137/200g)";
            cout << "\n\n\nPress 2 for National Iodized Pink Salt (Rs 55)";
            cout << "\n\n\nPress 3 for Sugar (Rs 110/Kg)";
            cout << "\n\n\nPress 4 for Vinegar (Rs. 120/800ml)";
            cout << "\n\n\nYour Choice: ";
            cin >> choice;
            if (cin.fail()) {
                throw runtime_error("Invalid input.");
            }
            if (choice == 1) cart += chilli;
            else if (choice == 2) cart += salt;
            else if (choice == 3) cart += sugar;
            else if (choice == 4) cart += vinegar;
            else {
                throw runtime_error("Invalid choice, please select between 1 and 4.");
            }
            cout << "Added to cart! Press 'Y' to enter another one: ";
            cin >> j;
            if (j == 'y' || j == 'Y') l--;
        }
        catch (const exception& e) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cerr << "Exception: " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}

float baking() {
    system("cls");
    system("color 90");
    int choice;
    float kheer = 100.0, icream = 100.0, custard = 100.0, jelly = 80.0;
    char j;
    for (int l = 0; l < 1; l++) {
        try {
            cout << "\n\n\nPress 1 for National Kheer mix (Rs. 100/100g)";
            cout << "\n\n\nPress 2 for National Ice Cream Powder (Rs 100/100g)";
            cout << "\n\n\nPress 3 for Rafhan Custard Powder (Rs 100/130g)";
            cout << "\n\n\nPress 4 for Shan Jelly mix (Rs. 80/60g)";
            cout << "\n\n\nYour Choice: ";
            cin >> choice;
            if (cin.fail()) {
                throw runtime_error("Invalid input.");
            }
            if (choice == 1) cart += kheer;
            else if (choice == 2) cart += icream;
            else if (choice == 3) cart += custard;
            else if (choice == 4) cart += jelly;
            else {
                throw runtime_error("Invalid choice, please select between 1 and 4.");
            }
            cout << "Added to cart! Press 'Y' to enter another one: ";
            cin >> j;
            if (j == 'y' || j == 'Y') l--;
        }
        catch (const exception& e) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cerr << "Exception: " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}

float spread() {
    system("cls");
    system("color 90");
    int choice;
    float jam = 100.0, honey = 193.0, Spread = 380.0;
    char j;
    for (int l = 0; l < 1; l++) {
        try {
            cout << "\n\n\nPress 1 for Mitchell's Orange Marmalade Jam (Rs. 100/100g)";
            cout << "\n\n\nPress 2 for Marhaba Herbal Honey (Rs 193)";
            cout << "\n\n\nPress 3 for Chicken Mayonnaise Spread (Rs 380/500g)";
            cout << "\n\n\nYour Choice: ";
            cin >> choice;
            if (cin.fail()) {
                throw runtime_error("Invalid input.");
            }
            if (choice == 1) cart += jam;
            else if (choice == 2) cart += honey;
            else if (choice == 3) cart += Spread;
            else {
                throw runtime_error("Invalid choice, please select between 1 and 3.");
            }
            cout << "Added to cart! Press 'Y' to enter another one: ";
            cin >> j;
            if (j == 'y' || j == 'Y') l--;
        }
        catch (const exception& e) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cerr << "Exception: " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}

float personal() {
    system("cls");
    system("color 70");
    int choice;
    float bill = 0;
    cout << "\nEnter 1 for Men Care";
    cout << "\nEnter 2 for Dental Care";
    cout << "\nEnter 3 for Women Care";
    cout << "\n\nYour Choice: ";
    cin >> choice;
    try {
        if (cin.fail()) {
            throw runtime_error("Invalid input.");
        }
        if (choice == 1) bill += men();
        else if (choice == 2) bill += dental();
        else if (choice == 3) bill += women();
        else {
            throw runtime_error("Invalid choice, please select between 1 and 3.");
        }
    }
    catch (const exception& e) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cerr << "Exception: " << e.what() << endl;
        return 0;
    }
    return bill;
}

float men() {
    system("cls");
    system("color 90");
    int choice;
    float bspray = 500.0, shave = 400.0, beard = 1100.0;
    char j;
    for (int l = 0; l < 1; l++) {
        try {
            cout << "\n\n\nPress 1 for Nivea Men Black Body Spray(Rs. 500)";
            cout << "\n\n\nPress 2 for Gillette Mach 3 Shaving Form (Rs. 400)";
            cout << "\n\n\nPress 3 for Dari Mooch Beard Growth Oil (Rs. 1100)";
            cout << "\n\n\nYour Choice: ";
            cin >> choice;
            if (cin.fail()) {
                throw runtime_error("Invalid input.");
            }
            if (choice == 1) cart += bspray;
            else if (choice == 2) cart += shave;
            else if (choice == 3) cart += beard;
            else {
                throw runtime_error("Invalid choice, please select between 1 and 3.");
            }
            cout << "Added to cart! Press 'Y' to enter another one: ";
            cin >> j;
            if (j == 'y' || j == 'Y') l--;
        }
        catch (const exception& e) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cerr << "Exception: " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}

float dental() {
    system("cls");
    system("color 90");
    int choice;
    float brush = 171.0, paste = 245.0, wash = 320.0;
    char j;
    for (int l = 0; l < 1; l++) {
        try {
            cout << "\n\n\nPress 1 for Colgate Pro-relief Toothbrush (Rs. 171)";
            cout << "\n\n\nPress 2 for Sensodyne Toothpaste (Rs. 245)";
            cout << "\n\n\nPress 3 for Listerine Mouthwash (Rs. 320)";
            cout << "\n\n\nYour Choice: ";
            cin >> choice;
            if (cin.fail()) {
                throw runtime_error("Invalid input.");
            }
            if (choice == 1) cart += brush;
            else if (choice == 2) cart += paste;
            else if (choice == 3) cart += wash;
            else {
                throw runtime_error("Invalid choice, please select between 1 and 3.");
            }
            cout << "Added to cart! Press 'Y' to enter another one: ";
            cin >> j;
            if (j == 'y' || j == 'Y') l--;
        }
        catch (const exception& e) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cerr << "Exception: " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}

float women() {
    system("cls");
    system("color 90");
    int choice;
    float nail = 175.0, foundation = 420.0, mascara = 238.0;
    char j;
    for (int l = 0; l < 1; l++) {
        try {
            cout << "\n\n\nPress 1 for Medora Nail Enamel (Rs. 175)";
            cout << "\n\n\nPress 2 for CVB Skin Foundation (Rs. 420)";
            cout << "\n\n\nPress 3 for PinkFlash Waterproof Mascara (Rs. 238)";
            cout << "\n\n\nYour Choice: ";
            cin >> choice;
            if (cin.fail()) {
                throw runtime_error("Invalid input.");
            }
            if (choice == 1) cart += nail;
            else if (choice == 2) cart += foundation;
            else if (choice == 3) cart += mascara;
            else {
                throw runtime_error("Invalid choice, please select between 1 and 3.");
            }
            cout << "Added to cart! Press 'Y' to enter another one: ";
            cin >> j;
            if (j == 'y' || j == 'Y') l--;
        }
        catch (const exception& e) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cerr << "Exception: " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}

float nut() {
    system("cls");
    system("color 70");
    int choice;
    float bill = 0;
    cout << "\nEnter 1 for Dry Nuts";
    cout << "\n\nYour Choice: ";
    cin >> choice;
    try {
        if (cin.fail()) {
            throw runtime_error("Invalid input.");
        }
        if (choice == 1) bill += nuts();
        else {
            throw runtime_error("Invalid choice, please select 1.");
        }
    }
    catch (const exception& e) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cerr << "Exception: " << e.what() << endl;
        return 0;
    }
    return bill;
}

float nuts() {
    system("cls");
    system("color 90");
    int choice;
    float almond = 2000.0, date = 310.0, walnut = 2500.0;
    char j;
    for (int l = 0; l < 1; l++) {
        try {
            cout << "\n\n\nPress 1 for Almond White (Rs. 2000/Kg)";
            cout << "\n\n\nPress 2 for Ajwa Dates (Rs. 310/Kg)";
            cout << "\n\n\nPress 3 for Walnuts (Rs. 2500/Kg)";
            cout << "\n\n\nYour Choice: ";
            cin >> choice;
            if (cin.fail()) {
                throw runtime_error("Invalid input.");
            }
            if (choice == 1) cart += almond;
            else if (choice == 2) cart += date;
            else if (choice == 3) cart += walnut;
            else {
                throw runtime_error("Invalid choice, please select between 1 and 3.");
            }
            cout << "Added to cart! Press 'Y' to enter another one: ";
            cin >> j;
            if (j == 'y' || j == 'Y') l--;
        }
        catch (const exception& e) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cerr << "Exception: " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}

float home() {
    system("cls");
    system("color 70");
    int choice;
    float bill = 0;
    cout << "\nEnter 1 for Laundry Items";
    cout << "\nEnter 2 for Cleaning Accessories";
    cout << "\nEnter 3 for Kitchen Items";
    cout << "\n\nYour Choice: ";
    cin >> choice;
    try {
        if (cin.fail()) {
            throw runtime_error("Invalid input.");
        }
        if (choice == 1) bill += laundry();
        else if (choice == 2) bill += clean();
        else if (choice == 3) bill += kitchen();
        else {
            throw runtime_error("Invalid choice, please select between 1 and 3.");
        }
    }
    catch (const exception& e) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cerr << "Exception: " << e.what() << endl;
        return 0;
    }
    return bill;
}

float laundry() {
    system("cls");
    system("color 90");
    int choice;
    float surf = 330.0, bar = 45.0, killer = 278.0;
    char j;
    for (int l = 0; l < 1; l++) {
        try {
            cout << "\n\n\nPress 1 for Ariel Surf (Rs.330/Kg)";
            cout << "\n\n\nPress 2 for Floral Scent Bar (Rs.45/380g)";
            cout << "\n\n\nPress 3 for Mortein Insect Killer Spray (Rs. 278/250ml)";
            cout << "\n\n\nYour Choice: ";
            cin >> choice;
            if (cin.fail()) {
                throw runtime_error("Invalid input.");
            }
            if (choice == 1) cart += surf;
            else if (choice == 2) cart += bar;
            else if (choice == 3) cart += killer;
            else {
                throw runtime_error("Invalid choice, please select between 1 and 3.");
            }
            cout << "Added to cart! Press 'Y' to enter another one: ";
            cin >> j;
            if (j == 'y' || j == 'Y') l--;
        }
        catch (const exception& e) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cerr << "Exception: " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}

float clean() {
    system("cls");
    system("color 90");
    int choice;
    float trash = 270.0, wiper = 250.0, broom = 190.0;
    char j;
    for (int l = 0; l < 1; l++) {
        try {
            cout << "\n\n\nPress 1 for Trash Bags (Rs.270/80L)";
            cout << "\n\n\nPress 2 for Crown Fancy Wiper (Rs.250/1unit)";
            cout << "\n\n\nPress 3 for Broom (Rs.190/1unit)";
            cout << "\n\n\nYour Choice: ";
            cin >> choice;
            if (cin.fail()) {
                throw runtime_error("Invalid input.");
            }
            if (choice == 1) cart += trash;
            else if (choice == 2) cart += wiper;
            else if (choice == 3) cart += broom;
            else {
                throw runtime_error("Invalid choice, please select between 1 and 3.");
            }
            cout << "Added to cart! Press 'Y' to enter another one: ";
            cin >> j;
            if (j == 'y' || j == 'Y') l--;
        }
        catch (const exception& e) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cerr << "Exception: " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}

float kitchen() {
    system("cls");
    system("color 90");
    int choice;
    float scotch = 64.0, bar = 48.0, match = 40.0;
    char j;
    for (int l = 0; l < 1; l++) {
        try {
            cout << "\n\n\nPress 1 for Scotch Brite (Rs. 64/1unit)";
            cout << "\n\n\nPress 2 for Lemon Max Dish Washing Bar (Rs 48/1unit)";
            cout << "\n\n\nPress 3 for Kite Matchbox (Rs.40/10 units)";
            cout << "\n\n\nYour Choice: ";
            cin >> choice;
            if (cin.fail()) {
                throw runtime_error("Invalid input.");
            }
            if (choice == 1) cart += scotch;
            else if (choice == 2) cart += bar;
            else if (choice == 3) cart += match;
            else {
                throw runtime_error("Invalid choice, please select between 1 and 3.");
            }
            cout << "Added to cart! Press 'Y' to enter another one: ";
            cin >> j;
            if (j == 'y' || j == 'Y') l--;
        }
        catch (const exception& e) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cerr << "Exception: " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}

float baby() {
    system("cls");
    system("color 70");
    int choice;
    float bill = 0;
    cout << "\nEnter 1 for Baby Diapers";
    cout << "\nEnter 2 for Food and Milk";
    cout << "\nEnter 3 for Baby Bath Items";
    cout << "\n\nYour Choice: ";
    cin >> choice;
    try {
        if (cin.fail()) {
            throw runtime_error("Invalid input.");
        }
        if (choice == 1) bill += diaper();
        else if (choice == 2) bill += food();
        else if (choice == 3) bill += bath();
        else {
            throw runtime_error("Invalid choice, please select between 1 and 3.");
        }
    }
    catch (const exception& e) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cerr << "Exception: " << e.what() << endl;
        return 0;
    }
    return bill;
}

float diaper() {
    system("cls");
    system("color 90");
    int choice;
    float wipes = 340.0, diaper = 255.0;
    char j;
    for (int l = 0; l < 1; l++) {
        try {
            cout << "\n\n\nPress 1 for Johnson's Baby Wipes (Rs. 340/1unit)";
            cout << "\n\n\nPress 2 for Pampers Diaper (Rs. 255/7 units)";
            cout << "\n\n\nYour Choice: ";
            cin >> choice;
            if (cin.fail()) {
                throw runtime_error("Invalid input.");
            }
            if (choice == 1) cart += wipes;
            else if (choice == 2) cart += diaper;
            else {
                throw runtime_error("Invalid choice, please select between 1 and 2.");
            }
            cout << "Added to cart! Press 'Y' to enter another one: ";
            cin >> j;
            if (j == 'y' || j == 'Y') l--;
        }
        catch (const exception& e) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cerr << "Exception: " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}

float food() {
    system("cls");
    system("color 90");
    int choice;
    float nestle = 2560.0, nido = 1120.0, cerelac = 278.0;
    char j;
    for (int l = 0; l < 1; l++) {
        try {
            cout << "\n\n\nPress 1 for Nestle Nangrow Optipro3 (Rs. 2560/900g)";
            cout << "\n\n\nPress 2 for Nestle Nido Shield (Rs. 1120/800g)";
            cout << "\n\n\nPress 3 for Nestle Cerelac (Rs. 278/175g)";
            cout << "\n\n\nYour Choice: ";
            cin >> choice;
            if (cin.fail()) {
                throw runtime_error("Invalid input.");
            }
            if (choice == 1) cart += nestle;
            else if (choice == 2) cart += nido;
            else if (choice == 3) cart += cerelac;
            else {
                throw runtime_error("Invalid choice, please select between 1 and 3.");
            }
            cout << "Added to cart! Press 'Y' to enter another one: ";
            cin >> j;
            if (j == 'y' || j == 'Y') l--;
        }
        catch (const exception& e) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cerr << "Exception: " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}

float bath() {
    system("cls");
    system("color 90");
    int choice;
    float lotion = 360.0, powder = 450.0, shampoo = 738.0;
    char j;
    for (int l = 0; l < 1; l++) {
        try {
            cout << "\n\n\nPress 1 for Johnson's Baby Lotion (Rs. 360/200ml)";
            cout << "\n\n\nPress 2 for Johnson's Baby Powder (Rs. 450/500g)";
            cout << "\n\n\nPress 3 for Johnson's Baby Shampoo (Rs. 738/500ml)";
            cout << "\n\n\nYour Choice: ";
            cin >> choice;
            if (cin.fail()) {
                throw runtime_error("Invalid input.");
            }
            if (choice == 1) cart += lotion;
            else if (choice == 2) cart += powder;
            else if (choice == 3) cart += shampoo;
            else {
                throw runtime_error("Invalid choice, please select between 1 and 3.");
            }
            cout << "Added to cart! Press 'Y' to enter another one: ";
            cin >> j;
            if (j == 'y' || j == 'Y') l--;
        }
        catch (const exception& e) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cerr << "Exception: " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}

float bakery() {
    system("cls");
    system("color 70");
    int choice;
    float bill = 0;
    cout << "\nEnter 1 for Milk Items";
    cout << "\nEnter 2 for Cheese & Butter";
    cout << "\nEnter 3 for Eggs";
    cout << "\n\nYour Choice: ";
    cin >> choice;
    try {
        if (cin.fail()) {
            throw runtime_error("Invalid input.");
        }
        if (choice == 1) bill += milk();
        else if (choice == 2) bill += butter();
        else if (choice == 3) bill += egg();
        else {
            throw runtime_error("Invalid choice, please select between 1 and 3.");
        }
    }
    catch (const exception& e) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cerr << "Exception: " << e.what() << endl;
        return 0;
    }
    return bill;
}

float milk() {
    system("cls");
    system("color 90");
    int choice;
    float olpers = 1099.0, nurpur = 217.0, everyday = 20.0;
    char j;
    for (int l = 0; l < 1; l++) {
        try {
            cout << "\n\n\nPress 1 for Olpers 1 Liter carton (Rs. 1099/6packs)";
            cout << "\n\n\nPress 2 for Nupur milk (Rs. 217/1pack)";
            cout << "\n\n\nPress 3 for Nestle Everydays Liquid Tea Whitener (Rs. 20/sachet)";
            cout << "\n\n\nYour Choice: ";
            cin >> choice;
            if (cin.fail()) {
                throw runtime_error("Invalid input.");
            }
            if (choice == 1) cart += olpers;
            else if (choice == 2) cart += nurpur;
            else if (choice == 3) cart += everyday;
            else {
                throw runtime_error("Invalid choice, please select between 1 and 3.");
            }
            cout << "Added to cart! Press 'Y' to enter another one: ";
            cin >> j;
            if (j == 'y' || j == 'Y') l--;
        }
        catch (const exception& e) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cerr << "Exception: " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}

float butter() {
    system("cls");
    system("color 90");
    int choice;
    float butter = 289.0, cheddar = 390.0, mozzarella = 430.0;
    char j;
    for (int l = 0; l < 1; l++) {
        try {
            cout << "\n\n\nPress 1 for Nurpur Unsalted Butter (Rs. 289/200g)";
            cout << "\n\n\nPress 2 for Nurpur Cheddar Cheese (Rs. 390/200g)";
            cout << "\n\n\nPress 3 for Adam's Single Mozzarella Cheese slices (Rs. 430/200g)";
            cout << "\n\n\nYour Choice: ";
            cin >> choice;
            if (cin.fail()) {
                throw runtime_error("Invalid input.");
            }
            if (choice == 1) cart += butter;
            else if (choice == 2) cart += cheddar;
            else if (choice == 3) cart += mozzarella;
            else {
                throw runtime_error("Invalid choice, please select between 1 and 3.");
            }
            cout << "Added to cart! Press 'Y' to enter another one: ";
            cin >> j;
            if (j == 'y' || j == 'Y') l--;
        }
        catch (const exception& e) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cerr << "Exception: " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}

float egg() {
    system("cls");
    system("color 90");
    int choice;
    float classic = 204.0, sb = 199.0, desi = 149.0;
    char j;
    for (int l = 0; l < 1; l++) {
        try {
            cout << "\n\n\nPress 1 for Classic Eggs Farm Fresh (Rs. 204/12pcs)";
            cout << "\n\n\nPress 2 for Sb Eggs Super (Rs. 199/12pcs)";
            cout << "\n\n\nPress 3 for Desi Kukkari Eggs (Rs. 149/6pcs)";
            cout << "\n\n\nYour Choice: ";
            cin >> choice;
            if (cin.fail()) {
                throw runtime_error("Invalid input.");
            }
            if (choice == 1) cart += classic;
            else if (choice == 2) cart += sb;
            else if (choice == 3) cart += desi;
            else {
                throw runtime_error("Invalid choice, please select between 1 and 3.");
            }
            cout << "Added to cart! Press 'Y' to enter another one: ";
            cin >> j;
            if (j == 'y' || j == 'Y') l--;
        }
        catch (const exception& e) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cerr << "Exception: " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}
float drink() {
    system("cls");
    system("color 70");
    int choice;
    float bill = 0;
    cout << "\nEnter 1 for Tea";
    cout << "\nEnter 2 for Cold Drinks";
    cout << "\nEnter 3 for Juices";
    cout << "\n\nYour Choice: ";
    cin >> choice;
    try {
        if (cin.fail()) {
            throw runtime_error("Invalid input.");
        }
        if (choice == 1) bill += tea();
        else if (choice == 2) bill += cold();
        else if (choice == 3) bill += juices();
        else {
            throw runtime_error("Invalid choice, please select between 1 and 3.");
        }
    }
    catch (const exception& e) {
        cin.clear();
        cin.ignore(INT_MAX, '\n');
        cerr << "Exception: " << e.what() << endl;
        return 0;
    }
    return bill;
}

float tea() {
    system("cls");
    system("color 90");
    int choice;
    float lipton = 1045.0, green = 99.0, bags = 270.0;
    char j;
    for (int l = 0; l < 1; l++) {
        try {
            cout << "\n\n\nPress 1 for Lipton Yellow Label Pouch (Rs. 1045/950g)";
            cout << "\n\n\nPress 2 for Tapal Green Tea (Rs. 99/1unit)";
            cout << "\n\n\nPress 3 for Tapal Danedar Teabags (50pc) (Rs. 270/1 unit*50pc)";
            cout << "\n\n\nYour Choice: ";
            cin >> choice;
            if (cin.fail()) {
                throw runtime_error("Invalid input.");
            }
            if (choice == 1) cart += lipton;
            else if (choice == 2) cart += green;
            else if (choice == 3) cart += bags;
            else {
                throw runtime_error("Invalid choice, please select between 1 and 3.");
            }
            cout << "Added to cart! Press 'Y' to enter another one: ";
            cin >> j;
            if (j == 'y' || j == 'Y') l--;
        }
        catch (const exception& e) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cerr << "Exception: " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}

float cold() {
    system("cls");
    system("color 90");
    int choice;
    float fanta = 45.0, coke = 60.0, sup = 34.0;
    char j;
    for (int l = 0; l < 1; l++) {
        try {
            cout << "\n\n\nPress 1 for Fanta Orange Flavour (Rs. 45/500ml)";
            cout << "\n\n\nPress 2 for Coke Tin Can (Rs. 60/330ml)";
            cout << "\n\n\nPress 3 for Seven up Diet (Rs. 34/345ml)";
            cout << "\n\n\nYour Choice: ";
            cin >> choice;
            if (cin.fail()) {
                throw runtime_error("Invalid input.");
            }
            if (choice == 1) cart += fanta;
            else if (choice == 2) cart += coke;
            else if (choice == 3) cart += sup;
            else {
                throw runtime_error("Invalid choice, please select between 1 and 3.");
            }
            cout << "Added to cart! Press 'Y' to enter another one: ";
            cin >> j;
            if (j == 'y' || j == 'Y') l--;
        }
        catch (const exception& e) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cerr << "Exception: " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}

float juices() {
    system("cls");
    system("color 90");
    int choice;
    float nestle = 180.0, shezan = 20.0, cappy = 65.0;
    char j;
    for (int l = 0; l < 1; l++) {
        try {
            cout << "\n\n\nPress 1 for Nestle Fruta Vitals (Rs. 180/1L)";
            cout << "\n\n\nPress 2 for Shezan Mango Juice (Rs. 20/250ml)";
            cout << "\n\n\nPress 3 for Cappy Pulpy Orange Juice (Rs. 65/350ml)";
            cout << "\n\n\nYour Choice: ";
            cin >> choice;
            if (cin.fail()) {
                throw runtime_error("Invalid input.");
            }
            if (choice == 1) cart += nestle;
            else if (choice == 2) cart += shezan;
            else if (choice == 3) cart += cappy;
            else {
                throw runtime_error("Invalid choice, please select between 1 and 3.");
            }
            cout << "Added to cart! Press 'Y' to enter another one: ";
            cin >> j;
            if (j == 'y' || j == 'Y') l--;
        }
        catch (const exception& e) {
            cin.clear();
            cin.ignore(INT_MAX, '\n');
            cerr << "Exception: " << e.what() << endl;
            return 0;
        }
    }
    return 0;
}
