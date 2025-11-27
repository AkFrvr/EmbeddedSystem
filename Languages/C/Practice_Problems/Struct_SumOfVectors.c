#include<stdio.h>

//Define a vector
typedef struct {
    int x;
    int y;
} Vector;

int main(){

    Vector *v[2]; 
    Vector sum; 

    // Allocate memory for the vectors
    for(int i = 0; i < 2; i++){
        v[i] = (Vector *)malloc(sizeof(Vector));
        if(v[i] == NULL){
            printf("Memory allocation failed\n");
            return 1;
        }
    }

    // Input the coordinates of the vectors
    printf("Enter the x and y coordinates of the first vector: ");
    scanf("%d %d", &v[0]->x, &v[0]->y);

    printf("Enter the x and y coordinates of the second vector: ");
    scanf("%d %d", &v[1]->x, &v[1]->y);

    // Calculate the sum of the vectors
    sum.x = v[0]->x + v[1]->x;
    sum.y = v[0]->y + v[1]->y;

    // Print the sum of the vectors
    printf("The sum of the vectors is: (%d, %d)\n", sum.x, sum.y);

    // Free the allocated memory
    free(v[0]);
    free(v[1]);

    return 0;


}