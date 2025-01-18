#include<stdio.h>
#include<string.h>
struct Book{
    char name[50];
    char writer[50];
    float price;

};
int main()
{
    struct Book book1,book2,book3;

    printf("Enter 1st book Title: ");
    scanf("%s", book1.name);

    printf("Enter 1st Writer Name: ");
    scanf("%s", book1.writer);

    printf("Enter 1st Book Price: ");
    scanf("%f", &book1.price);

    printf("\n");

    //printf 1st book information
    printf("Details of 1st Book : \n");
    printf("Title: %s\nWriter: %s\nPrice: %.2f", book1.name, book1.writer, book1.price);

    printf("\n");

    printf("\nEnter 2nd book Title: ");
    scanf("%s", book2.name);

    printf("Enter 2nd Writer Name: ");
    scanf("%s", book2.writer);

    printf("Enter 2nd Book Price: ");
    scanf("%f", &book2.price);

    //printf 2nd book information
    printf("\n");

    printf("Details of 2nd Book : \n");
    printf("Title: %s\nWriter: %s\nPrice: %.2f", book2.name, book2.writer, book2.price);

    printf("\n");


    printf("\nEnter 3rd book Title: ");
    scanf("%s", book3.name);

    printf("Enter 3rd Writer Name: ");
    scanf("%s", book3.writer);

    printf("Enter 3rd Book Price: ");
    scanf("%f", &book3.price);

    //printf 2nd book information

    printf("\n");

    printf("Details of 3rd Book : \n");
    printf("Title: %s\nWriter: %s\nPrice: %.2f", book3.name, book3.writer, book3.price);

    printf("\n");

    if(book1.price>book2.price && book1.price>book3.price)
    {
        printf("Highest Price Book: %s\n", book1.name);
    }
    else if(book2.price>book3.price)
    {
        printf("Highest Price Book : %s\n", book2.name);
    }
    else{
        printf("Highest Price Book : %s\n", book3.name);
    }



    return 0;

}
