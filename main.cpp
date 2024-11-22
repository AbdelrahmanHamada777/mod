 #include <bits/stdc++.h>
using namespace std;

int main()
{
  int n,m,x,y,z=-100,c=0,f,l;
  cin>>n>>m;
  x=n;

  for(int i =1;i<=n;i++)
  {
       y=((m-3)/4)+1;

      for(int j =1;j<=m;j++)
  {

      if(x>=3&&m>=3)
    {
       if(i%4==0)
            cout<<'.';
        else if(i%2!=0&&(j==2||j==l+4&&y>01))
           {
              cout<<'*';
                z=i+1;
                l=j;
             c++;
             y--;
             if(c%2==0)
                x=x-4;
           }
    else if(i==z)
    {
        if(j==1)
        f=0;
      if((j>=1&&j<=3)||(j<=3+4*f&&j>=1+4*f&&y-1>0))//1:3/5:7
        cout<<'*';
        else
        cout<<'.';
      if(j==l+1+4*f&&y-1>0)
        f++;

    }
        else
        cout<<'.';

    }
    else
        cout<<'.';

  }

  cout<<endl;

  }
  y--;
}
/*
c=j+3
*/
//.*...*...*...*.
