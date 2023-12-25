#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Welcome to the Contact Manager.\n");
    printf("Below is the list of the various instructions you can give: \n");
    printf("Enter \"1\" to add a contact.\n");
    printf("Enter \"2\" to view contacts.\n");
    printf("Enter \"3\" to delete a contact.\n");
    printf("Enter \"4\" to exit.\n");

    int option;
    char name[30], phone[10], c;
    FILE *fp;
    char ch;

    fprintf(fp, "Name, Class\n");

    printf("Enter command: ");
    scanf("%d", &option);

    do
    {

        switch (option)
        {
        case 1:

            printf("Add a contact\n");
            printf("\n");

            fp = fopen("Contacts.csv", "a");
            if (fp == NULL)
            {
                printf("Error! Cannot open the file.");
                exit(1);
            }

            // if (count == 1)
            //     fprintf(fp, "Name , Contact \n");

            while ((getchar()) != '\n')
                ; // clear input buffer

            printf("Enter name: ");
            fgets(name, sizeof(name), stdin);
            name[strcspn(name, "\n")] = 0; // remove newline at the end

            printf("Enter Phone Number: ");
            fgets(phone, sizeof(phone), stdin);
            phone[strcspn(phone, "\n")] = 0; // remove newline at the end

            fprintf(fp, "%s, %s\n", name, phone);

            fclose(fp);
            printf("Contacts saved successfully!");
            break;

        case 2:
            printf("View contacts list\n");
            printf("\n");

            fp = fopen("Contacts.csv", "r");
            if (fp == NULL)
            {
                printf("Error! File not found.");
                exit(2);
            }

            printf("Below is the complete contact list;\n");

            while ((ch = fgetc(fp)) != EOF)
            {
                printf("%c", ch);
            }
            fclose(fp);
            break;

        case 3:
            printf("Delete a contact\n");
            printf("\n");

            FILE *ft;
            char line[100];

            fp = fopen("Contacts.csv", "r");
            if (fp == NULL)
            {
                printf("Error! File not found.");
                exit(2);
            }

            ft = fopen("temp.csv", "w");
            char delName[30];
            printf("Enter the contact name to be deleted: ");
            scanf(" %[^\n]s", delName);

            while (fgets(line, sizeof(line), fp))
            {
                sscanf(line, "%[^,]s", name);
                if (strcmp(delName, name) != 0)
                    fputs(line, ft);
            }
            fclose(fp);
            fclose(ft);
            remove("Contacts.csv");
            rename("temp.csv", "Contacts.csv");
            printf("Contact deleted successfully!");

            break;

        case 4:
            printf("Thanks You for using!");
            break;

        default:
            break;
        }

        printf("\nEnter y/n to continue/exit: ");
        scanf("%c", &c);

    } while (c == 'y');
    
    return 0;
}
