#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[30];
    char phone[15];
} Contact;

void addContact(FILE *f)
{
    Contact c;
    printf("Enter name: ");
    scanf("%s", c.name);
    printf("Enter phone: ");
    scanf("%s", c.phone);
    fwrite(&c, sizeof(Contact), 1, f);
}

void viewContacts(FILE *f)
{
    Contact c;
    while (fread(&c, sizeof(Contact), 1, f))
    {
        printf("Name: %s, Phone: %s\n", c.name, c.phone);
    }
}

void deleteContact(FILE *f)
{
    FILE *temp = fopen("temp", "wb");
    Contact c;
    char name[30];
    printf("Enter the name of the contact to delete: ");
    scanf("%s", name);
    while (fread(&c, sizeof(Contact), 1, f))
    {
        if (strcmp(name, c.name) != 0)
        {
            fwrite(&c, sizeof(Contact), 1, temp);
        }
    }
    fclose(f);
    fclose(temp);
    remove("contacts");
    rename("temp", "contacts");
}

int main()
{
    FILE *f = fopen("contacts.csv", "ab+");
    int choice;
    do
    {
        printf("1. Add Contact\n2. View Contacts\n3. Delete Contact\n4. Exit\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            addContact(f);
            break;
        case 2:
            rewind(f);
            viewContacts(f);
            break;
        case 3:
            fclose(f);
            f = fopen("contacts.csv", "rb");
            deleteContact(f);
            f = fopen("contacts.csv", "ab+");
            break;
        }
    } while (choice != 4);
    fclose(f);
    return 0;
}
