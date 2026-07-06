#include <stdio.h>
int main()
{
    char first;
    int price, quantity;

    printf("Enter the first letter in uppercase = ");
    scanf(" %c", &first);

    if (first == 'P' || first == 'T' || first == 'C' || first == 'O')
    {
        switch(first)
        {
        case 'P':
        case 'p':
            printf("Price per kg = 60 Tk./kg");
            break;
        case 'T':
        case 't':
            printf("Price per kg = 120 Tk./kg");
            break;
        case 'C':
        case 'c':
            printf("Price per kg = 90 Tk./kg");
            break;
        case 'O':
        case 'o':
            printf("Price per kg = 80 Tk./kg");
            break;
        }
    }
    else
    {
        printf("Invalid vegetable selection");
        return 0;
    }
    printf("\nHow many kilograms you want to purchase? ");
    scanf("%d", &quantity);
    if (first == 'P')
    {
        price = 60 * quantity;
        printf("Potato\nPrice per kg = 60\nQuantity = %d kgs\nTotal payable amount = %d", quantity, price);
        return 0;
    }
    else if (first == 'T')
    {
        price = 120 * quantity;
        printf("Tomato\nPrice per kg = 120\nQuantity = %d kgs\nTotal payable amount = %d", quantity, price);
        return 0;
    }
    else if (first == 'C')
    {
        price = 90 * quantity;
        printf("Carrot\nPrice per kg = 90\nQuantity = %d kgs\nTotal payable amount = %d", quantity, price);
        return 0;
    }
    else
        price = 80 * quantity;
    printf("Onion\nPrice per kg = 80\nQuantity = %d kgs\nTotal payable amount = %d", quantity, price);

return 0;
}

