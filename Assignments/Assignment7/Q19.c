#include <stdio.h>
#include <string.h>

#define MAX_ADDRESSES 100
#define MAX_NICKNAME_LENGTH 10

// Structure to store the IP address and nickname
typedef struct {
    int xx, yy, zz, mm;        // IP address parts
    char nickname[MAX_NICKNAME_LENGTH]; // Nickname of the machine
} address_t;

int scan_address(address_t addresses[]) {
    int count = 0;
    while (1) {
        // Input the IP address and nickname
        printf("Enter address (xx.yy.zz.mm nickname): ");
        scanf("%d.%d.%d.%d %s", &addresses[count].xx, &addresses[count].yy, &addresses[count].zz, &addresses[count].mm, addresses[count].nickname);

        // Check for the sentinel address
        if (addresses[count].xx == 0 && addresses[count].yy == 0 && addresses[count].zz == 0 && addresses[count].mm == 0 && strcmp(addresses[count].nickname, "none") == 0) {
            break;
        }

        count++;  // Increment the address count
        if (count >= MAX_ADDRESSES) {
            break;
        }
    }
    return count;
}

void print_address(address_t addresses[], int count) {
    printf("\nFull list of addresses and nicknames:\n");
    for (int i = 0; i < count; i++) {
        printf("%d.%d.%d.%d %s\n", addresses[i].xx, addresses[i].yy, addresses[i].zz, addresses[i].mm, addresses[i].nickname);
    }
}

int local_address(address_t addr1, address_t addr2) {
    return (addr1.xx == addr2.xx && addr1.yy == addr2.yy);
}

int main() {
    address_t addresses[MAX_ADDRESSES]; // Array to hold addresses
    int count = scan_address(addresses); // Read addresses and nicknames

    // Compare pairs of addresses to check for the same locality
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < count; j++) {
            if (local_address(addresses[i], addresses[j])) {
                printf("Machines %s and %s are on the same local network.\n", addresses[i].nickname, addresses[j].nickname);
            }
        }
    }

    // Print the full list of addresses and nicknames
    print_address(addresses, count);

    return 0;
}