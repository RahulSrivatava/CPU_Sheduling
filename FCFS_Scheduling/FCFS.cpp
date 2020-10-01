#include<bits/stdc++.h> 
#include<iostream>
#include<vector>
using namespace std ;
void wt(int n,int p[],int wt[])
{
    //int wt[n];
    wt[0]=0;
    for (int i = 1; i < n; i++)
    wt[i]=p[i-1]+wt[i-1];
    
    
}
void tat(int n,int p[],int wt[],int tat[])
{
    
    for(int i=0;i<n;i++)
    {
        tat[i]=p[i]+wt[i];

    }


}
int main()
{
    #ifndef ONLINE_JUDGE 

	// For getting input from input.txt file 
		freopen("input.txt", "r", stdin); 

	// Printing the Output to output.txt file 
		freopen("output.txt", "w", stdout); 

    #endif 
    int n;int ta_t[n],w_t[n];
    int p[n];
    //int v;

  // cout<<"Enter no of Process\n";
   cin>>n;
   //cout<<"Enter the Burst Time \n";
   for(int i=0;i<n;i++)
   {
       cin>>p[i];
       //p.push_back(v); }
   wt(n,p,w_t);
   tat(n,p,w_t,ta_t);
   cout<<"Process  "<<"Burst Time  "<<"Waiting Time " <<"Turn Around Time\n";
   int t_wt=0,t_tat=0;
   for (int i = 0; i < n; i++)
   {
       t_wt=w_t[i]+t_wt;
       t_tat=ta_t[i]+t_tat;
       cout<<"  "<<i+1<<"\t\t"<<p[i]<<"\t   " <<w_t[i]<<"\t\t"<<ta_t[i]<<endl;
       /* code */
   }
    /* This will print the average Waiting Time and Average Turn around Time*/
   cout<<"Average Waiting Time = "<<(float)t_wt/(float)n<<endl;
   cout<<"Average Turn Around Time = "<<(float)t_tat/(float)n; 
   
   return 0;

}
