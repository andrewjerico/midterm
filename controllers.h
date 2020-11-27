#include <stdio.h>
#include <stdlib.h>
#include "../model/models.h"


Node *createNode (Orang sakit){
    Node *temp = (Node*)malloc(sizeof(Node));
    
    temp->sakit.day = sakit.day;
    strcpy(temp->sakit.month , sakit.month);
    temp->sakit.year = sakit.year;
    strcpy(temp->sakit.name , sakit.name);
    temp->next = NULL;
    temp->prev = NULL;
    
    return temp;
}

void pushPQ(Orang sakit){
    Node *temp = createNode(sakit);
//    int tot =   (2020 - sakit.year) + bulan(sakit.month) + 
    if(!head){
        head = tail = temp;
    }
    else if(sakit.year < head->sakit.year){
        temp ->next = head;
        head ->prev = temp;
        head = temp;
    }
    else if(sakit.year > tail->sakit.year){
        temp ->prev = tail;
        tail ->next = temp;
        tail = temp;
    }
    else{
        Node *curr = head;

        while(curr && curr->next->sakit.year < temp->sakit.year){
            curr = curr->next;
        }

        curr->next->prev = temp;
        temp->next = curr->next;
        curr->next = temp;
        temp->prev = curr;
        
    }
}

void removePQ(){
    if(head && head==tail){ 
        head = tail = NULL;
        free(head);
    }
    else{ 
        Node *newHead = head ->next; 
        head->next = newHead->prev = NULL; 
        free(head);  
        head = newHead;  
    }
}

void print(){

    Node *curr = head;

    while(curr){
        printf("%d %s %d - %s\n", curr->sakit.day,curr->sakit.month,curr->sakit.year,curr->sakit.month);
        curr = curr->next;
    }

}