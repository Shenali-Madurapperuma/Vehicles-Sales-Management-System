/* INTRODUCTION TO COMPUTER PROGRAMMING
   FINAL ASSIGNMENT

   M.A.S.MAHINSA
   AS2019438
   AS95334
*/

#include <stdio.h>
#include <stdlib.h>

//function prototypes
int mainmenu();
void close();
void enterLoadDetails();
void enterUnloadDetails();
void displayLoad_UnloadRecord();
void salesDetails();
void stock();
void salesProgress();
void salesProgressGraph(int num,int total);
void delay(int x);

//structure definition
struct detail
 {
     char salesmanName[20];
     int salesmanID;
     char date[10];
     int vehicleNo;
     int item1Quantity;
     int item2Quantity;
     int item3Quantity;
     int item4Quantity;
     int item5Quantity;

 };
//main function
int main()
{
    char pass[10],password[10] = "#XYZ*2020";
    int k;
    int mainExit;


    printf("\n\n\n\n\n\t\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1");
    printf("\n\n\n\n\n\t\t\t\t\tXYZ DISTRIBUTORS\n\n\n");
    printf("\n\n\n\n\t\t\t\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1\xB1");
    delay(10000000000000);

    system("cls");
    printf("\n\n\n\n\n\t\t\t\t\tENTER PASSWORD :");
    scanf("%s",pass);

    if(strcmp(pass,password) == 0)
    {
         printf("\n\n\t\tPassword Match !\n\n\n\t\tPlease wait...!\n\t\tLOADING\n\n\t\t");
        for(k=0; k<10; k++)
        {
            delay(1000000000);
            printf("\xDB");
        }
       system("cls");
       printf("\n\n\n\t\tWELCOME TO THE XYZ DISTRIBUTORS RECORD SYSTEM :::::");

       system("cls");
       mainmenu();
    }
    else
    {
        printf("\n\n\tWrong Password!!\n\n");

        verificationAttempt:

            printf("\nEnter 1 to Try Again and 0 to Exit ...");
            scanf("%d",&mainExit);

            if(mainExit==1)
            {
                system("cls");
                main();
            }
            else if(mainExit==0)
            {
                system("cls");
                close();
            }
            else
            {
                system("cls");
                printf("\n\n\n\tINVALID INPUT....???");
                goto verificationAttempt;
            }
    }

    return 0;
}


//Delay function
void delay(int x)
{
    int i,j;
    for(i=0; i<x; i++)
        j = i;
}

//close function(exit from the system)
void close(void)
{
    int i;

    system("cls");

    printf("\n\n\t\t\tLOADING,PLEASE WAIT\n\n\t\t\t");//loading for close the program
    for(i=0; i<10; i++)
    {
        delay(100000000);
        printf("\xDB");
    }
    system("cls");
    //exiting from program
    printf("\n\n\n\n\n\n\t\t\t\t\xFE \xFE \xFE \xFE \xFE \xFE \xFE \xFE THANK YOU \xFE \xFE \xFE \xFE \xFE \xFE \xFE \xFE\n\n\n\n\n\n\n");
    printf("\t\t==================================================================================\n\n\n\n");
    printf("\t\t\tCSC 107 2.0 INTRODUCTION TO COMPUTER PROGRAMMING\n\n");
    printf("\t\t\tFINAL ASSIGNMENT : 2020\n\n");
    printf("\t\t\tM.A.S.MAHINSA\n\n");
    printf("\t\t\tAS2019438\n\n\n\n");
    printf("\t\t==================================================================================\n\n\n\n");
    delay(10000000);
}
//Main menu function
int mainmenu()
{
    system("cls");

    int choice;
    int mainExit;

    printf("\n\n\n\n\t\t\t*************************************************\n");
    printf("\t\t\t*************************************************\n\n\n\n");
    printf("\t\t\t\t\t MAIN MENU\n");
    printf("\n\n\n\n\t\t\t*************************************************\n");
    printf("\t\t\t*************************************************\n\n");

    printf("\n\n\n\n\t----------------------------------------------------------------------\n\n\n\n");
    printf("\t\t\t (01)- Enter Loading Details of items \n\n");
    printf("\t\t\t (02)- Enter Unloading Details of items\n\n");
    printf("\t\t\t (03)- View loading and unloading records\n\n");
    printf("\t\t\t (04)- View Stock record\n\n");
    printf("\t\t\t (05)- Sales Progress \n\n");
    printf("\t\t\t (06)- View sales record\n\n");
    printf("\t\t\t (07)- Exit From The System\n\n\n\n ");
    printf("\t----------------------------------------------------------------------\n\n\n\n");


   //chose the activity that user needed:
   printf("\n\n\t\tEnter your choice[1-7]:");
   scanf("%d",&choice);

  switch(choice)
{
    case 1:
        system("cls");
        enterLoadDetails();//to the loading details
        break;
    case 2:
        system("cls");
        enterUnloadDetails();//to the unloading details
        break;
   case 3:
        system("cls");
        displayLoad_UnloadRecord();//to the display loading and unloading report
        break;
   case 4:
        system("cls");
        stock();//to the stock report
        break;
   case 5:
        system("cls");
        salesProgress();//to the sales progress
        break;
   case 6:
        system("cls");
        salesDetails();//to the sales record function
        break;
   case 7:
        system("cls");
        close();//to the close function(exit from system)
        break;

     default:
            system("cls");
            printf("\n\t\tINVALID CHOICE.....???");
            printf("\n\n\nEnter 1 to go back to Main menu or Enter 0 to Exit :");
            scanf("%d",&mainExit);

            if(mainExit==1)
            {
                system("cls");
                mainmenu();
            }
            else if(mainExit==0)
            {
                system("cls");
                close();
            }
            else
            {
                system("cls");
                printf("\n\n\n\tINVALID INPUT....???");
            }
            break;
    }
return 0;

}

