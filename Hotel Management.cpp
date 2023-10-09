#include <iostream>
#include <cstdio>
#include <limits>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>
#include <dos.h>
#include <windows.h>
using namespace std;

typedef struct Info
{
    char name[20];
    char NID[20];
    char Address[20];
    char Mobile[20];
    char Roomstatus[20];
    //int age;
    int roomNumber;
} Info;
int n, cnt = 0;
Info Customer[100000];

void BookRoom();
void RoomInfo();
void ViewServiceInfo();
void ViewCustomerInfo();
void ExtendReservation();
void DeleteReservation();
void ViewAllRecords();
void ShowTime();
void DateTime();

int main( )
{
    ShowTime();
    DateTime();
    system("color 3e");
    printf("\n\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\t\t\xdb                                               \xdb\n");
    printf("\t\t\xdb       =============================           \xdb\n");
    printf("\t\t\xdb           Welcome to our project              \xdb\n");
    printf("\t\t\xdb       =============================           \xdb\n");
    printf("\t\t\xdb                                               \xdb\n");
    printf("\t\t\xdb           HOTEL MANAGEMENT SYSTEM             \xdb\n");
    printf("\t\t\xdb                                               \xdb\n");
    printf("\t\t\xdb                                               \xdb\n");
    printf("\t\t\xdb                                               \xdb\n");
    printf("\t\t\xdb                                               \xdb\n");
    printf("\t\t\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\xdb\n");
    printf("\n\n\t\tEnter any key to continue!");
    getch();
    system("cls");
    printf("\n\n\n");
    printf("\t _____________________________________________________________\n");
    printf("\t|                     ->Team Members<-                        |\n");
    printf("\t|_____________________________________________________________|\n");
    printf("\t|       Name                  |    ID                         |\n");
    printf("\t|_____________________________|_______________________________|\n");
    printf("\t|Sourav Halder                | 201-15-14220                  |\n");
    printf("\t|_____________________________|_______________________________|\n");
    printf("\t|Israk Jahan Luba             | 201-15-13855                  |\n");
    printf("\t|_____________________________|_______________________________|\n");
    printf("\t|Sumaiya Pias Trisha          | 201-15-14058                  |\n");
    printf("\t|_____________________________|_______________________________|\n");
    printf("\t|AKM Rafiuzzaman              | 201-15-14222                  |\n");
    printf("\t|_____________________________|_______________________________|\n\n\n");
    printf("\tEnter any key to continue!");
    getch();
    system("cls");

    int choice;
    do
    {
        system("cls");
        printf("\n\n\n");
        printf(" \t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2  MENU  \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");
        printf(" \t\xDB\xDB\xDB\xDB\xB2 1. Book A New Room       \n \n ");//Done
        printf(" \t\xDB\xDB\xDB\xDB\xB2 2. View Room Info        \n \n ");//Done
        printf(" \t\xDB\xDB\xDB\xDB\xB2 3. View Service Info     \n \n ");//Done
        printf(" \t\xDB\xDB\xDB\xDB\xB2 4. View Customer Info    \n \n ");//Done
        printf(" \t\xDB\xDB\xDB\xDB\xB2 5. Extend Reservation    \n \n ");//Done
        printf(" \t\xDB\xDB\xDB\xDB\xB2 6. Delete Reservation    \n \n ");//Done
        printf(" \t\xDB\xDB\xDB\xDB\xB2 7. View All Records      \n \n");//Done
        printf(" \t\xDB\xDB\xDB\xDB\xB2 8. Close Application     \n \n ");
        printf(" \t\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\n\n");


        fflush(stdin);
        printf("\tEnter your choice:");
        scanf("%d", &choice);
        switch(choice)
        {

        case 1:
        {
            system("cls");
            printf("\n\n\n");
            BookRoom();
            printf("\tEnter any key to continue!" );
            getch();

            break;
        }
        case 2:
        {

            system("cls");
            printf("\n\n\n");
            RoomInfo();
            printf("\tEnter any key to continue!" ) ;
            getch();

            break;
        }
        case 3:
        {
            system("cls");
            ViewServiceInfo();
            printf("\tEnter any key to continue!" ) ;
            getch();

            break;
        }
        case 4:
        {
            system("cls");
            ViewCustomerInfo();
            printf("\tEnter any key to continue!" ) ;
            getch();

            break;
        }
        case 5:
        {
            system("cls");
            ExtendReservation();
            printf("\tEnter any key to continue!" ) ;
            getch();

            break;
        }
        case 6:
        {
            system("cls");
            DeleteReservation();
            printf("\tEnter any key to continue!" ) ;
            getch();

            break;
        }
        case 7:
        {
            system("cls");
            ViewAllRecords();
            printf("\tEnter any key to continue!" ) ;
            getch();

            break;
        }
        case 8:
        {
            printf("\n\tExiting from the program");

            break;
        }
        default :
        {
            printf("\tWrong key\n\n\n");
        }
        }
    }
    while(choice != 8);

    return 0;
}

