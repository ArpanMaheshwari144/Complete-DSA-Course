// Questions

#include <bits/stdc++.h>
using namespace std;

// Ques-18
void update(int *p)
{
    *p = (*p) * 2;
}

// Ques-19
void fun(int arr[])
{
    cout << arr[0] << " ";
}

// Ques-20
void square(int *p)
{
    *p = (*p) * (*p);
}

// Ques-24
void increment(int **p)
{
    ++(**p);
}

// Ques-30
int f(int x, int *py, int **ppz)
{
    int y, z;
    **ppz += 1;
    z = **ppz;
    *py += 2;
    y = *py;
    x += 3;
    cout << x << " " << y << " " << z;
    return x + y + z;
}

int main()
{
    // Ques-1
    // int first = 8;
    // int second = 18;
    // int *ptr = &second;
    // *ptr = 9;
    // cout << first << " " << second;

    // Ques-2
    // int first = 6;
    // int *p = &first;
    // int *q = p;
    // (*q)++;
    // cout << first;

    // Ques-3
    // int first = 8;
    // int *p = &first;
    // cout << (*p)++ << endl;
    // cout << first;

    // Ques-4
    // int *p = 0; // null pointer
    // int first = 110;
    // // *p = first; null pointer ko ase initialize nhi kar sakte
    // p = &first;
    // cout << *p;

    // Ques-5
    // int first = 8;
    // int second = 11;
    // int *third = &second;
    // first = *third;
    // *third = *third + 2;
    // cout << first << " " << second;

    // Ques-6
    // float f = 12.5;
    // float p = 21.5;
    // float *ptr = &f;
    // (*ptr)++;
    // *ptr = p;
    // cout << *ptr << " " << f << " " << p;

    // Ques-7
    // int arr[5];
    // int *ptr;
    // cout << sizeof(arr) << " " << sizeof(ptr);

    // Ques-8
    // *arr means starting location par jo value hai uko print kardo
    // int arr[] = {11, 21, 13, 14};
    // cout << *arr << " " << *(arr + 1);

    // Ques-9
    // arr means starting location par jo address hai uko print kardo
    // int arr[6] = {12, 12, 31};
    // cout << arr << " " << &arr;

    // Ques-10
    // int arr[6] = {11, 21, 13};
    // cout << (arr + 1);

    // Ques-11
    // int arr[6] = {11, 21, 31};
    // int *p = arr;
    // cout << p[2] << endl; // p[2] = *(p + 2)

    // Ques-12
    // int arr[] = {11, 12, 13, 14, 15};
    // cout << *(arr) << " " << *(arr + 3);

    // Ques-13
    // int arr[] = {11, 21, 31, 41};
    // int *ptr = arr++; // array cannot be updated
    // cout << *ptr;

    // Ques-14
    // char ch = 'a';
    // char *ptr = &ch;
    // ch++;
    // cout << *ptr;

    // Ques-15
    // char arr[] = "abcde";
    // char *p = &arr[0];
    // cout << p;

    // Ques-16
    // char arr[] = "abcde";
    // char *p = &arr[0];
    // p++;
    // cout << p;

    // Ques-17
    // char str[] = "arpan";
    // char *p = str;
    // cout << str[0] << " " << p[0];

    // Ques-18
    // int i = 10;
    // update(&i);
    // cout << i;

    // Ques-19
    // int arr[] = {11, 12, 13, 14};
    // fun(arr + 1);
    // cout << arr[0];

    // Ques-20
    // int a = 70;
    // square(&a);
    // cout << a;

    // Ques-21
    // int first = 110;
    // int *p = &first;
    // int **q = &p;
    // int second = (**q)++ + 9;
    // cout << first << " " << second;

    // Ques-23
    // int first = 100;
    // int *p = &first;
    // int **q = &p;
    // int second = ++(**q);
    // int *r = *q;
    // ++(*r);
    // cout << first << " " << second;

    // Ques-24
    // int num = 110;
    // int *ptr = &num;
    // increment(&ptr);
    // cout << num;

    // Ques-25
    // int arr[] = {41, 52, 36, 74};
    // int *p = (arr + 1);
    // cout << *arr + 8;

    // Ques-26
    // char *p;
    // char str[] = "pqrstuv";
    // p = str;
    // p += 3;
    // cout << p;

    // Ques-27
    // char arr[20];
    // int i;
    // for (i = 0; i < 10; i++)
    // {
    //     *(arr + i) = 65 + i;
    // }
    // *(arr + i) = '\0';
    // cout << arr;

    // Ques-28
    // float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
    // float *ptr1 = &arr[0];
    // float *ptr2 = ptr1 + 3;
    // cout << *ptr2 << " ";
    // cout << ptr2 - ptr1;

    // Ques-29
    // char st[] = "ABCD";
    // for (int i = 0; st[i] != '\0'; i++)
    // {
    //     cout << st[i] << *(st) + i << *(i + st) << i[st];
    // }

    // Ques-30
    int c, *b, **a;
    c = 4;
    b = &c;
    a = &b;
    cout << f(c, b, a);

    return 0;
}