//load function
//input : load detail(sales man name,id,vehicle no,items quantity)
//output : load details file
void enterLoadDetails()
{
     struct detail load;//the structure for the loading details:

     printf("\n\n\n\n\t\t\t*************************************************\n");
     printf("\t\t\t*************************************************\n\n\n\n");
     printf("\t\t\t\tLOADING DETAILS");
     printf("\n\n\n\n\t\t\t*************************************************\n");
     printf("\t\t\t*************************************************\n\n");

     printf("\n\n\n\n\t\t\tENTER DATE [DD/MM/YYYY] :\n\n\t\t\t\t");
     scanf("%s",load.date);

     //enter the loading details:
     printf("\n\n\n\n\t----------------------------------------------------------------------\n\n\n\n");
     printf("\tEnter Salesman Name [EX:A.B.PERERA] :");
     scanf(" %s",load.salesmanName);
     printf("\n\tEnter Salesman ID no [2020**] :");
     scanf(" %d",&load.salesmanID);
     printf("\n\tEnter Vehicle Number :");
     scanf(" %d",&load.vehicleNo);
     printf("\n\t\t> Quantity of Vehicle Item 1 :");
     scanf(" %d",&load.item1Quantity);
     printf("\n\t\t> Quantity of Vehicle Item 2 :");
     scanf(" %d",&load.item2Quantity);
     printf("\n\t\t> Quantity of Vehicle Item 3 :");
     scanf(" %d",&load.item3Quantity);
     printf("\n\t\t> Quantity of Vehicle Item 4 :");
     scanf(" %d",&load.item4Quantity);
     printf("\n\t\t> Quantity of Vehicle Item 5 :");
     scanf(" %d",&load.item5Quantity);
     printf("\n\n\n\n\t----------------------------------------------------------------------\n\n\n\n");

    FILE *file1;
    file1=fopen("loadRecord.txt","a+");// open load record file in read/append mode

    //check the file1 exist
     if(file1==NULL)
     {
         printf("\nFile not found\n");

     }

//printing load details for loadRecord file

     fprintf(file1,"\n\n%s\n\n\t%s\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n\n",load.date,load.salesmanName,load.salesmanID,load.vehicleNo,load.item1Quantity,load.item2Quantity,load.item3Quantity,load.item4Quantity,load.item5Quantity);
//close the file
    fclose(file1);

     //exit from load function
     exit:
            system("cls");
            int mainExit;

            printf("\n\n\t\tRECORDINGS ADDED SUCCESSFULLY..!");
            printf("\n\n\nEnter 1 to go back to Main menu or Enter 0 to Exit :");
            scanf("%d",&mainExit);

            if(mainExit==1)
            {
                system("cls");
                mainmenu();
            }
            else if(mainExit==0)
            {
                system("cls");
                close();
            }
            else
            {
                system("cls");
                printf("\n\n\n\tINVALID INPUT....???");
                goto exit;
            }

}

