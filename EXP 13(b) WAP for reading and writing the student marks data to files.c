#include <stdio.h>
int main()
{
   FILE*fp;
   int n,i;
   printf("enter the number of students:");
   scanf("%d",&n);
   int marks[n][4];
   fp=fopen("file.txt","w");
   for(i=0;i<n;i++)
   {
    printf("enter marks of students %d:",i+1);
    scanf("%d%d%d%d",&marks[i][0],&marks[i][1],&marks[i][2],&marks[i][3]);
    fprintf(fp,"%d %d %d %d\n",marks[i][0],marks[i][1],marks[i][2],marks[i][3]);}
    fclose(fp);
    fp=fopen("file.txt","r");
    for(i=0;i<n;i++)
    {
        fscanf(fp,"%d%d%d%d\n",&marks[i][0],&marks[i][1],&marks[i][2],&marks[i][3]);
        printf("marks of student%d:%d %d %d %d\n",i+1,marks[i][0],marks[i][1],marks[i][2],marks[i][3]);
    }
   fclose(fp);
    return 0;
}
