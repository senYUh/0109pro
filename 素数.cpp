/*
 *date:0109;
 *author:liu;
 *e-mail:yuanb60624260@163.com;
 *suhuh;
 */

 #include<iostream>

 using namespace std;


int isprime(int i) {
	int ret =1;
	int k;
	for(k=2; k<i-1; k++) {
		if(i%k==0) {
			ret=0;
			break;
		}
	}
	return ret;
}
 int main()
 {
     while(1)
     {
         cout<<"你想进行素数判定游戏吗？，想的话输入y，不想就输入n\n";
         string pan;
         cin>>pan;
         if("n"==pan)
         {
             break;
         }
         else if("n"!=pan&&"y"!=pan)
         {
             cout<<"请输入合法字符\n";
         }
         else if ("y"==pan)
         {
                      int m,n,s=0,i,j,F;
             cout<<"请输入取值范围：\n";
             cin>>m>>n;
             while(1)
             {
                 if (n<m)
                 {
                     cout<<"请输入正确的范围\n";
                     cin>>m>>n;
                 }
                 else if(m<=n)
                 {
                     break;
                 }
             }
             if(n==2&&m==1)
             cout<<"有一个素数"<<"2";
             else
             {
                {
                    for(i=m;i<=n;i++)
                    {
                       if(isprime(i))
                       {
                           s++;
                       }
                    }
                 }
              cout<<"有 "<< s <<" 个素数   ";
              {
                    for(i=m;i<=n;i++)
                    {
                       if(isprime(i))
                       {
                        cout<<i<<" ";
                       }
               }
             }
         }                    }

 }
     return 0;
 }