//unload function
//input : unload detail(sales man name,id,vehicle no,items quantity)
//output :  unload details file
void enterUnloadDetails()

{
    struct detail unload;//structure for the unloading details:

    printf("\n\n\n\n\t\t\t*************************************************\n");
    printf("\t\t\t*************************************************\n\n\n\n");
    printf("\t\t\t\tUNLOADING DETAILS\n");
    printf("\n\n\n\n\t\t\t*************************************************\n");
    printf("\t\t\t*************************************************\n\n");
    printf("\n\n\n\n\t\tEnter Date : \n\n");
    scanf("%s",unload.date);


         //enter unloading details
    printf("\n\n\n\n\t----------------------------------------------------------------------\n\n\n\n");
    printf("\n\tEnter Salesman Name [EX:A.B.PERARA] :");
    scanf("%s",unload.salesmanName);
    printf("\n\tEnter Salesman ID no [2020**] :");
    scanf("%d",&unload.salesmanID);
    printf("\n\tEnter Vehicle Number :");
    scanf("%d",&unload.vehicleNo);
    printf("\n\t\t> Quantity of Vehicle Item 1 :");
    scanf(" %d",&unload.item1Quantity);
    printf("\n\t\t> Quantity of Vehicle Item 2 :");
    scanf(" %d",&unload.item2Quantity);
    printf("\n\t\t> Quantity of Vehicle Item 3 :");
    scanf(" %d",&unload.item3Quantity);
    printf("\n\t\t> Quantity of Vehicle Item 4 :");
    scanf(" %d",&unload.item4Quantity);
    printf("\n\t\t> Quantity of Vehicle Item 5 :");
    scanf(" %d",&unload.item5Quantity);
    printf("\n\n\n\n\t----------------------------------------------------------------------\n\n\n\n");

    FILE *file2;
    file2=fopen("unloadRecord.txt","a+");//open unload record file read/append mode
        //check file exist
     if(file2==NULL)
     {
         printf("\nFile not found\n");

     }

 //printing unloading details to the unloadRecord file
    fprintf(file2,"\n\n%s\n\n\t%s\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n\n",unload.date,unload.salesmanName,unload.salesmanID,unload.vehicleNo,unload.item1Quantity,unload.item2Quantity,unload.item3Quantity,unload.item4Quantity,unload.item5Quantity);

//close the file
    fclose(file2);

     //exit from unload function
     exit:
            system("cls");
            int mainExit;

            printf("\n\n\t\tRECORDINGS ADDED SUCCESSFULLY..!");
            printf("\n\n\nEnter 1 to go back to Main menu or Enter 0 to Exit :");
            scanf("%d",&mainExit);

            if(mainExit==1)
            {
                system("cls");
                mainmenu();
            }
            else if(mainExit==0)
            {
                system("cls");
                close();
            }
            else
            {
                system("cls");
                printf("\n\n\n\tINVALID INPUT....???");
                goto exit;
            }
}

