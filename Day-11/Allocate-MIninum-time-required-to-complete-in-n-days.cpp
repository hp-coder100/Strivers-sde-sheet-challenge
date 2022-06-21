bool isPoss(int n, int m, vector<int> arr,long long int mid){
   int days =1;
   long long int timeSum =0;
   for(int i=0;i<m;i++){
       if(timeSum+arr[i] <= mid){
           timeSum +=arr[i];
       }else{
           days++;
           if(days>n || arr[i]>mid){
               return false;
           }
           timeSum = arr[i];
       }
   }
   return true;
}

long long ayushGivesNinjatest(int n, int m, vector<int> time)  
{  
   long long int s=0;
  long long  int sum=0;
   for(int i=0;i<time.size();i++){
       sum += time[i];
   }
   long long int e=sum;
    long long int ans = -1;
  long long int mid = s+(e-s)/2;
   while(s<=e){
       if(isPoss(n,  m, time,mid)){
           ans = mid;
           e=mid-1;
       }else{
           s = mid+1;
       }
       mid = s+(e-s)/2;
   }
   return ans;
   
// Write your code here.
}