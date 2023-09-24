#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define MAX 10
#define NUM_HOBBY 4
#define MAX_AGE 100

struct PERSON {
    char name[20];
    int age;
    char hobby[20];
};
const char* hobby[NUM_HOBBY] = { "swim","music","poker","movie" };

void read_data(struct PERSON* person, int* num, const char* name) {
    FILE* myinFILE;

    myinFILE = fopen(name, "r");
    if (myinFILE == NULL) {
        printf("Could not open %s", name);
    }
    while ((fscanf(myinFILE, "%s %d %s", &person[num].name, &person[num].age, &person[num].hobby)) != EOF){
        num++;
    }
    fclose(myinFILE);
}

void print_out(struct PERSON* a, int num) {
    int x, y;
    struct PERSON tmp;
    for (x = 0; x < num - 1; x++) {
        for (y = num - 1; y > x; y--) {
            if (strcmp(a[y - 1].hobby, a[y].hobby > 0)) {
                tmp = *a[y-1];
                *a[y-1] = *a[y];
                *a[y] = tmp;
            }
        }
    }
    
    for (int i = 0; i < NUM_HOBBY; i++) {
        printf("%s group=============\n",hobby[i]);
        int min = MAX_AGE;
        for (int j = 0; j < 2; j++) {

        }
         printf("The min age is %d\n\n",min );
    }
}

void main() {
    int count = 0;
    struct PERSON person[MAX];

    // read data from person.txt
    read_data(person, &count, "person.txt");

    // get and the print the lowest age in the group
    print_out(person, count);
}