//sales function
//input: load details & unload details
//output: sales report
void salesDetails()
{
    FILE *file3;
        file3=fopen("loadRecord.txt","r");//open load record file read mode
    FILE *file4;
       file4=fopen("unloadRecord.txt","r");//open unload record file read mode
    FILE* filept1;
        filept1 = fopen("salesRecord.txt","a+");// open sales record file in read/append mode

    //check file3 exist
    if(file3==NULL)
     {
         printf("\nFile not found\n");
     }
     //check file4 exist
    if(file4==NULL)
     {
         printf("\nFile not found\n");
     }
     //check the file1 exist
    if(filept1==NULL)
     {
      printf("\nFile not found\n");
     }

   struct detail load;//structure for load details
   struct detail unload;//structure for unload details

    printf("\n\n\n\n\t\t\t*************************************************\n");
    printf("\t\t\t*************************************************\n\n\n\n");
    printf("\t\t\t\tSALES RECORD");
    printf("\n\n\n\n\t\t\t*************************************************\n");
    printf("\t\t\t*************************************************\n\n");

    printf(" \xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n");
    printf(" \xB3Salesman\xB3Vehicle\xB3       LOAD QUANTITY              \xB3           UNLOAD QUANTITY        \xB3Total load\xB3Total unload\xB3Total \xB3\n");
    printf(" \xB3        \xB3       \xB3__________________________________\xB3__________________________________\xB3          \xB3            \xB3      \xB3\n");
    printf(" \xB3   ID   \xB3NO:    \xB3item 1\xB3item 2\xB3item 3\xB3item 4\xB3item 5\xB3item 1\xB3item 2\xB3item 3\xB3item 4\xB3item 5\xB3 quantity \xB3 quantity   \xB3sales \xB3\n");
    printf(" \xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n");

   int sumLoadOfItem1=0;
   int sumLoadOfItem2=0;
   int sumLoadOfItem3=0;
   int sumLoadOfItem4=0;
   int sumLoadOfItem5=0;

   int sumUnloadOfItem1=0;
   int sumUnloadOfItem2=0;
   int sumUnloadOfItem3=0;
   int sumUnloadOfItem4=0;
   int sumUnloadOfItem5=0;

   int total_Load_itemsQty=0;
   int total_Unload_itemsQty=0;
   int total_Sales_itemsQty=0;

    while( !feof(file3))
    {
      while(!feof(file4))
       { //scan or read details of the files
         fscanf(file3,"\n\n%s\n\n\t%s\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n\n",&load.date,&load.salesmanName,&load.salesmanID,&load.vehicleNo,&load.item1Quantity,&load.item2Quantity,&load.item3Quantity,&load.item4Quantity,&load.item5Quantity);
         fscanf(file4,"\n\n%s\n\n\t%s\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n\n",&unload.date,&unload.salesmanName,&unload.salesmanID,&unload.vehicleNo,&unload.item1Quantity,&unload.item2Quantity,&unload.item3Quantity,&unload.item4Quantity,&unload.item5Quantity);

         int sumLoadQtyOfVehicle=0;
         int sumUnloadQtyOfVehicle=0;
         int salesQtyOfVehicle=0;

         if(load.salesmanID == unload.salesmanID && load.vehicleNo == unload.vehicleNo)
           {
                    sumLoadOfItem1 = sumLoadOfItem1 + load.item1Quantity;//total of item 1 quantity when loading
                    sumLoadOfItem2 = sumLoadOfItem2 + load.item2Quantity;//total of item 2 quantity when loading
                    sumLoadOfItem3 = sumLoadOfItem3 + load.item3Quantity;//total of item 3 quantity when loading
                    sumLoadOfItem4 = sumLoadOfItem4 + load.item4Quantity;//total of item 4 quantity when loading
                    sumLoadOfItem5 = sumLoadOfItem5 + load.item5Quantity;//total of item 5 quantity when loading

                    total_Load_itemsQty = sumLoadOfItem1+sumLoadOfItem2+sumLoadOfItem3+sumLoadOfItem4+sumLoadOfItem5;//total quantity of the five items when loading

                    sumUnloadOfItem1 = sumUnloadOfItem1 + unload.item1Quantity;//total of item 1 quantity when unloading
                    sumUnloadOfItem2 = sumUnloadOfItem2 + unload.item2Quantity;//total of item 2 quantity when unloading
                    sumUnloadOfItem3 = sumUnloadOfItem3 + unload.item3Quantity;//total of item 3 quantity when unloading
                    sumUnloadOfItem4 = sumUnloadOfItem4 + unload.item4Quantity;//total of item 4 quantity when unloading
                    sumUnloadOfItem5 = sumUnloadOfItem5 + unload.item5Quantity;//total of item 5 quantity when unloading

                    total_Unload_itemsQty = sumUnloadOfItem1+sumUnloadOfItem2+sumUnloadOfItem3+sumUnloadOfItem4+sumUnloadOfItem5;//total quantity of the five items when unloading

                    total_Sales_itemsQty = total_Load_itemsQty- total_Unload_itemsQty;

                    //calculate total quantity according to the sale man id no
                   //total of loading quantity
                   sumLoadQtyOfVehicle = load.item1Quantity+load.item2Quantity+load.item3Quantity+load.item4Quantity+load.item5Quantity;
                  //total of unloading quantity
                   sumUnloadQtyOfVehicle = unload.item1Quantity+unload.item2Quantity+unload.item3Quantity+unload.item4Quantity+unload.item5Quantity;
                  //total of sales quantity
                   salesQtyOfVehicle = sumLoadQtyOfVehicle - sumUnloadQtyOfVehicle;
                   fprintf(filept1,"\n\n%s\n\n\t%d\t\t%d\t\t%d\t\t%d\n\n\n",load.date,load.salesmanID,sumLoadQtyOfVehicle,sumUnloadQtyOfVehicle,salesQtyOfVehicle);


                printf(" \xB3 %5d  \xB3%4d   \xB3%5d \xB3%5d \xB3%5d \xB3%5d \xB3%5d \xB3%5d \xB3%5d \xB3%5d \xB3%5d \xB3%5d \xB3%8d  \xB3%8d    \xB3%5d \xB3\n",load.salesmanID,load.vehicleNo,load.item1Quantity,load.item2Quantity,load.item3Quantity,load.item4Quantity,load.item5Quantity,unload.item1Quantity,unload.item2Quantity,unload.item3Quantity,unload.item4Quantity,unload.item5Quantity,sumLoadQtyOfVehicle,sumUnloadQtyOfVehicle,salesQtyOfVehicle);
            }


        }
   }
     printf(" \xC0\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC1\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xB4\n");

     printf("      TOTAL       \xB3%5d \xB3%5d \xB3%5d \xB3%5d \xB3%5d \xB3%5d \xB3%5d \xB3%5d \xB3%5d \xB3%5d \xB3%8d  \xB3%8d    \xB3%5d \xB3\n",sumLoadOfItem1,sumLoadOfItem2,sumLoadOfItem3,sumLoadOfItem4,sumLoadOfItem5,sumUnloadOfItem1,sumUnloadOfItem2,sumUnloadOfItem3,sumUnloadOfItem4,sumUnloadOfItem5,total_Load_itemsQty,total_Unload_itemsQty,total_Sales_itemsQty);
     printf("\t\t\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n");
     printf("\t\t\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n");

      //close files
     fclose(file3);
     fclose(file4);
     fclose(filept1);

    int mainExit;
     exit:
            printf("\n\n\t\tRECORDINGS ADDED SUCCESSFULLY..!");
            printf("\n\n\nEnter 1 to go back to Main menu or Enter 0 to Exit :");
            scanf("%d",&mainExit);

            if(mainExit==1)
            {
                system("cls");
                mainmenu();
            }
            else if(mainExit==0)
            {
                system("cls");
                close();
            }
            else
            {
                system("cls");
                printf("\n\n\n\tINVALID INPUT....???");
                goto exit;
            }
}

 //stock function
 //input : loading & unloading details
 //output : sales details and table
 void stock()
 {
   FILE *file3;
      file3=fopen("loadRecord.txt","r");//open load record file read mode
   FILE *file4;
      file4=fopen("unloadRecord.txt","r");//open unload record file rad mode
         //check exist of file3
       if(file3==NULL)
         {
         printf("\nFile not found\n");
         }
         //check exist of file4
       if(file4==NULL)
         {
         printf("\nFile not found\n");
         }
         FILE *filept2;
              filept2 =fopen("stockRecord.txt","a+");//open stock record file read/append mode
         //check exist of file3
            if(filept2==NULL)
            {
               printf("\nFile not found\n");
             }

   struct detail load;//structure of loading details
   struct detail unload;//structure of unloading details

    int stockitem1Quantity;
    int stockitem2Quantity;
    int stockitem3Quantity;
    int stockitem4Quantity;
    int stockitem5Quantity;
    int sumStockQty=0;

   int sumLoadOfItem1=0;
   int sumLoadOfItem2=0;
   int sumLoadOfItem3=0;
   int sumLoadOfItem4=0;
   int sumLoadOfItem5=0;

   int sumUnloadOfItem1=0;
   int sumUnloadOfItem2=0;
   int sumUnloadOfItem3=0;
   int sumUnloadOfItem4=0;
   int sumUnloadOfItem5=0;

   int sumLoadQty=0;
    int sumUnloadQty=0;
    int updateStockQty=0;
    int newStockQty=0;



    printf("\n\n\n\n\t\t\t*************************************************\n");
    printf("\t\t\t*************************************************\n\n\n\n");
    printf("\t\t\t\tSTOCK RECORD");
    printf("\n\n\n\n\t\t\t*************************************************\n");
    printf("\t\t\t*************************************************\n\n\n\n");

    printf("\n\n\tEnter quantity of item 1 in the stock :");
    scanf("%d",&stockitem1Quantity);
    printf("\n\n\tEnter quantity of item 2 in the stock :");
    scanf("%d",&stockitem2Quantity);
    printf("\n\n\tEnter quantity of item 3 in the stock :");
    scanf("%d",&stockitem3Quantity);
    printf("\n\n\tEnter quantity of item 4 in the stock :");
    scanf("%d",&stockitem4Quantity);
    printf("\n\n\tEnter quantity of item 5 in the stock :");
    scanf("%d",&stockitem5Quantity);

    sumStockQty = stockitem1Quantity+stockitem2Quantity+stockitem3Quantity+stockitem4Quantity+stockitem5Quantity;
    printf("\n\n\n\tTotal quantity of the 5 items in the stock :  %d",sumStockQty);


    printf("\n\n\n\n\t\t\t*************************************************\n");
    printf("\t\t\t*************************************************\n\n\n\n");
    printf("\t\t\t\tSTOCK REPORT");
    printf("\n\n\n\n\t\t\t*************************************************\n");
    printf("\t\t\t*************************************************\n\n\n\n");

     printf("\t\t \xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xC\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n");
     printf("\t\t \xB3                 \xB3  item 1 \xB3  item 2 \xB3  item 3 \xB3  item 4 \xB3  item 5 \xB3Total Qty\xB3\n");
     printf("\t\t \xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xC\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n");


     printf("\t\t \xB3      stock      \xB3%8d \xB3%8d \xB3%8d \xB3%8d \xB3%8d \xB3%8d  \xB3\n",stockitem1Quantity,stockitem2Quantity,stockitem3Quantity,stockitem4Quantity,stockitem5Quantity,sumStockQty);
     printf("\t\t \xC3\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xB4\n");

      while( !feof(file3))
    {
      while(!feof(file4))
       { //scan or read details of the files
         fscanf(file3,"\n\n%s\n\n\t%s\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n\n",&load.date,&load.salesmanName,&load.salesmanID,&load.vehicleNo,&load.item1Quantity,&load.item2Quantity,&load.item3Quantity,&load.item4Quantity,&load.item5Quantity);
         fscanf(file4,"\n\n%s\n\n\t%s\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n\n",&unload.date,&unload.salesmanName,&unload.salesmanID,&unload.vehicleNo,&unload.item1Quantity,&unload.item2Quantity,&unload.item3Quantity,&unload.item4Quantity,&unload.item5Quantity);

         if(load.salesmanID == unload.salesmanID && load.vehicleNo == unload.vehicleNo)
           {
                    sumLoadOfItem1 = sumLoadOfItem1 + load.item1Quantity;//total of item 1 quantity when loading
                    sumLoadOfItem2 = sumLoadOfItem2 + load.item2Quantity;//total of item 2 quantity when loading
                    sumLoadOfItem3 = sumLoadOfItem3 + load.item3Quantity;//total of item 3 quantity when loading
                    sumLoadOfItem4 = sumLoadOfItem4 + load.item4Quantity;//total of item 4 quantity when loading
                    sumLoadOfItem5 = sumLoadOfItem5 + load.item5Quantity;//total of item 5 quantity when loading

                    sumUnloadOfItem1 = sumUnloadOfItem1 + unload.item1Quantity;//total of item 1 quantity when unloading
                    sumUnloadOfItem2 = sumUnloadOfItem2 + unload.item2Quantity;//total of item 2 quantity when unloading
                    sumUnloadOfItem3 = sumUnloadOfItem3 + unload.item3Quantity;//total of item 3 quantity when unloading
                    sumUnloadOfItem4 = sumUnloadOfItem4 + unload.item4Quantity;//total of item 4 quantity when unloading
                    sumUnloadOfItem5 = sumUnloadOfItem5 + unload.item5Quantity;//total of item 5 quantity when unloading


                    //calculate total quantity according to the sale man id no
                   //total of loading quantity
                   sumLoadQty = load.item1Quantity+load.item2Quantity+load.item3Quantity+load.item4Quantity+load.item5Quantity;
                  //total of unloading quantity
                   sumUnloadQty = unload.item1Quantity+unload.item2Quantity+unload.item3Quantity+unload.item4Quantity+unload.item5Quantity;
                  //total of sales quantity
                   updateStockQty = sumLoadQty - sumUnloadQty;

                   newStockQty = sumStockQty - updateStockQty;


           }
        }
    }
                   printf("\n\n\n\n\n\t\t \xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n");
                   printf("\t\t \xB3                 \xB3  TOTAL LODED ITEM QTY \xB3  TOTAL UNLOADED ITEM QTY \xB3 TOTAL QTY\xB3\n");
                   printf("\t\t \xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n");


                   printf("\t\t \xB3   New Stock     \xB3      %8d         \xB3       %8d           \xB3      %8d \xB3\n",sumLoadQty,sumUnloadQty,newStockQty);
                  printf("\t\t \xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n");
             fprintf(filept2,"\n\n\t%d\n\n\t%d\t\t%d\n\t%d\n\n",sumStockQty,sumLoadQty,sumUnloadQty,newStockQty);
//close files
  fclose(file3);
  fclose(file4);
  fclose(filept2);
  int mainExit;

  exit:
            printf("\n\n\nEnter 1 to go back to Main menu or Enter 0 to Exit :");
            scanf("%d",&mainExit);

            if(mainExit==1)
            {
                system("cls");
                mainmenu();
            }
            else if(mainExit==0)
            {
                system("cls");
                close();
            }
            else
            {
                system("cls");
                printf("\n\n\n\tINVALID INPUT....???");
                goto exit;

            }
 }

