#include<stdio.h>
int main()
{
    //this is test comment from subhash.
    //this is another comment.
    int arr[3][3];
    int i,j,row,sum;
    int min;
    printf("Enter the elements:\n");
    scanf ("%d%d",&i,&j);
    for (i=0;i<=2;i++)
    {

        min =arr[i][0];
        for (j=0;j<3;j++)
        {
        if (arr[i][j]<min);
        }
        printf ("Min:%d\n",min);
    }
}
