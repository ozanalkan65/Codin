#include <stdio.h>

// Define struct1 with four characters and three integers
typedef struct {
    char c1, c2, c3, c4;
    int i1, i2, i3;
} struct1;

// Define struct2 with interleaved characters and integers
typedef struct {
    char c1;
    int int1;
    char c2;
    int i2;
    char c3;
    int i3;
    char c4;
} struct2;

// Define a student structure with a name, id, and a pointer to another student
struct student {
    char name[12];
    char id[9];
    struct student *pS;
};

// Declare pointers and arrays
int **p;            // Pointer to a pointer to an integer
int m[3][4];        // 2D array of integers (3x4)
int *pm[5];         // Array of 5 pointers to integers

// Main function to demonstrate the usage of the structures and variables
int main() {
    // Initialize a student structure and a pointer to it
    struct student s = {"Tom Cruise", "12345678", NULL};
    struct student *ps = &s;

    // Initialize instances of struct1 and struct2
    struct1 a = {'a', 'b', 'c', 'd', 1, 2, 3};
    struct2 b = {'a', 1, 'b', 2, 'c', 3, 'd'};

    // Print sizes of various variables
    printf("Size of p: %lu bytes\n", sizeof(p));
    printf("Size of m: %lu bytes\n", sizeof(m));
    printf("Size of pm: %lu bytes\n", sizeof(pm));
    printf("Size of m[2]: %lu bytes\n", sizeof(m[2]));
    printf("Size of pm[2]: %lu bytes\n", sizeof(pm[2]));
    printf("Size of ps: %lu bytes\n", sizeof(ps));
    printf("Size of ps->pS: %lu bytes\n", sizeof(ps->pS));
    printf("Size of a.i1: %lu bytes\n", sizeof(a.i1));
    printf("Size of a: %lu bytes\n", sizeof(a));
    printf("Size of b: %lu bytes\n", sizeof(b));

    return 0;
}