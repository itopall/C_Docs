#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int i, j;
int main_exit;
void menu(void);

struct date {
    int month, day, year;
};
struct {
    char name[60];
    int acc_no, age;
    char address[60];
    char citizenship[15];
    double phone;
    char acc_type[10];
    float amt;
    struct date dob;
    struct date deposite;
    struct date withdraw;
}add, upd, check, rem, transaction;

float interest(float t, float amount, int rate)
{
    float SI;
    SI = (rate * t * amount) / 100.0;
    return SI;
}

void fordelay(int j)
{
    int i, k;
    for (i = 0; i < j; i++)
        k = i;
}

void new_acc(void)
{
    int choice;
    FILE* ptr;

    ptr = fopen("record.dat", "+a");
account_no:
    system("cls");
    printf("\t\t\t\xB2\xB2\xB2 ADD RECORD \t\t\t\xB2\xB2\xB2");
    printf("\n\n\n Enter today's date(mm/dd/yyyy): ");
    scanf("%d%d%d", &add.deposite.month, &add.deposite.day, &add.deposite.year);
    printf("\nEnter the account number: ");
    scanf("%d", &check.acc_no);
    while (fscanf(ptr, "%d %s %d%d%d %d %s %lf %s %f %d%d%d\n", &add.acc_no, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.address, add.citizenship, &add.phone, add.acc_type, &add.deposite.month, &add.deposite.day, &add.deposite.year) != EOF)
    {
        if (check.acc_no == add.acc_no)
        {
            printf("Account no. already in use");
            fordelay(10000000000);
            goto account_no;
        }
    }
    add.acc_no = check.acc_no;
    printf("\nEnter the date of birth(mm/dd/yyyy): ");
    scanf("%d%d%d", &add.dob.month, &add.dob.day, &add.dob.year);
    printf("\nEnter the age: ");
    scanf("%d", &add.age);
    printf("\nEnter the address: ");
    scanf("%s", add.address);
    printf("\nEnter citizenship: ");
    scanf("%s", add.citizenship);
    printf("\nEnter the phone number: ");
    scanf("%lf", &add.phone);
    printf("\nEnter the amount to deposite: $");
    scanf("%f", &add.amt);
    printf("\nType of account:\n\t#Saving\n\t#Current\n\t#Fixed1(For 1 year)\n\t#Fixed2(For 2 years)\n\t#Fixed3(For 3 years)");
    scanf("%d", &add.acc_type);
    fprintf(ptr, "%d %s %d%d%d %d %s %lf %s %f %d%d%d\n", add.acc_no, add.name, add.dob.month, add.dob.day, add.dob.year, add.age, add.address, add.citizenship, add.phone, add.acc_type, add.deposite.month, add.deposite.day, add.deposite.year);
    fclose(ptr);
    printf("\nAccount created succesfully");
add_invalid:
    printf("\n\n\n\t\tEnter 1 to go to the main menu and 0 to exit: ");
    scanf("%d", &main_exit);
    system("cls");
    if (main_exit == 1)
        menu();
    else if (main_exit == 0)
        close();
    else
    {
        printf("\nInvalid!\a");
        goto add_invalid;
    }
}

void view_acc(void)
{
    FILE* view;
    view = fopen("record.dat", "r");
    int test = 0;
    printf("\nACC. NO.\tNAME\t\t\tADRESS\t\tPHONE");
    while (fscanf(view, "%d %s %d%d%d %d %s %s %lf %s %f %d%d%d", &add.acc_no, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.address, add.citizenship, &add.phone, add.acc_type, &add.amt, &add.deposite.month, &add.deposite.day, &add.deposite.year) != EOF)
    {
        printf("\n%6d\t %10s\t\t\t%10s\t\t%.0lf", add.acc_no, add.name, add.address, add.phone);
        test++;
    }
    fclose(view);
    if (test == 0)
    {
        system("cls");
        printf("\nNo Records\n");
    }
    view_is_invalid:
    printf("\n\nEnter 1 to go to the main menu and 0 to exit: ");
    scanf("%d", &main_exit);
    if (main_exit == 1)
        menu();
    else if (main_exit == 0)
        close();
    else
    {
        printf("\nInvalid\n");
        goto view_is_invalid;
    }
}
void edit(void)
{
    int choice, test = 0;
    FILE* old, * newrec;
    old = fopen("record.dat", "r");
    newrec = fopen("new.dat", "w");

    printf("\nEnter the account no. of the costumer whose info you want to change: ");
    scanf("%d", &upd.acc_no);
    while (fscanf(old, "%d %s %d%d%d %d %s %s %lf %s %f %d%d%d", &add.acc_no, add.name, &add.dob.month, &add.dob.day, &add.dob.year, &add.age, add.address, add.citizenship, &add.phone, add.acc_type, &add.amt, &add.deposite.month, &add.deposite.day, &add.deposite.year) != EOF)
    {
        if (upd.acc_no == add.acc_no)
        {
            test = 1;
            printf("\nWhich information do you want to change?\n1.Address\n2.Phone\n\nEnter your choice: ");
            scanf("%d", &choice);
            system("cls");
            if (1 == choice) {
                printf("Enter the new address");
                scanf("%s", upd.address);
                fprintf(newrec, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n", add.acc_no, add.name, add.dob.month, add.dob.day, add.dob.year, add.age, upd.address, add.citizenship, add.phone, add.acc_type, add.amt, add.deposite.month, add.deposite.day, add.deposite.year);
                system("cls");
                printf("Changes saved!");
            }
            else if (2 == choice)
            {
                printf("Enter the new phone: ");
                scanf("%lf", &upd.phone);
                fprintf(newrec, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n", add.acc_no, add.name, add.dob.month, add.dob.day, add.dob.year, add.age, upd.address, add.citizenship, add.phone, add.acc_type, add.amt, add.deposite.month, add.deposite.day, add.deposite.year);
                system("cls");
                printf("Changes saved!");
            }
            else
                fprintf(newrec, "%d %s %d/%d/%d %d %s %s %lf %s %f %d/%d/%d\n", add.acc_no, add.name, add.dob.month, add.dob.day, add.dob.year, add.age, upd.address, add.citizenship, add.phone, add.acc_type, add.amt, add.deposite.month, add.deposite.day, add.deposite.year);
        }
        fclose(old);
        fclose(newrec);
        remove("record.dat");
        rename("new.dat", "record.dat");

        if (test != 1)
        {
            system("cls");
            printf("\nRecord not found!");
        edit_invalid:
            printf("\nEnter 0 to try again, 1 to return to main menu and 2 to exit: ");
            scanf("%d", &main_exit);
            system("cls");
            if (0 == main_exit)
                edit();
            else if (1 == main_exit)
                menu();
            else if (2 == main_exit)
                close();
            else
            {
                printf("\nInvalid");
                goto edit_invalid;
            }
            
        }
        else
        {
            printf("\n\n\nEnter 1 to go to the main menu and 0 to exit: ");
            scanf("%d", &main_exit);
            if (0 == main_exit)
                menu();
            else
                close();
        }
    }
}

