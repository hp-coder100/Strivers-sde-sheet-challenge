void sort012(int *arr, int n)

{

   int i=0;int m=0;int k=n-1;

   while(m<=k)

   {

       if(arr[m]==0)

       {

           swap(arr[m],arr[i]);

           m++;i++;

       }

       if(arr[m]==1)

           m++;

       if(m<=k)

       {

        if(arr[m]==2)

        {

               swap(arr[m],arr[k]);

               k--;

        }    

       }

   }

}