// #include <stdio.h>
// int waitingtime(int proc[], int n, int burst_time[], int wait_time[])
// {
//     wait_time[0] = 0;
//     for (int i = 1; i < n; i++)
//         wait_time[i] = burst_time[i - 1] + wait_time[i - 1];
//     return 0;
// }
// int turnaroundtime(int proc[], int n, int burst_time[], int wait_time[], int tat[])
// {
//     int i;
//     for (i = 0; i < n; i++)
//         tat[i] = burst_time[i] + wait_time[i];
//     return 0;
// }
// int avgtime(int proc[], int n, int burst_time[])
// {
//     int wait_time[n], tat[n], total_wt = 0, total_tat = 0;
//     int i;
//     waitingtime(proc, n, burst_time, wait_time);
//     turnaroundtime(proc, n, burst_time, wait_time, tat);
//     printf("Processes Burst Waiting Turn around \n");
//     for (i = 0; i < n; i++)
//     {
//         total_wt = total_wt + wait_time[i];
//         total_tat = total_tat + tat[i];
//         printf(" %d\t %d\t\t %d \t%d\n", i + 1, burst_time[i], wait_time[i], tat[i]);
//     }
//     printf("Average waiting time = %f\n", (float)total_wt / (float)n);
//     printf("Average turn around time = %f\n", (float)total_tat / (float)n);
//     return 0;
// }
// int main()
// {
//     int proc[] = {1, 2, 3};
//     int n = sizeof proc / sizeof proc[0];
//     int burst_time[] = {4, 7, 10};
//     avgtime(proc, n, burst_time);
//     printf("\n20DCE019-Yatharth Chauhan\n");
//     return 0;
// }


#include<stdio.h> 
void findWaitingTime(int processes[], int n, 
						int bt[], int wt[]) 
{ 
	wt[0] = 0; 
	for (int i = 1; i < n ; i++ ) 
		wt[i] = bt[i-1] + wt[i-1] ; 
}  
void findTurnAroundTime( int processes[], int n, 
				int bt[], int wt[], int tat[]) 
{ 
	// bt[i] + wt[i] 
	for (int i = 0; i < n ; i++) 
		tat[i] = bt[i] + wt[i]; 
} 
	 
void findavgTime( int processes[], int n, int bt[]) 
{ 
	int wt[n], tat[n], total_wt = 0, total_tat = 0; 
	findWaitingTime(processes, n, bt, wt); 
	findTurnAroundTime(processes, n, bt, wt, tat); 
	printf("Processes Burst time Waiting time Turn around time\n"); 
	for (int i=0; i<n; i++) 
	{ 
		total_wt = total_wt + wt[i]; 
		total_tat = total_tat + tat[i]; 
		printf(" %d ",(i+1)); 
		printf("	 %d ", bt[i] ); 
		printf("	 %d",wt[i] ); 
		printf("	 %d\n",tat[i] ); 
	} 
	int s=(float)total_wt / (float)n; 
	int t=(float)total_tat / (float)n; 
	printf("Average waiting time = %d",s); 
	printf("\n"); 
	printf("Average turn around time = %d ",t); 
} 
// Driver code 
int main() 
{ 
	//process id's 
	int processes[] = { 1, 2, 3}; 
	int n = sizeof processes / sizeof processes[0]; 
	int burst_time[] = {10, 5, 8}; 
	findavgTime(processes, n, burst_time); 
	return 0; 
}
