#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>   // For setw, setprecision, fixed
#include <limits>    // Required for std::numeric_limits
#include <stdexcept> // For std::runtime_error

// Windows-specific headers (from original code)
#include <windows.h> // For Sleep, system(), Beep
#include <conio.h>   // For _getch()

using namespace std;

// Global variable for the total cart amount
float total_cart_value = 0.0f;

// Forward declarations for all functions
void loading_animation();
void display_main_menu();
void get_delivery_details(float final_bill);

// Category menu functions
float handle_instant_food();
float handle_fresh_meat();
float handle_fish_seafood();
float handle_grocery();
float handle_personal_care();
float handle_dry_fruits_nuts();
float handle_home_care();
float handle_baby_care();
float handle_bakery_dairy();
float handle_beverages();

// Sub-category/item selection functions
// Instant Food
float select_noodles();
float select_pasta();
float select_chips();
// Fresh Meat
float select_chicken();
float select_mutton();
float select_beef();
// Fish & Seafood
float select_boneless_fish();
float select_fish_cuts();
float select_crustaceans();
// Grocery
float select_spices();
float select_baking_desserts();
float select_spreads();
// Personal Care
float select_men_care();
float select_women_care();
float select_dental_care();
// Dry Fruits & Nuts
float select_nuts_items();
// Home Care
float select_laundry_items();
float select_cleaning_accessories();
float select_kitchen_items();
// Baby Care
float select_diapers_wipes();
float select_baby_food_milk();
float select_baby_bath_items();
// Bakery & Dairy
float select_milk_items();
float select_butter_cheese();
float select_eggs();
// Beverages
float select_tea();
float select_cold_drinks();
float select_juices();

// Structure for delivery information
struct Person
{
    string address;
    string name;
    long long int phone_number;
};

// Clears the console screen
void clear_screen()
{
    system("cls");
}

// Sets console text and background color (Windows specific)
void set_console_color(const char* color_code)
{
    system(color_code);
}

// Handles invalid input for cin
void handle_invalid_input()
{
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cerr << "Invalid input. Please enter a valid number." << endl;
    Sleep(1500);
}

// Generic function to get a valid integer choice within a range
int get_valid_choice(int min_choice, int max_choice)
{
    int choice;
    while (true)
    {
        cout << "\nYour Choice: ";
        cin >> choice;
        if (cin.fail())
        {
            handle_invalid_input();
        }
        else
        {
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Consume newline
            if (choice >= min_choice && choice <= max_choice)
            {
                return choice;
            }
            else
            {
                cerr << "Invalid choice. Please select between " << min_choice << " and " << max_choice << "." << endl;
                Sleep(1500);
            }
        }
        // Re-prompt if invalid
        cout << "Please try again." << endl; // This message might be redundant if menu is re-displayed by caller
        Sleep(500);
    }
}

// Generic item selection loop
float process_item_selection(const string& item_type_name, const string item_options[][2], int num_options, const char* color_code)
{
    clear_screen();
    set_console_color(color_code);
    float current_selection_bill = 0.0f;
    char add_more_choice;

    do
    {
        clear_screen();
        cout << "\n--- " << item_type_name << " Menu ---" << endl;
        for (int i = 0; i < num_options; ++i)
        {
            cout << (i + 1) << ". " << item_options[i][0] << " (Rs " << item_options[i][1] << ")" << endl;
        }
        cout << "0. Back to previous menu" << endl;

        int choice = get_valid_choice(0, num_options);

        if (choice == 0)
        {
            break;
        }

        try
        {
            float item_price = stof(item_options[choice - 1][1]);
            current_selection_bill += item_price;
            cout << item_options[choice - 1][0] << " added to cart!" << endl;
            cout << "Subtotal for " << item_type_name << ": Rs. " << fixed << setprecision(2) << current_selection_bill << endl;
        }
        catch (const std::out_of_range& oor)
        {
            cerr << "Error processing item price (out of range for stof). Item: " << item_options[choice - 1][0] << endl;
            Sleep(2000);
        }
        catch (const std::invalid_argument& ia)
        {
            cerr << "Error processing item price (invalid argument for stof). Item: " << item_options[choice - 1][0] << endl;
            Sleep(2000);
        }

        cout << "\nPress 'Y' to add another " << item_type_name << " item, or any other key to finish: ";
        cin >> add_more_choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

    } while (add_more_choice == 'y' || add_more_choice == 'Y');

    return current_selection_bill;
}


