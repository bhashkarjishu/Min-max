#include <stdio.h>

int main(void) {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        unsigned int n,i,min=0;
        scanf("%u",&n);
        unsigned int a[n];
        for(i=0;i<n;i++)
        {
           scanf("%u",&a[i]);
        }
        min=a[0];
        for(i=0;i<n;i++)
        {
            if(min>a[i])
                min=a[i];
        }
        printf("%u\n",min*(n-1));
    }
	return 0;
}

