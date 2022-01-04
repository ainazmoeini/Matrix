#ifndef MATRIX_H
#define MATRIX_H
#include <iostream>
#include <string>

struct matrix
{
    std::string name;
    int **Iarray;
    char **Carray;
    std::string **Sarray;
    double **Darray;
    bool isEmpty = true;
};

void set_int_matrix(matrix *, std ::string, int, int, int &);
void set_character_matrix(matrix *,std ::string, int, int, int &);
void set_duoble_matrix(matrix *,std ::string, int, int, int &);
void set_string_matrix(matrix *,std::string, int, int, int &);

void show_matrix(matrix *, std ::string, int, int, int &);

#endif