#include <iostream>
#include "matrix.h"
using namespace std;

void set_int_matrix(matrix *Matrix, std::string command, int row, int column, int &counter)
{
    // int counter = 0;

    // matrix *Matrix = new matrix[count];

    if (Matrix[counter].isEmpty)
    {
        int i = 0;
        command.erase(0, 11);

        while (command[i] != ' ' && command[i])
        {
            Matrix[counter].name += command[i];
            i++;
        }

        row = command[i + 1] - 48; // convert char to int
        if (command[i + 3] == '[') // for square matrix
        {
            column = command[i + 1] - 48;
        }
        else
        {
            column = command[i = i + 3] - 48; // convert char to int
        }

        i = i + 3; // skip space and '['

        Matrix[counter].Iarray = new int *[row];
        for (int j = 0; j < row; j++)
        {
            Matrix[counter].Iarray[j] = new int[column];
        }

        for (size_t k = 0; k < column; k++)
        {
            for (size_t z = 0; z < row; z++)
            {
                for (; command[i] != ',' && command[i] != ']' && command[i]; i++)
                {
                    Matrix[counter].Iarray[z][k] = (Matrix[counter].Iarray[z][k] * 10) + (command[i] - 48);
                    // num = (num * 10) + (number[i] - 48);
                }
                i++;
            }
        }
        Matrix[counter].isEmpty = false;
    }
    counter++;
}
//*****************************************************************************************************

void set_character_matrix(matrix *Matrix, std::string command, int row, int column, int &counter)
{
    if (Matrix[counter].isEmpty)
    {
        int i = 0;
        command.erase(0, 11);

        while (command[i] != ' ' && command[i])
        {
            Matrix[counter].name += command[i];
            i++;
        }

        std::cout << Matrix[counter].name << std::endl;
        row = command[i + 1] - 48; // convert char to int
        if (command[i + 3] == '[') // for square matrix
        {
            column = command[i + 1] - 48;
        }
        else
        {
            column = command[i = i + 3] - 48; // convert char to int
        }

        i = i + 3; // skip space and '['

        Matrix[counter].Carray = new char *[row];
        for (int j = 0; j < row; j++)
        {
            Matrix[counter].Carray[j] = new char[column];
        }

        std::cout << "row is:" << row << "\t"
                  << "column is:" << column << "\n";

        for (size_t k = 0; k < column; k++)
        {
            for (size_t z = 0; z < row; z++)
            {
                for (; command[i] != ',' && command[i] != ']' && command[i]; i++)
                {
                    Matrix[counter].Carray[z][k] = command[i];
                }
                i++;
            }
        }
        Matrix[counter].isEmpty = false;
    }
    counter++;
}
//******************************************************************************************************************

void set_string_matrix(matrix *Matrix, std::string command, int row, int column, int &counter)
{
    if (Matrix[counter].isEmpty)
    {
        int i = 0;
        command.erase(0, 11);

        while (command[i] != ' ' && command[i])
        {
            Matrix[counter].name += command[i];
            i++;
        }

        std::cout << Matrix[counter].name << std::endl;
        row = command[i + 1] - 48; // convert char to int
        if (command[i + 3] == '[') // for square matrix
        {
            column = command[i + 1] - 48;
        }
        else
        {
            column = command[i = i + 3] - 48; // convert char to int
        }

        i = i + 3; // skip space and '['

        Matrix[counter].Sarray = new string *[row];
        for (int j = 0; j < row; j++)
        {
            Matrix[counter].Sarray[j] = new string[column];
        }

        std::cout << "row is:" << row << "\t"
                  << "column is:" << column << "\n";

        for (size_t k = 0; k < column; k++)
        {
            for (size_t z = 0; z < row; z++)
            {
                for (; command[i] != ',' && command[i] != ']' && command[i]; i++)
                {
                    Matrix[counter].Sarray[z][k] += command[i];
                }
                i++;
            }
        }
        Matrix[counter].isEmpty = false;
    }
    counter++;
}
//**********************************************************************************************************

void set_duoble_matrix(matrix *Matrix, std::string command, int row, int column, int &counter)
{
    if (Matrix[counter].isEmpty)
    {
        int i = 0;
        command.erase(0, 11);

        while (command[i] != ' ' && command[i])
        {
            Matrix[counter].name += command[i];
            i++;
        }

        std::cout << Matrix[counter].name << std::endl;
        row = command[i + 1] - 48; // convert char to int
        if (command[i + 3] == '[') // for square matrix
        {
            column = command[i + 1] - 48;
        }
        else
        {
            column = command[i = i + 3] - 48; // convert char to int
        }

        i = i + 3; // skip space and '['

        Matrix[counter].Darray = new double *[row];
        for (int j = 0; j < row; j++)
        {
            Matrix[counter].Darray[j] = new double[column];
        }

        std::cout << "row is:" << row << "\t"
                  << "column is:" << column << "\n";

        for (size_t k = 0; k < column; k++)
        {
            for (size_t z = 0; z < row; z++)
            {
                for (; command[i] != ',' && command[i] != ']' && command[i]; i++)
                {
                    Matrix[counter].Darray[z][k] += command[i];
                }
                i++;
            }
        }
        Matrix[counter].isEmpty = false;
    }
    counter++;
}
//************************************************************************************************************
void show_matrix(matrix *Matrix, string command, int row, int column, int &counter)
{
    string name = "";
    command.erase(0, 5);

    int i = 0;
    while (command[i] != ' ' && command[i])
    {
        name += command[i];
        i++;
    }
    cout << name << endl;
    for (size_t count = 0; count < counter; count++)
    {
        cout << Matrix[count].name << endl;
        if (Matrix[count].name == name && !(Matrix[count].isEmpty))
        {
            for (size_t j = 0; j < column; j++)
            {
                unsigned int k = 0;
                for (size_t k = 0; k < row; k++)
                {
                    cout << k << endl;
                    cout << Matrix[count].array[k][j] << "\t";
                    k++;
                }
                cout << endl;
            }
        }
    }
}
