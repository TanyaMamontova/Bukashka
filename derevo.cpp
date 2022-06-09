#include <iostream>

using namespace std;

struct turn {
    int mean;
    turn* left;
    turn* right;
};

turn* sign(int mean) {
    turn* newturn = new turn();
    newturn->mean = mean;
    newturn->left = NULL;
    newturn->right = NULL;
    return newturn;
}

turn* vvod(turn* root, int mean) {
    if (root == NULL)
        root = sign(mean);
    else
    {
        if (mean <= root->mean)
            root->left = vvod(root->left, mean);
        else
            root->right = vvod(root->right, mean);
    }
    return root;
}

int min(turn* root, int minimum) {
    int min1;
    if (root != NULL)
    {
        if (root->mean < minimum) {
            minimum = root->mean;
        }
        min1 = min(root->left, minimum);
        if (min1 < minimum)
            minimum = min1;
        min1 = min(root->right, minimum);
        if (min1 < minimum)
            minimum = min1;
    }
    return minimum;
}

int max(turn* root, int maximum) {
    int max1;
    if (root != NULL)
    {
        if (root->mean > maximum) {
            maximum = root->mean;
        }
        max1 = max(root->left, maximum);
        if (max1 > maximum)
            maximum = max1;
        max1 = max(root->right, maximum);
        if (max1 > maximum)
            maximum = max1;
    }
    return maximum;
}

void findturn(turn* root, int minimum) {
    if (root == NULL) return;
    else {
        if (root->mean == minimum)
            cout << root->mean << " ";
        findturn(root->left, minimum);
        findturn(root->right, minimum);
    }
}

int main() {
    turn* root = NULL;
    root = vvod (root, 8);
    root = vvod (root, 9);
    root = vvod (root, 4);
    root = vvod (root, 7);
    root = vvod (root, 11);
    root = vvod (root, 5);
    root = vvod (root, 10);
    root = vvod (root, 6);
    int minimum = root->mean;
    minimum = min(root->left, minimum);
    int maximum = root->mean;
    maximum = max(root->right, maximum);
    for (minimum; minimum <= maximum; minimum++)
        findturn(root, minimum);
}
