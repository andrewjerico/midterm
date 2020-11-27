#include<stdio.h>
#include<string.h>

struct Orang{
    int day;
    char month[30];
    int year;
    char name[30];
};

struct Node{
    Orang sakit;

    Node *next;
    Node *prev;

} *head, *tail;