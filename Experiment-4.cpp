#include<stdio.h>
 int main()
{
    int bt[20],p[20],wt[20],tat[20],i,j,n,total=0,pos,temp;
    float avg_wt,avg_tat;
    printf("Enter number of process:  ");
    scanf("%d",&n);
    printf("Enter Burst Time:\n");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;         
    }
    for(i=0;i<n;i++)
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(bt[j]<bt[pos])
                pos=j;
        }
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
  
        temp=p[i];
        p[i]=p[pos];
        p[pos]=temp;
    }
    wt[0]=0;            
    for(i=1;i<n;i++)
    {
        wt[i]=0;
        for(j=0;j<i;j++)
            wt[i]+=bt[j];
  
        total+=wt[i];
    }
    avg_wt=(float)total/n;      
    total=0;
    for(i=0;i<n;i++)
    {
        tat[i]=bt[i]+wt[i];   
        total+=tat[i];
        printf("p%d:\tburst_time :%d\twaiting_time:%d\tprocess_end_time:%d\n",p[i],bt[i],wt[i],tat[i]);
    }
    avg_tat=(float)total/n;    
    printf("Average Waiting Time=%f\n",avg_wt);
    printf("Average Turnaround Time=%f\n",avg_tat);
}
![Screenshot (372)](https://user-images.githubusercontent.com/113841807/217590689-c7caa415-868d-4fb1-82a9-ff3806200a68.png)
![Screenshot (373)](https://user-images.githubusercontent.com/113841807/217590769-96c37e7d-0df1-44f9-a925-30891c274b88.png)
