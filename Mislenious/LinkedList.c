#include<stdio.h>
#include<stdlib.h>

void createNode();
void deleteNode();
void showNode();

struct Node{
    int data;
    struct Node* next;
};

struct Node* head = NULL;

int main(){
    int choice;
    while(1){
        printf("1 - Insert Node\n2 - Delete Node\n3 - Show Node\nEnter Choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1: createNode();
                    break;
            case 2: deleteNode();
                    break;
            case 3: showNode();
                    break;
            case 4: exit(0);
        }
    }
    return 0;
}

void createNode(){
    struct Node* temp = head;
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));

    if(head == NULL){
        head = newNode;
    }
    else{
        while(temp!=NULL){
            temp = temp->next;
        }
    }
    temp = newNode;
    printf("Enter value of Data: ");    scanf("%d", &newNode->data);
    newNode->next = NULL;

    printf("Node inserted successfully!\n");
}

void deleteNode(){

}

void showNode(){
    struct Node* temp = head;
    printf("Data: ");
    while(temp!=NULL){
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}