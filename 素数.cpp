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
         cout<<"������������ж���Ϸ�𣿣���Ļ�����y�����������n\n";
         string pan;
         cin>>pan;
         if("n"==pan)
         {
             break;
         }
         else if("n"!=pan&&"y"!=pan)
         {
             cout<<"������Ϸ��ַ�\n";
         }
         else if ("y"==pan)
         {
                      int m,n,s=0,i,j,F;
             cout<<"������ȡֵ��Χ��\n";
             cin>>m>>n;
             while(1)
             {
                 if (n<m)
                 {
                     cout<<"��������ȷ�ķ�Χ\n";
                     cin>>m>>n;
                 }
                 else if(m<=n)
                 {
                     break;
                 }
             }
             if(n==2&&m==1)
             cout<<"��һ������"<<"2";
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
              cout<<"�� "<< s <<" ������   ";
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
