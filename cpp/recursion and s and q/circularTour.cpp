{
#include<bits/stdc++.h>
using namespace std;
struct petrolPump
{
    int petrol;
    int distance;
};
int tour(petrolPump [],int );
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        petrolPump p[n];
        for(int i=0;i<n;i++)
            cin>>p[i].petrol>>p[i].distance;
        cout<<tour(p,n)<<endl;
    }
}

}
/*This is a function problem.You only need to complete the function given below*/
/*
The structure of petrolPump is 
struct petrolPump
{
    int petrol;
    int distance;
};*/
/*You are required to complete this method*/
int tour(petrolPump p[],int n) {  
    int start = 0;  
    int end = 1;  
  
    int curr_petrol = p[start].petrol - p[start].distance;
    while (end != start || curr_petrol < 0)  
    {  
        while (curr_petrol < 0 && start != end)  
        {  
            curr_petrol -= p[start].petrol - p[start].distance;  
            start = (start + 1) % n;  
            if (start == 0)  
            return -1;  
        }  
        curr_petrol += p[end].petrol - p[end].distance;  
  
        end = (end + 1) % n;  
    }  
    return start;
}