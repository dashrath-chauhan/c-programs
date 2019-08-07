						//Inventory of items in a store

#include<stdio.h>

struct date {
	int dd;
	int mm;
	int yyyy;
};

struct details {
	char name[20];
	int qty;	
	float price;
	int code;
	struct date man_date;
	struct date exp_date;
};

int main(void) {
	struct details item[50];
	int i, new_item;
	int count=0, store_status;
	i = 0;

	do {	
		printf("Enter name of item: ");
		scanf("%s", item[i].name);
		printf("Enter quatity: ");
		scanf("%d", &item[i].qty);
		printf("Enter price: ");
		scanf("%f", &item[i].price);
		printf("Enter code: ");
		scanf("%d", &item[i].code);
		printf("Enter manufacture date (format: dd mm yyyy) : ");
		scanf("%d %d %d", &item[i].man_date.dd, &item[i].man_date.mm, &item[i].man_date.yyyy);
		printf("Enter expiry date (format: dd mm yyyy) : ");
		scanf("%d %d %d", &item[i].exp_date.dd, &item[i].exp_date.mm, &item[i].exp_date.yyyy);

		i++;
		if(count++);
			printf("\n*********** %d ITEM ADDED TO STORE ***********\n", count);

		printf("\nWant to add another item: (1 for yes 0 for no): ");
		scanf("%d", &new_item);
	}while(new_item==1);

	printf("Want to check your store(1 for yes 0 for no): ");
	scanf("%d", &store_status);

	if(store_status==1) {
		printf("\n*********** INVENTORY ***********\n");
		printf("-------------------------------------------------------------------------------------------------------------\n");
		printf("\tS.N.\tName\tCODE\tPrice\tQuantity\tMfg. Date\tExp. Date\n");
		printf("-------------------------------------------------------------------------------------------------------------\n");
		
		for(i=0; i<count; i++) {
			printf("\t%d\t %s\t %d\t %.2f\t %3d\t \t%d %d %d\t %d %d %d\t\n",
					i+1, item[i].name, item[i].code, item[i].price, item[i].qty,
					item[i].man_date.dd, item[i].man_date.mm, item[i].man_date.yyyy,
					item[i].exp_date.dd, item[i].exp_date.mm, item[i].exp_date.yyyy);
		}
		printf("-------------------------------------------------------------------------------------------------------------\n");
	} else {
		printf("\n*********** GOOD BYE ***********\n");
	}
	printf("\n*********** GOOD BYE ***********\n");
}
