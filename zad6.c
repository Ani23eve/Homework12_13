#include <stdio.h>

void bubbleSort(int*  pArray, size_t len );

int main(){
    int* len;
    len=(int*)malloc(sizeof(int));
    

    printf("Enter your elements: ");
    scanf("%d",&len);


    printf("Enter your numbers: ");

    for(int i=0;i<len;i++){
        scanf("%d", &len[i]);    

    bubbleSort(arr, len);

    printf("Array after implementing bubble sort: ");    
          for(int i = 0; i < len; i++){

                 printf("%d  ", arr[i]);
          }
    }

    return 0;
}


void bubbleSort(int*  pArray, size_t len ){
    int temp;
   for (int i = 0; i < len-1; i++){
       for (int j = 0; j < len-1 ; j ++){
            if(pArray[j] > pArray[j + 1]){

                temp = pArray[j];

                pArray[i] = pArray[j + 1];

                pArray[j + 1] = temp; 
       
       }
    }
   }
}
