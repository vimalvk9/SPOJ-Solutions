#include <bits/stdc++.h>
using namespace std;

int main() {
   int t,h,w;
   scanf("%d",&t);
   while(t--)
   {
      scanf("%d%d",&h,&w);
      /*To insert a new column with
      all 0s in front and back*/
      int a[h][w+2]={0};
      a[0][w+1]=0;
      
      /*entering data in between the two 0 
      columns 0<=i<h 1<=j<=w*/
      
      for(int i=0;i<h;++i)
         for(int j=1;j<=w;++j)
            scanf("%d",&a[i][j]);
      
      /*We add the maximum of the 3 reachable
      value from a given tile to the 
      present tile, we do so in reverse fashion
      */		
      for(int i=h-2;i>=0;--i)		
         for(int j=1;j<=w;++j)
            a[i][j]+=max(a[i+1][j-1],max(a[i+1][j],a[i+1][j+1]));
      /*Taking the maximum of the first row*/	
      int ans=a[0][1];
      for(int i=2;i<=w;++i)
         if(a[0][i]>ans)
            ans=a[0][i];
      printf("%d\n",ans);
   }

   return 0;
}
