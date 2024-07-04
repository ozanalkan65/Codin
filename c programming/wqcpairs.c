#include <stdio.h>
#include <stdlib.h>

#define N 11 // Number of vertices (0 to 10)

int id[N]; // Array to store parent pointers
int sz[N]; // Array to store size of each component

// Initialize the data structures
void initialize() {
    for (int i = 0; i < N; i++) {
        id[i] = i; // Each node is initially its own parent
        sz[i] = 1; // Each tree starts with size 1
    }
}

// Find the root of the component containing node p
int find(int p) {
    while (p != id[p]) {
        id[p] = id[id[p]]; // Path compression heuristic
        p = id[p];
    }
    return p;
}

// Check if nodes p and q are connected
int connected(int p, int q) {
    return find(p) == find(q);
}

// Union operation to merge components containing p and q
void union_op(int p, int q) {
    int rootP = find(p);
    int rootQ = find(q);

    if (rootP == rootQ) return;

    // Weighted union: attach smaller tree under larger tree
    if (sz[rootP] < sz[rootQ]) {
        id[rootP] = rootQ;
        sz[rootQ] += sz[rootP];
    } else {
        id[rootQ] = rootP;
        sz[rootP] += sz[rootQ];
    }
}

// Print the current state of id[] and sz[] arrays
void printState() {
    printf("id[]: ");
    for (int i = 0; i < N; i++)
        printf("%d ", id[i]);
    printf("\n");

    printf("sz[]: ");
    for (int i = 0; i < N; i++)
        printf("%d ", sz[i]);
    printf("\n\n");
}

int main() {
    // Initialize the data structures
    initialize();

    // Given sequence of pairs
    int pairs[][2] = {{10, 5}, {0, 3}, {2, 6}, {5, 4}, {4, 9}, {4, 8}, {7, 9}, {1, 10}};
    int num_pairs = sizeof(pairs) / sizeof(pairs[0]);

    // Apply union operations
    for (int i = 0; i < num_pairs; i++) {
        int p = pairs[i][0];
        int q = pairs[i][1];

        printf("Connecting %d and %d:\n", p, q);
        union_op(p, q);
        printState();
    }

    return 0;
}