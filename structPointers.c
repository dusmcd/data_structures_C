#include <stdio.h>
#include <stdlib.h>

struct item {
    char *itemName;
    int quantity;
    float price;
    float amount;
};

void readItem(struct item *newItem);
void printItem(struct item *someItem);

int main(void) {
    struct item someItem;
    struct item *itemPointer = &someItem;

    someItem.itemName = (char*) malloc(20 * sizeof(char));
    readItem(itemPointer);
    someItem.amount = someItem.quantity * someItem.price;

    printItem(itemPointer);

    free(someItem.itemName);
    someItem.itemName = NULL;
    return 0;
}

void readItem(struct item *newItem) {
    printf("Enter in new item (item name, quantity, and price) separated by space:\n");
    scanf("%s %d %f", newItem->itemName, &newItem->quantity, &newItem->price);

    return;
}

void printItem(struct item *someItem) {
    printf("Item name: %s\nQuantity: %d\nPrice: %.2f\nTotal: %.2f\n",
          someItem->itemName, someItem->quantity, someItem->price, someItem->amount);
}