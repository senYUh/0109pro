/*
 *data:2020/01/08;
 *author:liu;
 *e-mail:yuanb60624260@163.com;
 *chose a game to play in ������ and �����ж� and so on ��
*/
#include<iostream>

using namespace std;

int isprime(int i)
{
	int ret =1;
	int k;
	for(k=2; k<i; k++)
    {
        if(i%k==0)
        {
            ret=0;
            break;
        }
	}
	return ret;
}
void CalculateWeekDay(int y, int m,int d)
{
	if(m==1||m==2) m+=12,y--;
	int iWeek = (d+2*m+3*(m+1)/5+y+y/4-y/100+y/400)%7;
	switch(iWeek)
	{
		case 0: cout<<"����һ\n"; break;
     	case 1: cout<<"���ڶ�\n"; break;
     	case 2: cout<<"������\n"; break;
     	case 3: cout<<"������\n"; break;
     	case 4: cout<<"������\n"; break;
     	case 5: cout<<"������\n"; break;
     	case 6: cout<<"������\n"; break;
	}
}
int main()
{
    cout<<"*******************************************************************************"<<endl;
    cout<<"************        welcome to play                     ***********************"<<endl;
    cout<<"************        ����1�� ���������                  ***********************"<<endl;
    cout<<"************        ����2���������ж�                   ***********************"<<endl;
    cout<<"************        ����3���������ж�                   ***********************"<<endl;
    cout<<"************        ����4�������ڲ�ѯ                   ***********************"<<endl;
    cout<<"************        ����0,ʲô�����档                  ***********************"<<endl;
    cout<<"*******************************************************************************"<<endl;
        while(1)
    {
        int shu;
        cin>>shu;
        if(0==shu)
        {
            break;
        }
        else if(0==shu||1==shu||2==shu||3==shu||4==shu)
        {
            switch(shu)
            {
                case 1:
                {
                    while(1)
                    {
                        cout<<"������л��������ж�������룬������y��������룬������n��\n";
                        string pan;
                        cin>>pan;
                        if("n"==pan)
                        {
                            break;
                        }
                        else if("y"==pan)
                        {
                            int data;
                            cout<<"������һ����λ����\n";
                            cin>>data;
                            while(1)
                            {
                                if(data/10000==0||data/10000>10)
                                {
                                    cout<<"��������ȷ����λ����\n";
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
                                    cout<<"yes��\n";
                                }
                                else
                                {
                                    cout<<"no!\n";
                                }
                            }
                        }
                        else
                        {
                            cout<<"������Ϸ��ַ�\n";
                        }
                    }
                }
                break;
                case 2:
                {
                    while(1)
                {
                    cout<<"�����������ж���Ϸ������룬������y����������n\n";
                    string pan;
                    cin>> pan;
                    if("n"==pan)
                    {
                        break;
                    }
                    else if("y"==pan)
                    {
                        int Y,M,D;
                        cout<<"�����������գ�����2020 1 8��\n";
                        cin >> Y >> M >> D;
                        while(1)
                        {
                            if(M>12||M<1)
                            {
                                cout<<"��������ȷ�·�\n";         //�ж������·��Ƿ�Ϸ�
                                cin>>Y>>M>>D;
                            }
                            else if((2==M && D>29) || (M<8&&M%2!=0&&D>31) || (M<8&&M%2==0&&D>30) || (M>8&&M%2!=0&&D>30) || (M>8 && M%2==0 && D>31)||(D<1)||((Y%4!=0&&Y%400==0)||(Y%400!=0)&&M==2&&D>28))
                            {
                                cout<<"��������ȷ������\n";     //�ж����������Ƿ�Ϸ�
                                cin>>Y>>M>>D;
                            }
                            else
                            {
                                break;
                            }
                        }
                        {
                            int date=0;
                            int arr[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};       //����������ڵ��㷨
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
                                 cout<<"�������ǽ���ĵ�"<< date<<" ��\n";
                             }
                        }

                    }
                    else if("y"!=pan&&"y"!=pan)
                        {
                            cout<<"��������ȷ�ַ�\n";
                        }
                }
                }
                break;
                case 3:
                {
                     while(1)
                     {
                         cout<<"\n������������ж���Ϸ�𣿣���Ļ�����y�����������n\n";
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
                                    if(m=1)
                                    for(i=2;i<=n;i++)
                                    {
                                       if(isprime(i))
                                       {
                                           s++;
                                       }
                                    }
                                    else
                                    {
                                         for(i=m;i<=n;i++)
                                         {
                                            if(isprime(i))
                                            {
                                                s++;
                                            }
                                         }
                                    }
                                 }
                                cout<<"�� "<< s <<" ������   ";
                                {
                                  {
                                    if(m=1)
                                    for(i=2;i<=n;i++)
                                    {
                                       if(isprime(i))
                                       {
                                           cout<<i<<" ";
                                       }
                                    }
                                    else
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
                         }

                     }
                     break;
                }
                case 4:
                    {
                        while(1)
                        {
                            cout<<"���������ڲ�ѯ������룬������y����������n��"<<endl;
                            string a;
                            cin>>a;
                            if("n"==a)
                            {
                                break;
                            }
                            else if("y"==a)
                            {
                                int a,b,c;
                                cout<<"�������Ӧ����\n";
                                cin>>a>>b>>c;
                                CalculateWeekDay(a,b,c);
                            }
                            else
                            {
                                cout<<"��������ȷ�ַ�"<<endl;
                            }
                        }
                    }
            }
        }
        else
        {
            cout<<"��������ȷ�ַ�\n";
        }
    }
    return 0;
}