void loading_animation()
{
    clear_screen();
    char loading_char = 219;
    cout << endl << endl << endl << endl << endl;
    cout << "\t\t\t\t\t\t\t\t\tL O A D I N G " << endl;
    cout << "\t\t\t\t\t";

    int bar_width = 69;
    for (int i = 0; i < bar_width; ++i)
    {
        cout << loading_char;
        cout.flush();
        Sleep(20);
    }
    cout << endl << endl << endl << endl;
    Sleep(500);
}

void get_delivery_details(float final_bill)
{
    ofstream data_file("delivery_data.txt", ios::app);
    if (!data_file.is_open())
    {
        cerr << "Fatal Error: Unable to open delivery_data.txt for writing." << endl;
        Sleep(2000);
        return;
    }

    Person customer_details;
    bool details_confirmed = false;

    do
    {
        clear_screen();
        cout << "\t\t\t\t\t--- Delivery Information ---" << endl << endl;

        cout << "Enter Your First Name: ";
        cin >> customer_details.name;
        while (cin.fail() || customer_details.name.empty())
        {
            handle_invalid_input();
            cout << "Enter Your First Name: "; // Re-prompt
            cin >> customer_details.name;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Your Mobile Phone Number (e.g., 03xxxxxxxxx): ";
        cin >> customer_details.phone_number;
        while (cin.fail())
        {
            handle_invalid_input();
            cout << "Enter Your Mobile Phone Number (e.g., 03xxxxxxxxx): "; // Re-prompt
            cin >> customer_details.phone_number;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        cout << "Enter Your Full Address: ";
        getline(cin, customer_details.address);
        while (customer_details.address.empty())
        {
            cerr << "Address cannot be empty." << endl;
            cout << "Enter Your Full Address: "; // Re-prompt
            getline(cin, customer_details.address);
        }

        clear_screen();
        cout << "\t\t\t\t\t--- Confirm Your Details ---" << endl << endl;
        cout << "Name: " << customer_details.name << endl;
        cout << "Phone #: " << customer_details.phone_number << endl;
        cout << "Address: " << customer_details.address << endl;
        cout << "Total Bill: Rs. " << fixed << setprecision(2) << final_bill << endl;

        char confirmation_choice;
        cout << "\nIs this information correct? (Y/N): ";
        cin >> confirmation_choice;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (confirmation_choice == 'y' || confirmation_choice == 'Y')
        {
            details_confirmed = true;
        }
        else
        {
            cout << "Please re-enter your details." << endl;
            Sleep(1500);
        }

    } while (!details_confirmed);

    data_file << "----------------------------------------" << endl;
    data_file << "Name: " << customer_details.name << endl;
    data_file << "Phone#: " << customer_details.phone_number << endl;
    data_file << "Address: " << customer_details.address << endl;
    data_file << "Total Bill: Rs. " << fixed << setprecision(2) << final_bill << endl;
    data_file << "Order Time (compile): " << __DATE__ << " " << __TIME__ << endl;
    data_file << "----------------------------------------" << endl << endl;

    data_file.close();
    cout << "\nDelivery information saved successfully!" << endl;
    Sleep(1500);
}


int main()
{
    double session_revenue = 0.0;
    char continue_shopping_choice;
    int category_choice;

    loading_animation();
    clear_screen();
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    cout << "\t\t\t\t\t\t\t\t\t\tWelcome to C++ Store!";
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
    Sleep(2000);

    do
    {
        set_console_color("color B0");
        clear_screen();
        cout << "----------------------------------------------------------------------------------------------------CATEGORIES----------------------------------------------------------------------------------------------------";
        Beep(523, 250);

        cout << "\n\nPress 0 For Instant Food ";
        cout << "\nPress 1 For Fresh Meat ";
        cout << "\nPress 2 For Fish & Seafood";
        cout << "\nPress 3 for Grocery ";
        cout << "\nPress 4 For Personal Care ";
        cout << "\nPress 5 For Dry Fruits & Nuts ";
        cout << "\nPress 6 For Home Care ";
        cout << "\nPress 7 For Baby Care ";
        cout << "\nPress 8 For Bakery & Dairy ";
        cout << "\nPress 9 For Beverages ";
        cout << "\nPress 10 To Checkout";

        cout << "\n\nYour Choice (0-10): ";
        cin >> category_choice;

        float category_bill = 0.0f;

        if (cin.fail())
        {
            handle_invalid_input();
            continue_shopping_choice = 'Y';
            continue;
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        switch (category_choice)
        {
        case 0: category_bill = handle_instant_food(); break;
        case 1: category_bill = handle_fresh_meat(); break;
        case 2: category_bill = handle_fish_seafood(); break;
        case 3: category_bill = handle_grocery(); break;
        case 4: category_bill = handle_personal_care(); break;
        case 5: category_bill = handle_dry_fruits_nuts(); break;
        case 6: category_bill = handle_home_care(); break;
        case 7: category_bill = handle_baby_care(); break;
        case 8: category_bill = handle_bakery_dairy(); break;
        case 9: category_bill = handle_beverages(); break;
        case 10:
            continue_shopping_choice = 'N';
            break;
        default:
            cerr << "Invalid category choice. Please try again." << endl;
            Sleep(1500);
            continue_shopping_choice = 'Y';
            continue;
        }

        if (category_choice != 10)
        {
            total_cart_value += category_bill;
            cout << "\n\nSubtotal from this category: Rs. " << fixed << setprecision(2) << category_bill << endl;
            cout << "Your Current Total Bill = Rs. " << fixed << setprecision(2) << total_cart_value << endl;

            cout << "\n\nPress 'Y' To Select Items From Another Category, or any other key to Checkout: ";
            cin >> continue_shopping_choice;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

    } while (continue_shopping_choice == 'y' || continue_shopping_choice == 'Y');

    clear_screen();
    if (total_cart_value > 0)
    {
        cout << "\t\t\t\t\t--- Final Bill & Delivery ---" << endl << endl;
        cout << "Your final total bill is: Rs. " << fixed << setprecision(2) << total_cart_value << endl << endl;
        session_revenue += total_cart_value;
        get_delivery_details(total_cart_value);
        cout << "\nThank you for shopping with us!" << endl;
        cout << "You will receive your order at your doorstep in approximately 30 minutes." << endl;
    }
    else
    {
        cout << "No items selected. Thank you for visiting C++ Store!" << endl;
    }

    cout << "\nSession Revenue: Rs. " << fixed << setprecision(2) << session_revenue << endl;
    cout << "\nPress any key to exit..." << endl;
    _getch();
    return 0;
}

// --- Category Handlers ---
float handle_instant_food()
{
    clear_screen();
    set_console_color("color 70");
    float category_total_bill = 0.0f;
    char stay_in_category_choice;

    do
    {
        clear_screen();
        cout << "\n--- Instant Food Menu ---" << endl;
        cout << "1. Noodles" << endl;
        cout << "2. Pasta" << endl;
        cout << "3. Chips" << endl;
        cout << "0. Back to Main Categories" << endl;

        int choice = get_valid_choice(0, 3);
        float sub_category_bill = 0.0f;

        switch (choice)
        {
        case 1:
            sub_category_bill = select_noodles();
            break;
        case 2:
            sub_category_bill = select_pasta();
            break;
        case 3:
            sub_category_bill = select_chips();
            break;
        case 0:
            return category_total_bill;
        default:
            cerr << "Unexpected error in Instant Food menu." << endl;
            Sleep(1000);
            continue;
        }

        category_total_bill += sub_category_bill;
        cout << "Current total for Instant Food: Rs. " << fixed << setprecision(2) << category_total_bill << endl;

        if (choice != 0)
        {
            cout << "Press 'Y' to select another item from Instant Food, or any other key to return to main categories: ";
            cin >> stay_in_category_choice;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
        {
            stay_in_category_choice = 'N';
        }
    } while (stay_in_category_choice == 'y' || stay_in_category_choice == 'Y');

    return category_total_bill;
}

float select_noodles()
{
    const string items[][2] = {
        {"Kolson Noodles", "40.0"},
        {"Knorr Noodles", "41.0"},
        {"Samyang Noodles", "270.0"}
    };
    return process_item_selection("Noodles", items, 3, "color 90");
}

float select_pasta()
{
    const string items[][2] = {
        {"National Vermicelli", "32.0"},
        {"Kolson Large Elbow", "124.0"},
        {"Kolson Spaghetti", "135.0"}
    };
    return process_item_selection("Pasta", items, 3, "color 90");
}

float select_chips()
{
    const string items[][2] = {
        {"Lays Masala", "50.0"},
        {"Pringles", "300.0"},
        {"Lites", "20.0"}
    };
    return process_item_selection("Chips", items, 3, "color 90");
}


float handle_fresh_meat()
{
    clear_screen();
    set_console_color("color 70");
    float category_total_bill = 0.0f;
    char stay_in_category_choice;

    do
    {
        clear_screen();
        cout << "\n--- Fresh Meat Menu ---" << endl;
        cout << "1. Chicken" << endl;
        cout << "2. Mutton" << endl;
        cout << "3. Beef" << endl;
        cout << "0. Back to Main Categories" << endl;

        int choice = get_valid_choice(0, 3);
        float sub_category_bill = 0.0f;

        switch (choice)
        {
        case 1:
            sub_category_bill = select_chicken();
            break;
        case 2:
            sub_category_bill = select_mutton();
            break;
        case 3:
            sub_category_bill = select_beef();
            break;
        case 0:
            return category_total_bill;
        default:
            cerr << "Unexpected error in Fresh Meat menu." << endl;
            Sleep(1000);
            continue;
        }

        category_total_bill += sub_category_bill;
        cout << "Current total for Fresh Meat: Rs. " << fixed << setprecision(2) << category_total_bill << endl;

        if (choice != 0)
        {
            cout << "Press 'Y' to select another item from Fresh Meat, or any other key to return: ";
            cin >> stay_in_category_choice;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
        {
            stay_in_category_choice = 'N';
        }
    } while (stay_in_category_choice == 'y' || stay_in_category_choice == 'Y');

    return category_total_bill;
}

float select_chicken()
{
    const string items[][2] = {
        {"Chicken Mince (per Kg)", "530.0"},
        {"Karahi Cut (per Kg)", "360.0"},
        {"Boneless (per Kg)", "520.0"}
    };
    return process_item_selection("Chicken", items, 3, "color 90");
}

float select_mutton()
{
    const string items[][2] = {
        {"Mutton Mince (per Kg)", "1500.0"},
        {"Shoulder/Dusti (per Kg)", "1500.0"},
        {"Boneless (per Kg)", "2100.0"}
    };
    return process_item_selection("Mutton", items, 3, "color 90");
}

float select_beef()
{
    const string items[][2] = {
        {"Beef Mince (per Kg)", "1000.0"},
        {"Shoulder/Dusti (per Kg)", "1500.0"},
        {"Boneless (per Kg)", "1700.0"}
    };
    return process_item_selection("Beef", items, 3, "color 90");
}

float handle_fish_seafood()
{
    clear_screen();
    set_console_color("color 70");
    float category_total_bill = 0.0f;
    char stay_in_category_choice;

    do
    {
        clear_screen();
        cout << "\n--- Fish & Seafood Menu ---" << endl;
        cout << "1. Boneless Fish" << endl;
        cout << "2. Fish Cuts" << endl;
        cout << "3. Crustaceans" << endl;
        cout << "0. Back to Main Categories" << endl;

        int choice = get_valid_choice(0, 3);
        float sub_category_bill = 0.0f;

        switch (choice)
        {
        case 1:
            sub_category_bill = select_boneless_fish();
            break;
        case 2:
            sub_category_bill = select_fish_cuts();
            break;
        case 3:
            sub_category_bill = select_crustaceans();
            break;
        case 0:
            return category_total_bill;
        default:
            cerr << "Unexpected error in Fish & Seafood menu." << endl;
            Sleep(1000);
            continue;
        }

        category_total_bill += sub_category_bill;
        cout << "Current total for Fish & Seafood: Rs. " << fixed << setprecision(2) << category_total_bill << endl;

        if (choice != 0)
        {
            cout << "Press 'Y' to add more from Fish & Seafood, or any other key to return: ";
            cin >> stay_in_category_choice;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
        {
            stay_in_category_choice = 'N';
        }
    } while (stay_in_category_choice == 'y' || stay_in_category_choice == 'Y');

    return category_total_bill;
}

float select_boneless_fish()
{
    const string items[][2] = {
        {"Tilapia Fish Fillets (Kg)", "1100.0"},
        {"Rahu Fish (Kg)", "1500.0"}
    };
    return process_item_selection("Boneless Fish", items, 2, "color 90");
}

float select_fish_cuts()
{
    const string items[][2] = {
        {"Tuna Fish (Kg)", "1700.0"},
        {"Surmai Fish (Kg)", "2200.0"}
    };
    return process_item_selection("Fish Cuts", items, 2, "color 90");
}

float select_crustaceans()
{
    const string items[][2] = {
        {"Tilapia (Kg)", "1000.0"},
        {"Tiger Jumbo Prawn (Kg)", "3000.0"},
        {"Mud Crab (Kg)", "1700.0"}
    };
    return process_item_selection("Crustaceans", items, 3, "color 90");
}

float handle_grocery()
{
    clear_screen();
    set_console_color("color 70");
    float category_total_bill = 0.0f;
    char stay_in_category_choice;

    do
    {
        clear_screen();
        cout << "\n--- Grocery Menu ---" << endl;
        cout << "1. Spices" << endl;
        cout << "2. Baking & Desserts" << endl;
        cout << "3. Spreads" << endl;
        cout << "0. Back to Main Categories" << endl;

        int choice = get_valid_choice(0, 3);
        float sub_category_bill = 0.0f;

        switch (choice)
        {
        case 1:
            sub_category_bill = select_spices();
            break;
        case 2:
            sub_category_bill = select_baking_desserts();
            break;
        case 3:
            sub_category_bill = select_spreads();
            break;
        case 0:
            return category_total_bill;
        default:
            cerr << "Unexpected error in Grocery menu." << endl;
            Sleep(1000);
            continue;
        }

        category_total_bill += sub_category_bill;
        cout << "Current total for Grocery: Rs. " << fixed << setprecision(2) << category_total_bill << endl;

        if (choice != 0)
        {
            cout << "Press 'Y' to add more from Grocery, or any other key to return: ";
            cin >> stay_in_category_choice;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
        {
            stay_in_category_choice = 'N';
        }
    } while (stay_in_category_choice == 'y' || stay_in_category_choice == 'Y');

    return category_total_bill;
}

float select_spices()
{
    const string items[][2] = {
        {"Red Chilli Powder (200g)", "137.0"},
        {"National Iodized Pink Salt", "55.0"},
        {"Sugar (Kg)", "110.0"},
        {"Vinegar (800ml)", "120.0"}
    };
    return process_item_selection("Spices", items, 4, "color 90");
}

float select_baking_desserts()
{
    const string items[][2] = {
        {"National Kheer mix (100g)", "100.0"},
        {"National Ice Cream Powder (100g)", "100.0"},
        {"Rafhan Custard Powder (130g)", "100.0"},
        {"Shan Jelly mix (60g)", "80.0"}
    };
    return process_item_selection("Baking & Desserts", items, 4, "color 90");
}

float select_spreads()
{
    const string items[][2] = {
        {"Mitchell's Orange Marmalade Jam (100g)", "100.0"},
        {"Marhaba Herbal Honey", "193.0"},
        {"Chicken Mayonnaise Spread (500g)", "380.0"}
    };
    return process_item_selection("Spreads", items, 3, "color 90");
}

float handle_personal_care()
{
    clear_screen();
    set_console_color("color 70");
    float category_total_bill = 0.0f;
    char stay_in_category_choice;

    do
    {
        clear_screen();
        cout << "\n--- Personal Care Menu ---" << endl;
        cout << "1. Men Care" << endl;
        cout << "2. Dental Care" << endl;
        cout << "3. Women Care" << endl;
        cout << "0. Back to Main Categories" << endl;

        int choice = get_valid_choice(0, 3);
        float sub_category_bill = 0.0f;

        switch (choice)
        {
        case 1:
            sub_category_bill = select_men_care();
            break;
        case 2:
            sub_category_bill = select_dental_care();
            break;
        case 3:
            sub_category_bill = select_women_care();
            break;
        case 0:
            return category_total_bill;
        default:
            cerr << "Unexpected error in Personal Care menu." << endl;
            Sleep(1000);
            continue;
        }

        category_total_bill += sub_category_bill;
        cout << "Current total for Personal Care: Rs. " << fixed << setprecision(2) << category_total_bill << endl;

        if (choice != 0)
        {
            cout << "Press 'Y' to add more from Personal Care, or any other key to return: ";
            cin >> stay_in_category_choice;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
        {
            stay_in_category_choice = 'N';
        }
    } while (stay_in_category_choice == 'y' || stay_in_category_choice == 'Y');

    return category_total_bill;
}

float select_men_care()
{
    const string items[][2] = {
        {"Nivea Men Black Body Spray", "500.0"},
        {"Gillette Mach 3 Shaving Foam", "400.0"},
        {"Dari Mooch Beard Growth Oil", "1100.0"}
    };
    return process_item_selection("Men Care", items, 3, "color 90");
}

float select_dental_care()
{
    const string items[][2] = {
        {"Colgate Pro-relief Toothbrush", "171.0"},
        {"Sensodyne Toothpaste", "245.0"},
        {"Listerine Mouthwash", "320.0"}
    };
    return process_item_selection("Dental Care", items, 3, "color 90");
}

float select_women_care()
{
    const string items[][2] = {
        {"Medora Nail Enamel", "175.0"},
        {"CVB Skin Foundation", "420.0"},
        {"PinkFlash Waterproof Mascara", "238.0"}
    };
    return process_item_selection("Women Care", items, 3, "color 90");
}

float handle_dry_fruits_nuts()
{
    clear_screen();
    set_console_color("color 70");
    float category_total_bill = 0.0f;
    char stay_in_category_choice;

    do
    {
        clear_screen();
        cout << "\n--- Dry Fruits & Nuts Menu ---" << endl;
        cout << "1. Select Nuts Items" << endl; // Only one sub-category
        cout << "0. Back to Main Categories" << endl;

        int choice = get_valid_choice(0, 1);
        float sub_category_bill = 0.0f;

        switch (choice)
        {
        case 1:
            sub_category_bill = select_nuts_items();
            break;
        case 0:
            return category_total_bill;
        default:
            cerr << "Unexpected error in Dry Fruits & Nuts menu." << endl;
            Sleep(1000);
            continue;
        }

        category_total_bill += sub_category_bill;
        // Display total after items are selected from the sub-category
        cout << "Current total for Dry Fruits & Nuts: Rs. " << fixed << setprecision(2) << category_total_bill << endl;


        if (choice != 0) // Only ask if they actually went into a sub-category
        {
            cout << "Press 'Y' to select more Nuts Items, or any other key to return to main categories: ";
            cin >> stay_in_category_choice;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
        {
            stay_in_category_choice = 'N'; // If they chose '0. Back' initially
        }
    } while (stay_in_category_choice == 'y' || stay_in_category_choice == 'Y');

    return category_total_bill;
}

float select_nuts_items()
{
    const string items[][2] = {
        {"Almond White (Kg)", "2000.0"},
        {"Ajwa Dates (Kg)", "310.0"},
        {"Walnuts (Kg)", "2500.0"}
    };
    return process_item_selection("Nuts Items", items, 3, "color 90");
}

float handle_home_care()
{
    clear_screen();
    set_console_color("color 70");
    float category_total_bill = 0.0f;
    char stay_in_category_choice;

    do
    {
        clear_screen();
        cout << "\n--- Home Care Menu ---" << endl;
        cout << "1. Laundry Items" << endl;
        cout << "2. Cleaning Accessories" << endl;
        cout << "3. Kitchen Items" << endl;
        cout << "0. Back to Main Categories" << endl;

        int choice = get_valid_choice(0, 3);
        float sub_category_bill = 0.0f;

        switch (choice)
        {
        case 1:
            sub_category_bill = select_laundry_items();
            break;
        case 2:
            sub_category_bill = select_cleaning_accessories();
            break;
        case 3:
            sub_category_bill = select_kitchen_items();
            break;
        case 0:
            return category_total_bill;
        default:
            cerr << "Unexpected error in Home Care menu." << endl;
            Sleep(1000);
            continue;
        }

        category_total_bill += sub_category_bill;
        cout << "Current total for Home Care: Rs. " << fixed << setprecision(2) << category_total_bill << endl;

        if (choice != 0)
        {
            cout << "Press 'Y' to add more from Home Care, or any other key to return: ";
            cin >> stay_in_category_choice;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
        {
            stay_in_category_choice = 'N';
        }
    } while (stay_in_category_choice == 'y' || stay_in_category_choice == 'Y');

    return category_total_bill;
}

float select_laundry_items()
{
    const string items[][2] = {
        {"Ariel Surf (Kg)", "330.0"},
        {"Floral Scent Bar (380g)", "45.0"},
        {"Mortein Insect Killer Spray (250ml)", "278.0"}
    };
    return process_item_selection("Laundry Items", items, 3, "color 90");
}

float select_cleaning_accessories()
{
    const string items[][2] = {
        {"Trash Bags (80L)", "270.0"},
        {"Crown Fancy Wiper (1unit)", "250.0"},
        {"Broom (1unit)", "190.0"}
    };
    return process_item_selection("Cleaning Accessories", items, 3, "color 90");
}

float select_kitchen_items()
{
    const string items[][2] = {
        {"Scotch Brite (1unit)", "64.0"},
        {"Lemon Max Dish Washing Bar (1unit)", "48.0"},
        {"Kite Matchbox (10 units)", "40.0"}
    };
    return process_item_selection("Kitchen Items", items, 3, "color 90");
}

float handle_baby_care()
{
    clear_screen();
    set_console_color("color 70");
    float category_total_bill = 0.0f;
    char stay_in_category_choice;

    do
    {
        clear_screen();
        cout << "\n--- Baby Care Menu ---" << endl;
        cout << "1. Baby Diapers & Wipes" << endl;
        cout << "2. Food and Milk" << endl;
        cout << "3. Baby Bath Items" << endl;
        cout << "0. Back to Main Categories" << endl;

        int choice = get_valid_choice(0, 3);
        float sub_category_bill = 0.0f;

        switch (choice)
        {
        case 1:
            sub_category_bill = select_diapers_wipes();
            break;
        case 2:
            sub_category_bill = select_baby_food_milk();
            break;
        case 3:
            sub_category_bill = select_baby_bath_items();
            break;
        case 0:
            return category_total_bill;
        default:
            cerr << "Unexpected error in Baby Care menu." << endl;
            Sleep(1000);
            continue;
        }

        category_total_bill += sub_category_bill;
        cout << "Current total for Baby Care: Rs. " << fixed << setprecision(2) << category_total_bill << endl;

        if (choice != 0)
        {
            cout << "Press 'Y' to add more from Baby Care, or any other key to return: ";
            cin >> stay_in_category_choice;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
        {
            stay_in_category_choice = 'N';
        }
    } while (stay_in_category_choice == 'y' || stay_in_category_choice == 'Y');

    return category_total_bill;
}

float select_diapers_wipes()
{
    const string items[][2] = {
        {"Johnson's Baby Wipes (1unit)", "340.0"},
        {"Pampers Diaper (7 units)", "255.0"}
    };
    return process_item_selection("Diapers & Wipes", items, 2, "color 90");
}

float select_baby_food_milk()
{
    const string items[][2] = {
        {"Nestle Nangrow Optipro3 (900g)", "2560.0"},
        {"Nestle Nido Shield (800g)", "1120.0"},
        {"Nestle Cerelac (175g)", "278.0"}
    };
    return process_item_selection("Baby Food & Milk", items, 3, "color 90");
}

float select_baby_bath_items()
{
    const string items[][2] = {
        {"Johnson's Baby Lotion (200ml)", "360.0"},
        {"Johnson's Baby Powder (500g)", "450.0"},
        {"Johnson's Baby Shampoo (500ml)", "738.0"}
    };
    return process_item_selection("Baby Bath Items", items, 3, "color 90");
}

float handle_bakery_dairy()
{
    clear_screen();
    set_console_color("color 70");
    float category_total_bill = 0.0f;
    char stay_in_category_choice;

    do
    {
        clear_screen();
        cout << "\n--- Bakery & Dairy Menu ---" << endl;
        cout << "1. Milk Items" << endl;
        cout << "2. Cheese & Butter" << endl;
        cout << "3. Eggs" << endl;
        cout << "0. Back to Main Categories" << endl;

        int choice = get_valid_choice(0, 3);
        float sub_category_bill = 0.0f;

        switch (choice)
        {
        case 1:
            sub_category_bill = select_milk_items();
            break;
        case 2:
            sub_category_bill = select_butter_cheese();
            break;
        case 3:
            sub_category_bill = select_eggs();
            break;
        case 0:
            return category_total_bill;
        default:
            cerr << "Unexpected error in Bakery & Dairy menu." << endl;
            Sleep(1000);
            continue;
        }

        category_total_bill += sub_category_bill;
        cout << "Current total for Bakery & Dairy: Rs. " << fixed << setprecision(2) << category_total_bill << endl;

        if (choice != 0)
        {
            cout << "Press 'Y' to add more from Bakery & Dairy, or any other key to return: ";
            cin >> stay_in_category_choice;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
        {
            stay_in_category_choice = 'N';
        }
    } while (stay_in_category_choice == 'y' || stay_in_category_choice == 'Y');

    return category_total_bill;
}

float select_milk_items()
{
    const string items[][2] = {
        {"Olpers 1 Liter carton (6packs)", "1099.0"},
        {"Nurpur milk (1pack)", "217.0"},
        {"Nestle Everyday Liquid Tea Whitener (sachet)", "20.0"}
    };
    return process_item_selection("Milk Items", items, 3, "color 90");
}

float select_butter_cheese()
{
    const string items[][2] = {
        {"Nurpur Unsalted Butter (200g)", "289.0"},
        {"Nurpur Cheddar Cheese (200g)", "390.0"},
        {"Adam's Single Mozzarella Cheese slices (200g)", "430.0"}
    };
    return process_item_selection("Butter & Cheese", items, 3, "color 90");
}

float select_eggs()
{
    const string items[][2] = {
        {"Classic Eggs Farm Fresh (12pcs)", "204.0"},
        {"Sb Eggs Super (12pcs)", "199.0"},
        {"Desi Kukkari Eggs (6pcs)", "149.0"}
    };
    return process_item_selection("Eggs", items, 3, "color 90");
}

float handle_beverages()
{
    clear_screen();
    set_console_color("color 70");
    float category_total_bill = 0.0f;
    char stay_in_category_choice;

    do
    {
        clear_screen();
        cout << "\n--- Beverages Menu ---" << endl;
        cout << "1. Tea" << endl;
        cout << "2. Cold Drinks" << endl;
        cout << "3. Juices" << endl;
        cout << "0. Back to Main Categories" << endl;

        int choice = get_valid_choice(0, 3);
        float sub_category_bill = 0.0f;

        switch (choice)
        {
        case 1:
            sub_category_bill = select_tea();
            break;
        case 2:
            sub_category_bill = select_cold_drinks();
            break;
        case 3:
            sub_category_bill = select_juices();
            break;
        case 0:
            return category_total_bill;
        default:
            cerr << "Unexpected error in Beverages menu." << endl;
            Sleep(1000);
            continue;
        }

        category_total_bill += sub_category_bill;
        cout << "Current total for Beverages: Rs. " << fixed << setprecision(2) << category_total_bill << endl;

        if (choice != 0)
        {
            cout << "Press 'Y' to add more from Beverages, or any other key to return: ";
            cin >> stay_in_category_choice;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
        {
            stay_in_category_choice = 'N';
        }
    } while (stay_in_category_choice == 'y' || stay_in_category_choice == 'Y');

    return category_total_bill;
}

float select_tea()
{
    const string items[][2] = {
        {"Lipton Yellow Label Pouch (950g)", "1045.0"},
        {"Tapal Green Tea (1unit)", "99.0"},
        {"Tapal Danedar Teabags (50pc)", "270.0"}
    };
    return process_item_selection("Tea", items, 3, "color 90");
}

float select_cold_drinks()
{
    const string items[][2] = {
        {"Fanta Orange Flavour (500ml)", "45.0"},
        {"Coke Tin Can (330ml)", "60.0"},
        {"Seven up Diet (345ml)", "34.0"}
    };
    return process_item_selection("Cold Drinks", items, 3, "color 90");
}

float select_juices()
{
    const string items[][2] = {
        {"Nestle Fruta Vitals (1L)", "180.0"},
        {"Shezan Mango Juice (250ml)", "20.0"},
        {"Cappy Pulpy Orange Juice (350ml)", "65.0"}
    };
    return process_item_selection("Juices", items, 3, "color 90");
}
