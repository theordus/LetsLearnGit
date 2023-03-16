//vinfo_product
#include <stdio.h>
#include <string.h>

struct date
{
    int dd;
    int mm;
    int yyyy;
} ;
struct product_details
    {
        char pname[100];
        int quantity;
        float price;
        Date manufacturing_date;
        Date expiry_date;
    }p1;
int main()
{
    printf("Enter product name : ");
    scanf("%s",p1.pname);
    printf("Enter Quantity : ");
    scanf("%d",&p1.quantity);
    printf("Enter Price :");
    scanf("%f",&p1.price);
    printf("Enter manufacturing_date (dd/mm/yyyy)");
    scanf("%d%d%d",&p1.manufacturing_date.dd,&p1.manufacturing_date.mm,&p1.manufacturing_date.yyyy : );
    printf("Enter expiry_date (dd/mm/yyyy)");
    scanf("%d%d%d",&p1.expiry_date.dd,&p1.expiry_date.mm,&p1.expiry_date);
    return 0;
    
}


