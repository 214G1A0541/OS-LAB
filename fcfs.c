#inculde<stdio.h>
int main()
{
	int tat[20],wt[20],bt[20],i,n;
	float wtavg,tatavg;
	print("\nEnter the number of process--");
	scanf("%d",&n);
	for(i=0,i<=n,i++)
	{
		printf("\n Enter burst time for process--",i+1);
		scanf("%d",&bt[i]);
	}
	wt[0]=wtavg[0]=0;
	tat[0]=tatavg[0]=bt[0];
	for(i=1;i<=n;i++)
	{ 
		wt[i]=wt[i-1]+bt[i-1];
		tat[i]=tat[i-1]+bt[i];
	        wtavg=wtavg+wt[i];
	        tatavg=tatavg+tat[i];
	}
	printf("\t PROCESS \t BURST TIME \t TURN AROUND TIME\n");
	for(i=1;i<n;i++)
	{
		printf("\n \t p%d\t\t%d\t\t%d\t\t%d",i,bt[i],wt[i],tat[i]);
		printf("\n  Average waiting time--%f",wtavg\n);
		printf("\n  Average Turn around time--%f",tatavg\n);
	}
	getch();
}
