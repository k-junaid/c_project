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

void acceptAll(){
    for(int i=0; i<SIZE-1; i++){
    //UI logic: accepting input from user
    printf("Enter Medicine ID %d\n:",i+1);
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

void showAll(){
    printf("\n All Medicines Details:\n");
    for(int i=0;i<SIZE-1;i++){
    printf("medId:%d\n",medicines[i].medID);
    printf("name:%s\n",medicines[i].name);
    printf("category:%s\n",medicines[i].category);
    printf("price:%f\n",medicines[i].price);
    printf("quantity:%d\n",medicines[i].quantity);
    printf("\n");
    }
}

void show(int index){
    printf("\n All Medicines Details:\n");
    printf("medId:%d\n",medicines[index].medID);
    printf("name:%s\n",medicines[index].name);
    printf("category:%s\n",medicines[index].category);
    printf("price:%f\n",medicines[index].price);
    printf("quantity:%d\n",medicines[index].quantity);
    printf("\n");
}

void update(int index){
    printf("\n Update Existing %d th Medicines details:\n",index+1);
    printf("Enter new medID: ");
    scanf("%d",&medicines[index].medID);
    printf("Enter new name: ");
    scanf("%s", medicines[index].name);
    printf("Enter new catagory: ");
    scanf("%s",medicines[index].category);
    printf("Enter Medicine Price:");
    scanf("%f",&medicines[index].price);
    printf("Enter Medicine Quantity:");
    scanf("%d",&medicines[index].quantity);
    printf("\n");
}


void remove(int index){

    printf("\n Delete Existing %d th Medicine details\n", index+1);
    medicines[index].medID=0;
    medicines[index].name[0]='0';
    medicines[index].category[0]='0';
    medicines[index].price=0;
    medicines[index].quantity=0;

}



int main(){
    int choice;
    while(1){
        printf("\n Medical Store Application System\n");
        printf("===================================\n");
        printf("Enter 1 to Add new medicine:\n");
        printf("Enter 2 to View medicine:\n");
        printf("Enter 3 to Update medicine:\n");
        printf("Enter 4 to Delete medicine:\n");
        printf("Enter 5 to Exit\n");
        printf("Enter ur choices(1-5):");
        scanf("%d",&choice);

        switch (choice){
            case 1: acceptAll(); break;
            case 2: showAll(); break;
            case 3: update(2); break;
            case 4: remove(1); break;
            case 5: return 0;
            default: printf("Invalid choice\n");
        }


    }
}