#include <stdio.h>
#include <stdlib.h>
#define SIZE 10
struct Node {
    int key;
    int data;
};
struct Node* hashArray[SIZE];
int hashCode(int key) {
    return key % SIZE;
}
void insert(int key, int data) {
    struct Node *item = (struct Node*) malloc(sizeof(struct Node));
    item->data = data;
    item->key = key;
    int index = hashCode(key);
    while (hashArray[index] != NULL && hashArray[index]->key != -1) {
        ++index;
        index %= SIZE;
    }
    hashArray[index] = item;
}
int main() {
    int key, data;
    for (int i = 0; i < SIZE; i++) {
        hashArray[i] = NULL;
    }
    printf("Enter key and data to insert into the hash table:\n");
    for (int i = 0; i < SIZE; i++) {
        printf("Enter key: ");
        scanf("%d", &key);
        printf("Enter data: ");
        scanf("%d", &data);
        insert(key, data);
    }
    printf("Hash Table:\n");
    for (int i = 0; i < SIZE; i++) {
        if (hashArray[i] != NULL) {
            printf("Index: %d, Key: %d, Data: %d\n", i, hashArray[i]->key, hashArray[i]->data);
        } else {
            printf("Index: %d, NULL\n", i);
        }
    }
    return 0;
}

