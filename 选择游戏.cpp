/*
 *data:2020/01/08;
 *author:liu;
 *e-mail:yuanb60624260@163.com;
 *chose a game to play in 回文数 and 年月判断；
*/
#include<iostream>

using namespace std;

int isprime(int i)
 {
	int ret =1;
	int k;
	for(k=2; k<i-1; k++)
    {
        if(i%k==0)
        {
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
    cout<<"*******************************************************************************"<<endl;
    cout<<"************        welcome to play                     ***********************"<<endl;
    cout<<"************        输入1， 玩回文数，                  ***********************"<<endl;
    cout<<"************        输入2，玩日期判定                   ***********************"<<endl;
    cout<<"************        输入3，玩素数判定                   ***********************"<<endl;
    cout<<"************        如果什么都不想玩 ,输入n             ***********************"<<endl;
    cout<<"*******************************************************************************"<<endl;
        int shu;
        cin>>shu;
        if('n'==shu)
        {
            break;
        }
        else
        {
            switch(shu)
            {
                case 1:
                {
                    while(1)
                    {
                        cout<<"你想进行回文数的判断吗？如果想，请输入y，如果不想，请输入n。\n";
                        string pan;
                        cin>>pan;
                        if("n"==pan)
                        {
                            break;
                        }
                        else if("y"==pan)
                        {
                            int data;
                            cout<<"请输入一个五位数字\n";
                            cin>>data;
                            while(1)
                            {
                                if(data/10000==0||data/10000>10)
                                {
                                    cout<<"请输入正确的五位数字\n";
                                    cin>>data;
                                }
                                else
                                {
                                    break;
                                }
                            }
                            {
                                int m,k,d,u;
                                m=data/10000;
                                k=data%10000/1000;
                                d=data%100/10;
                                u=data%10;

                                if(m==u&&k==d)
                                {
                                    cout<<"yes！\n";
                                }
                                else
                                {
                                    cout<<"no!\n";
                                }
                            }
                        }
                        else
                        {
                            cout<<"请输入合法字符\n";
                        }
                    }
                }
                break;
                case 2:
                {
                    while(1)
                {
                    cout<<"你想玩年月判断游戏吗？如果想，请输入y不想请输入n\n";
                    string pan;
                    cin>> pan;
                    if("n"==pan)
                    {
                        break;
                    }
                    else if("y"==pan)
                    {
                        int Y,M,D;
                        cout<<"请输入年月日（例如2020 1 8）\n";
                        cin >> Y >> M >> D;
                        while(1)
                        {
                            if(M>12||M<1)
                            {
                                cout<<"请输入正确月份\n";         //判定输入月份是否合法
                                cin>>Y>>M>>D;
                            }
                            else if((2==M && D>29) || (M<8&&M%2!=0&&D>31) || (M<8&&M%2==0&&D>30) || (M>8&&M%2!=0&&D>30) || (M>8 && M%2==0 && D>31)||(D<1)||((Y%4!=0&&Y%400==0)||(Y%400!=0)&&M==2&&D>28))
                            {
                                cout<<"请输入正确的日期\n";     //判定输入日期是否合法
                                cin>>Y>>M>>D;
                            }
                            else
                            {
                                break;
                            }
                        }
                        {
                            int date=0;
                            int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};       //计算相加日期的算法
                            if ((Y%4==0&&Y%400!=0)||(Y%400==0))
                            {
                                arr[2]+=1;
                            }
                            else
                            {
                                arr[2]==28;
                            }
                            for(int i=1;i<M;i++)
                            {
                                date=arr[i]+date;

                            }
                             {
                                 date=date+D;
                                 cout<<"该日期是今年的第"<< date<<" 天\n";
                             }
                        }

                    }
                    else if("y"!=pan&&"y"!=pan)
                        {
                            cout<<"请输入正确字符\n";
                        }
                }
                }
                break;
                case 3:
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
                             }
                         }

                     }
                     break;
                }
            }
        }
    }
    return 0;
}
