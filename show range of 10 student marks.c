// program to read the marks of 10 students and show the range of Frequency

#include<stdio.h>
void main(){
    int marks[20],i;
    int group[10] = {0};
    printf("\n Enter the marks of 10 students: ");
    for(i=0;i<10;i++){
        printf("\n MARKS[%d] = ",i+1);
        scanf("%d",&marks[i]);
        ++group[(int) (marks[i]) / 10];
    }

    printf("\n\n************************************");
    printf("\n GROUP \t\t FREQUENCY");
    for(i=0;i<10;i++){
        printf("\n %d \t\t %d",i+1,group[i]);
    }
}
