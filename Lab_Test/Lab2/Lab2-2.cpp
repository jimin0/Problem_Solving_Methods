#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAX 10
#define MAX_VALUE 150
#define MIN_VALUE 0

void read_data(float* arr, int* num, const char* name) { // arr: array, num: the number of data, name: file name
    FILE* myinFile;
    myinFile = fopen(name, "r");
    if (myinFile == NULL) {
        printf("\nCould not open %s!\n", name);
    }
    for (int i = 0; i < MAX; i++) {
        fscanf(myinFile, "%f", &arr[i]);
        num++;
    }
    fclose(myinFile);
}

void update_value(float* arr, int num, float weight) { // arr: array, num: the number of data, weight: value to be multiplied
    for (int i = 0; i < MAX; i++) {
        arr[i] *= weight;
    }
}

void write_data(float* src, int num, const char* name) { // src: array, num: the number of data, name: file name
    FILE* myoutFILE;
    myoutFILE = fopen(name, "w");
    for (int i = 0; i < MAX; i++) {
        fprintf(myoutFILE,"%.2f ", src[i]);
    }
    fclose(myoutFILE);
}

void calc_ave(float* arr, int num, float* min, float* max, float* average) { // arr: array, num: the number of data, min: min value, max: max value, average: average value
    float sum = 0;
    *min = arr[0];
    *max = arr[0];
    // min Ã£±â
    for (int i = 1; i < MAX; i++) {
        if (*min > arr[i]) {
            *min = arr[i];
        }
        if (*max < arr[i]) {
            *max = arr[i];
        }
    }
    for (int i = 0; i < MAX; i++) {
        sum += arr[i];
    }
    sum = sum - *min - *max;
    *average = sum / (MAX - 2);

}
void main() {

    float arr[MAX] = { 0.0 };
    int num = 0;
    float min, max, average;

    // read data
    read_data(arr, &num, "sample_v1.txt");

    // update and write data
    update_value(arr, num, 1.5);
    write_data(arr, num, "sample_v2.txt");

    // read data 
    read_data(arr, &num, "sample_v2.txt");

    // caculate the average without min, max value
    calc_ave(arr, num, &min, &max, &average);

    // print the average, min, max values
    printf("The average=%f (min=%f max=%f excluded)\n", average, min, max);
}
