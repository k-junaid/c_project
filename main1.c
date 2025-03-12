//header  files including
#include<stdio.h>

//macro definition
#define MAX 50
#define SIZE 5

//type declarartion
struct Medicine{
     int medID;
    char name[100];
    char category[50];
    float price;
    int quantity;
};

//global variables
struct Medicine medicines[SIZE];            //ARRARY OF 3 MEDICINES

void acceptInput(){                         //function created
    for(int i=0; i<SIZE-1;i++){
    //UI logic: accepting input from user
    printf("Enter Medicine ID:");
    scanf("%d",&medicines[i].medID);        //& is used coz uh didnt given the size in struct 
    printf("Enter Medicine Name:");
    scanf("%s",medicines[i].name);
    printf("Enter Medicine Category:");
    scanf("%s",medicines[i].category);
    printf("Enter Medicine Price:");
    scanf("%f",&medicines[i].price);
    printf("Enter Medicine Quantity:");
    scanf("%d",&medicines[i].quantity);
    printf("\n");
    }
}

void displayOutput(){

    for(int i=0;i<SIZE-1;i++){
    printf("medId:%d\n",medicines[i].medID);
    printf("name:%s\n",medicines[i].name);
    printf("category:%s\n",medicines[i].category);
    printf("price:%f\n",medicines[i].price);
    printf("quantity:%d\n",medicines[i].quantity);
    printf("\n");
    }
}

int main(){

    acceptInput();
    displayOutput();
    return 0;
}