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
     cout<<"输入n个整数"<<endl;
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
       cout<<"总值是："<<zong<<"平均值是: "<<ping<<endl;
       return 0;
 }