//sales progress function
//input : sales details
//output : sales progress graph
void salesProgress()
{
    printf("\n\n\n\n\t\t\t*************************************************\n");
    printf("\t\t\t*************************************************\n\n\n\n");
    printf("\t\t\t\tSALES PROGRESS");
    printf("\n\n\n\n\t\t\t*************************************************\n");
    printf("\t\t\t*************************************************\n\n\n\n");

    struct detail load;//structure of load
    //open sales record file read mode
    FILE *filept1;
        filept1=fopen("salesRecord.txt","r");

    //check exist of filept1
    if(filept1==NULL)
     {
         printf("\nFile not found\n");
     }
       int sumLoadQtyOfVehicle=0;
       int sumUnloadQtyOfVehicle=0;
       int salesQtyOfVehicle=0;

       while( !feof(filept1))
        {
          //scan or read sales record
          fscanf(filept1,"\n\n%s\n\n\t%d\t\t%d\t\t%d\t\t%d\n\n\n",&load.date,&load.salesmanID,&sumLoadQtyOfVehicle,&sumUnloadQtyOfVehicle,&salesQtyOfVehicle);

          salesProgressGraph(load.salesmanID,salesQtyOfVehicle);

       }

//close file
    fclose(filept1);
    int mainExit;

     exit:

            printf("\n\n\nEnter 1 to go back to Main menu or Enter 0 to Exit :");
            scanf("%d",&mainExit);

            if(mainExit==1)
            {
                system("cls");
                mainmenu();
            }
            else if(mainExit==0)
            {
                system("cls");
                close();
            }
            else
            {
                system("cls");
                printf("\n\n\n\tINVALID INPUT....???");
                goto exit;
            }
}

