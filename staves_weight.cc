#include<iostream>
#include<vector>
using namespace::std;
int main(void)
 
{
    vector<int> a;
    int n,b;   int count=1,mount=1;    vector<int> inc,dec;  int v1,v2,v3,v4;
    cout<<"enter vector size:";
    cin>>n;
 
    for(int i=0;i<n;i++)
    {
        cin>>b;
        a.push_back(b);
    }
    for(int i = 0;i < n;i++)   
    {
        for(int j = i+1;j < n;j++)
        {   
            
        	v1 = a[i]+a[j];  v2=a[n]+a[n-1]; //v1 is staffs top edge and v2 is bottom edge
        	for(int k=n;k>0;k++)             //i will keep v2 constant..and i will break v1 side continuously..ie if it is 157321222..next it will be 57321222..7321222..and so on thats why i,j are used i will be at 0 then i will be at 1...
        	{
                for(int l=n-1;l>0;l++)
                {
                	cout<<"\n"<<"ai= "<<a[i]<<"aj= "<<a[j]<<"an= "<<a[n-1]<<"a-n= "<<a[n-2]<<endl;
                	cout<<"\n"<<"v1="<<v1<<"v2="<<v2<<endl;
                    if(v1 == v2)
                    {
                       for(int m=j;m<n;m++) //v3=a[j+1]th
                        {
                            for(int o=l;o>0;o--)	//v4=a[n-2]th
                            {
                                v3=a[m]; v4=a[o];
                                count = count + 1;
                                if(count > mount)
                                {
                                    {  
                                        mount=count;
                                        inc.clear();dec.clear();//clearing previous vectors and update with new max waights 
                                        inc.push_back(i);dec.push_back(n);               
                                        inc.push_back(j);dec.push_back(n-1);   
                                    }            
                                }
                                v1 = v1+v3; v2 = v2+v4;//comparing staves a[i]+a[i+1]=a[k]+a[k-1] then a[i]+a[i+1]+a[i+2]=a[k]+a[k-1]+a[k-2]...so on...
                                cout<<"\n"<<"v1 "<<v1<<"v2 "<<v2<<endl;
                            }
                        }
                    }
                } 
            }           
            for(int m=0;m<dec.size();m++)
            {
               cout<<"count="<<count<<"\ndec="<<dec[m];
            }
        }
    }
}
