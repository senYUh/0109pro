/*
 *date:0109;
 *author:liu;
 *e-mail:yuanb60624260@163.com;
 *to caclue numbers;
 */
 #include<iostream>
 using namespace std;
 int main()
 {
     int a[10000];
     int i,ping=0,zong,n;
     char c;
     cout<<"����n������"<<endl;
     do{
            cin>>a[i];
            i++;
       }while(getchar()!='\0');
       i=n;
       for(i=0;i<n;i++)
       {
           zong+=a[i];
           ping=a[i]/n;
       }
       cout<<"��ֵ�ǣ�"<<zong<<"ƽ��ֵ��: "<<ping<<endl;
       return 0;
 }

