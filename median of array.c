#include <stdio.h>
    void main()
    {
        int i,j,n,a[100],temp;
        int median;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;++i)
        {
            for(j=i+1;j<n;++j)
            {
                if (a[i]>a[j])
                {
                    temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                }
            }
        }
        for(i=0;i<=n;i++)
    
        
        {
            if(n%2 == 0)
            median = (a[(n-1)/2] + a[n/2])/2.0;
            else
            median = a[n/2];
            
        }
         printf("%d",median);
        
    }