//salesman graph function
//input = sales total
//output : sales progress graph
void salesProgressGraph(int num,int total)
{
    int percentage;
    int i;

    printf("\n\n\n");
    percentage=total/100;

    printf("SALESMAN");
    printf(" ID NO");
    printf("\t\xFE %d|\t",num);
    //create the bar chart:
    for(i=0;i<percentage;i++)
    {
        printf("\xDB");
    }

    printf(" {%d}",total);

    printf("\n\n");
}

//display load and unload details
//input : loading and unloading details
//output : load and unload details tables
void displayLoad_UnloadRecord()
 {
     //open load record and unload record read mode
     FILE *file3;
       file3=fopen("loadRecord.txt","r");
     FILE *file4;
       file4=fopen("unloadRecord.txt","r");

        if(file3==NULL)
    {
         printf("\nFile not found\n");

     }
      if(file4==NULL)
     {
         printf("\nFile not found\n");

     }
//structures of loading and unloading details
   struct detail load;
   struct detail unload;
   char date[10];

     printf("\n\n\n\n\t\t\t*************************************************\n");
     printf("\t\t\t*************************************************\n\n\n\n");
     printf("\t\t\t\tLOADING REPORT");
     printf("\n\n\n\n\t\t\t*************************************************\n");
     printf("\t\t\t*************************************************\n\n");

     printf(" \t\t\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n");
     printf(" \t\t\xB3Salesman\xB3Vehicle\xB3    LOADED ITEMS QUANTITY         \xB3Total load\xB3\n");
     printf(" \t\t\xB3        \xB3       \xB3__________________________________\xB3          \xB3\n");
     printf(" \t\t\xB3   ID   \xB3NO:    \xB3item 1\xB3item 2\xB3item 3\xB3item 4\xB3item 5\xB3 quantity \xB3 \n");
     printf(" \t\t\xC3\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xB4\n");

  while( !feof(file3))
   {
      int sumLoadItemQty=0;
     //scan or read load record file
      fscanf(file3,"\n\n%s\n\n\t%s\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n\n",load.date,load.salesmanName,&load.salesmanID,&load.vehicleNo,&load.item1Quantity,&load.item2Quantity,&load.item3Quantity,&load.item4Quantity,&load.item5Quantity);
     //total of load quantities
      sumLoadItemQty = load.item1Quantity+load.item2Quantity+load.item3Quantity+load.item4Quantity+load.item5Quantity;

       printf(" \t\t\xB3 %5d  \xB3%4d   \xB3%5d \xB3%5d \xB3%5d \xB3%5d \xB3%5d \xB3%8d  \xB3\n",load.salesmanID,load.vehicleNo,load.item1Quantity,load.item2Quantity,load.item3Quantity,load.item4Quantity,load.item5Quantity,sumLoadItemQty);
    }
   printf(" \t\t\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n");
   printf("\n\n\n\t\t\tDate : %s ",load.date);

     printf("\n\n\n\n\t\t\t*************************************************\n");
     printf("\t\t\t*************************************************\n\n\n\n");
     printf("\t\t\t\tUNLOADING REPORT");
     printf("\n\n\n\n\t\t\t*************************************************\n");
     printf("\t\t\t*************************************************\n\n");

     printf(" \t\t\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n");
     printf(" \t\t\xB3Salesman\xB3Vehicle\xB3   UNLOADED ITEMS QUANTITY        \xB3  Total   \xB3\n");
     printf(" \t\t\xB3        \xB3       \xB3__________________________________\xB3  unload  \xB3\n");
     printf(" \t\t\xB3   ID   \xB3NO:    \xB3item 1\xB3item 2\xB3item 3\xB3item 4\xB3item 5\xB3 quantity \xB3 \n");
     printf(" \t\t\xC3\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC5\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xC4\xB4\n");

    while(!feof(file4))
     {
       int sumUnloadItemQty=0;
       //scan or read unload record file
        fscanf(file4,"\n\n%s\n\n\t%s\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n\n",unload.date,unload.salesmanName,&unload.salesmanID,&unload.vehicleNo,&unload.item1Quantity,&unload.item2Quantity,&unload.item3Quantity,&unload.item4Quantity,&unload.item5Quantity);
      //total of unload quantities
        sumUnloadItemQty = unload.item1Quantity+unload.item2Quantity+unload.item3Quantity+unload.item4Quantity+unload.item5Quantity;

        printf(" \t\t\xB3 %5d  \xB3%4d   \xB3%5d \xB3%5d \xB3%5d \xB3%5d \xB3%5d \xB3%8d  \xB3\n",unload.salesmanID,unload.vehicleNo,unload.item1Quantity,unload.item2Quantity,unload.item3Quantity,unload.item4Quantity,unload.item5Quantity,sumUnloadItemQty);
     }
    printf(" \t\t\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\xCD\n");

    printf("\n\n\n\t\t\tDate : %s ",unload.date);

  //close files
   fclose(file3);
   fclose(file4);
   int mainExit;

       exit:
            printf("\n\n\nEnter 1 to go back to Main menu or Enter 0 to Exit :");
            scanf("%d",&mainExit);

            if(mainExit==1)
            {
                system("cls");
                mainmenu();
            }
            else if(mainExit==0)
            {
                system("cls");
                close();
            }
            else
            {
                system("cls");
                printf("\n\n\n\tINVALID INPUT....???");
                goto exit;

            }
 }

