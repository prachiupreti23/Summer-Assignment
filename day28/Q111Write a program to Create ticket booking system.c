#include <stdio.h>

int main() {
    char name[50];
    int seats;
    float price = 250, total;

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Number of Seats: ");
    scanf("%d", &seats);

    total = seats * price;

    printf("\n----- Ticket Details -----\n");
    printf("Customer Name : %s\n", name);
    printf("Seats Booked  : %d\n", seats);
    printf("Total Amount  : %.2f\n", total);

    return 0;
}