    #include<bits/stdc++.h>
    using namespace std;
     
    int main()
    {
        int t;
        cin>>t;
     
        while(t--)
        {
            long long int len, n, temp1, temp2 ,r,sum=0, palin;
            int input[100005];
          
            for(int i=0;i<len;i++)
            {
                cin>>input[i];
            }

            if(input[0]==9)
            {

            }
     
            cin>>len>>n;
            temp1=n;   
            while(temp1>0)
            {
                r=temp1%10;
                temp1=temp1/10;
            }
            
            if(r==9)
            {
                for(long long int i=1;i<=len+1;i++)
                {
                    sum=sum*10 + 1;
                }
                cout<<sum-n<<'\n';
            }
            
            else 
            {
                for(long long int i=1;i<=len;i++)
                {
                    sum=sum*10 + 9;
                }
                cout<<sum-n<<'\n';
     
            }    
        }
    }




