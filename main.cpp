#include <bits/stdc++.h>

using namespace std;

// Right Half Pyramid
void rightHalfPyramid(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << '\n';
    }
}

// Floyd's Triangle
void floydsTriangle(int n)
{
    int count = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << count << " ";
            count++;
        }
        cout << '\n';
    }
}

// Inverted Right Half Pyramid
void invertedRightHalfPyramid(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << '\n';
    }
}

// Left Half Pyramid
void leftHalfPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < (n - i); j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < (n - (n - i)); j++)
        {
            cout << "* ";
        }
        cout << '\n';
    }
}

// Hollow Square
void hollowSquare(int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i == n - 1)
        {
            for (int j = 0; j < n; j++)
            {
                cout << "* ";
            }
        }
        else
        {
            cout << "* ";
            for (int j = 1; j < n - 1; j++)
            {
                cout << "  ";
            }
            cout << "* ";
        }
        cout << '\n';
    }
}

// Full Pyramid
void fullPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < (n - (n - i)); j++)
        {
            cout << "* ";
        }
        for (int j = 1; j < i; j++)
        {
            cout << "* ";
        }
        cout << '\n';
    }
}

// Hourglass
void invertedFullPyramid(int n)
{
    // First Half
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < (n - (n - i)); j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < (n - i) - 1; j++)
        {
            cout << "* ";
        }
        cout << '\n';
    }
    // Second Half
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            cout << "  ";
        }
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        for (int j = 0; j < i - 1; j++)
        {
            cout << "* ";
        }
        cout << '\n';
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cout.tie(NULL);
    cin.tie(NULL);

    int n = 5;
    // rightHalfPyramid(n);
    // floydsTriangle(n);
    // invertedRightHalfPyramid(n);
    // leftHalfPyramid(n);
    // hollowSquare(n);
    // fullPyramid(n);
    // invertedFullPyramid(n);

    return 0;
}