#include <stdio.h>

#define TOLL_RATE 50

int processVehicle(char vehicleType[]) {
    static int totalVehicles = 0;
    static int totalRevenue = 0;

    totalVehicles++;
    totalRevenue += TOLL_RATE;

    printf("%s processed. Toll: %d PKR\n", vehicleType, TOLL_RATE);
    return totalRevenue;
}

int main(void) {
    int totalRevenue = 0;

    totalRevenue = processVehicle("Car");
    totalRevenue = processVehicle("Bus");
    totalRevenue = processVehicle("Truck");

    printf("\n--- Toll Plaza Collection Report ---\n");
    printf("Total vehicles: %d\n", totalRevenue / TOLL_RATE);
    printf("Total revenue: %d PKR\n", totalRevenue);

    return 0;
}