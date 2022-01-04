#include <iostream>
#include <string>
#include "matrix.h"

using namespace std;

int counter = 0;

int main()
{
    cout << "\n             -----------WELCOME TO MATRIX PROGRAM-----------\n\n";

    cout << "How many matrix do you want to save?\n";
    int count;
    cin >> count;
    matrix *Matrix = new matrix[count];
    // int counter = 0;

    while (true)
    {
        cout << "Here is the menu :\n";
        cout << " ----------------------------- \n";
        cout << "| 1 . add matrix              |\n";
        cout << "| 2 . is diagonal             |\n";
        cout << "| 3 . is upper_triangular     |\n";
        cout << "| 4 . is lower_triangular     |\n";
        cout << "| 5 . is triangular           |\n";
        cout << "| 6 . is identity             |\n";
        cout << "| 7 . is normal_symmetric     |\n";
        cout << "| 8 . is skew_symmetric       |\n";
        cout << "| 9 . is symmetric            |\n";
        cout << "|10 . inverse                 |\n";
        cout << "|11 . show                    |\n";
        cout << "|12 . Delete                  |\n";
        cout << "|13 . edit                    |\n";
        cout << " -----------------------------\n";
        cout << "Enter the command name beside matrix name, for example : add matrix first_mat 2 3 [1,2,3,4,5,6] :\n\n";

        string command;
        int row, column;

        cin.ignore();
        getline(cin, command, '#');

        cout << "************************************\n";
        cout << "* Enter the type of your matrix :  *\n";
        cout << "* '1' means integral matrix        *\n";
        cout << "* '2' means character matrix       *\n";
        cout << "* '3' means double or float matrix *\n";
        cout << "* '4' means string matrix          *\n";
        cout << "************************************\n";

        unsigned int num;

        cin >> num;

        switch (num)
        {
        case 1:
            set_int_matrix(Matrix, command, row, column, counter);
            break;

        case 2:
            set_character_matrix(Matrix, command, row, column, counter);
            break;

        case 3:
            set_duoble_matrix(Matrix, command, row, column, counter);
            break;

        case 4:
            set_string_matrix(Matrix, command, row, column, counter);
            break;

        default:
            cerr << "This type does not exist!!!";
            break;
        }

        size_t found1 = command.find("show");
        if (found1 != std::string ::npos)
        {
            show_matrix(Matrix, command, row, column, counter);
        }
    }

   
    //     if (command == "is diagonal")
    //     {
    //         // call func
    //     }

    //     if (command == "is upper triangula")
    //     {
    //         // call func
    //     }

    //     if (command == "is lower triangular")
    //     {
    //         // call func
    //     }
    //     if (command == "is_triangular")
    //     {
    //         // call func
    //     }

    //     if (command == "is identity")
    //     {
    //         // call func
    //     }

    //     if (command == "is normal symmetric")
    //     {
    //         // call func
    //     }

    //     if (command == "is skew symmetric")
    //     {
    //         // call func
    //     }

    //     if (command == "is symmetric")
    //     {
    //         // call func
    //     }

    //     if (command == "inverse")
    //     {
    //         // call func
    //     }

    //     if (command == "Delete")
    //     {
    //         // call func
    //     }

    //     if (command == "edit")
    //     {
    //         // call func
    //     }
    return 0;
}