void BookRoom()
{
    printf("\tEnter the number of guest info want to add for book a room:");
    scanf("%d", &n);
    Customer[n];
    for(int i = 0 ; i < n ; i++)
    {
        cnt++;
        getchar();
        printf("\n\n\n\tEnter your information:\n\n");
        printf("\tEnter your name:");
       // getchar();
        gets(Customer[i].name);
        printf("\tEnter your NID:");
       // getchar();
        gets(Customer[i].NID);
        printf("\tEnter your Address:");
        //getchar();
        gets(Customer[i].Address);
        printf("\tEnter your Mobile:");
        //getchar();
        gets(Customer[i].Mobile);
        printf("\tEnter your Room status:");
        //getchar();
        gets(Customer[i].Roomstatus);
        //printf("\tEnter your Age:");
        //scanf("%d", &Customer[i].age);
        printf("\tEnter your Room Number:");
        scanf("%d", &Customer[i].roomNumber);
        printf("\n\n\n");
        //getchar();


    }

}
void ViewCustomerInfo()
{
    bool flag = false;
    int r;
    printf("\n\n\n\tEnter the room number you want the customer info:");
    scanf("%d", &r);
    for(int i = 0 ; i < n ; i++)
    {
        if(Customer[i].roomNumber==r)
        {
            flag = true;
            printf("\tName: %s\n", Customer[i].name);
            printf("\tNID: %s\n", Customer[i].NID);
            printf("\tAddress: %s\n", Customer[i].Address);
            printf("\tMobile: %s\n", Customer[i].Mobile);
            printf("\tRoom status: %s\n", Customer[i].Roomstatus);
            //printf("\tAge:%d\n", Customer[i].age);
            printf("\tRoom Number: %d\n", Customer[i].roomNumber);
            break;
        }
    }
    if(!flag)
        printf("\tNot Found!\n\n\n");
}
void ViewAllRecords()
{
    for(int i = 0 ; i < n ; i++)
    {
        printf("\n\n\n\tInfo of customer %d:\n", i+1);
        printf("\tName: %s\n", Customer[i].name);
        printf("\tNID: %s\n", Customer[i].NID);
        printf("\tAddress: %s\n", Customer[i].Address);
        printf("\tMobile: %s\n", Customer[i].Mobile);
        printf("\tRoom status: %s\n", Customer[i].Roomstatus);
        //printf("\tAge:%d\n", Customer[i].age);
        printf("\tRoom Number: %d\n", Customer[i].roomNumber);
    }
}
void RoomInfo()
{
    printf("\n\n\n\tThere are lots of facilities you can have in our hotel room sir.\n\tHere is the list:\n\t1.Minimum size of bedroom excluding bathroom is 200 sq. ft\n\t2.Air-conditioning should be done on 100% of Rooms\n\t3.A clean change of bed and bath linen daily & between check-in.");
    printf("\n\t4.Minimum bed width for a single 90 cm and double 180 cm.\n\t5.Mattress minimum 10 cm thickness.\n\t6.Minimum bedding 2 sheets, pillow & case, blanket, mattress protector/bed cover.\n\t7.A wastepaper basket in the room.\n\t8.Telephone with direct dialling and intercom.\n\n\n");
    printf("\n\tTotal booked: %d\n", cnt);
    printf("\n\tBooked Rooms are:\n");
    for(int i = 0 ; i < n ; i++)
    {
        printf("\n\n\n\tBooking status with its room numbers:\n");
        printf("\tRoom Number: %d\n", Customer[i].roomNumber);
        printf("\tRoom status: %s\n", Customer[i].Roomstatus);
    }

}
void ViewServiceInfo()
{
    printf("\n\n\n\tHere is our service information sir:\n");

    printf("\tRequired Bathroom Facilities.\n");
    printf("\tPublic Area Facilities.\n");
    printf("\tRoom And Other Facilities For The Differently Abled Guest.\n");
    printf("\tRequired Kitchen Facilities.\n");
    printf("\tRequired Staff Qualifications, Skills and staff welfare.\n");
    printf("\tSafety and Security Facilities.\n");
}
void ExtendReservation()
{
    printf("\n\tDo you want to extend reservation?\n");
    printf("\n\t1.Yes\n");
    printf("\n\t2.No\n");
    printf("\n\tPlease sir enter your choice:");
    int choice;

    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
    {
        //system("cls");
        int day;
        printf("\n\tHow many days sir you want to extend?\n");
        printf("\t");
        scanf("%d", &day);
        printf("\n\tSuccessfully extended your reservation for %d days.\n", day);
        break;
    }
    case 2:
    {

        bool flag = false;
        int rn;
        printf("\n\tEnter your room number sir for the deletion purpose:");
        scanf("%d", &rn);
        for(int i = 0 ; i < n ; i++)
        {
            if(rn==Customer[i].roomNumber)
            {
                flag = true;
                for(int j = 0 ; j < n-1 ; j++)
                {
                    Customer[j].roomNumber = Customer[j+1].roomNumber;
                    delete Customer[i].name, Customer[i].Address, Customer[i].NID, Customer[i].Mobile, Customer[i].Roomstatus;
                }
                n--;
                cnt--;
                // track = i;
            }
        }
        if(!flag)
            printf("\n\tWrong room number sir!\n");
        else
        {
            printf("\n\tSuccessfully deleted the reservation!\n");
            //printf("\n\tRoom number %d Customer's are deleted their reservation!\n", Customer[track].roomNumber);
        }

        break;
    }
    }

}
void DeleteReservation()
{
    bool flag = false;
    int rn;
    printf("\n\tEnter your room number sir for the deletion purpose:");
    scanf("%d", &rn);
    for(int i = 0 ; i < n ; i++)
    {
        if(rn==Customer[i].roomNumber)
        {
            flag = true;
            for(int j = 0 ; j < n-1 ; j++)
            {
                Customer[j].roomNumber = Customer[j+1].roomNumber;
                delete Customer[i].name, Customer[i].Address, Customer[i].NID, Customer[i].Mobile, Customer[i].Roomstatus;
            }
            n--;
            cnt--;
            // track = i;
        }
    }
    if(!flag)
        printf("\n\tWrong room number sir!\n");
    else
    {
        printf("\n\tSuccessfully deleted the reservation!\n");
        //printf("\n\tRoom number %d Customer's are deleted their reservation!\n", Customer[track].roomNumber);
    }

}
void AltEnter(void)
{
    keybd_event(VK_MENU,
                0x38,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                0,
                0);
    keybd_event(VK_RETURN,
                0x1c,
                KEYEVENTF_KEYUP,
                0);
    keybd_event(VK_MENU,
                0x38,
                KEYEVENTF_KEYUP,
                0);
    return;
}
void ShowTime(void)
{
    AltEnter();
    system("COLOR 1F");


    return;
}
void DateTime(void)
{
    printf("\n");
    printf("\n");
    printf("\n");
    printf("                ");
    printf(__DATE__);
    printf("       ");
    printf(__TIME__);
    printf("\n");
    printf("\n");
    return;
}
