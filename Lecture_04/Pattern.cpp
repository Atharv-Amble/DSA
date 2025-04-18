#include<iostream>
using namespace std ;

// int main()
// {
//     int num  ;
//     cout<<"Enter the number "<<endl;
//     cin>>num;
//     cout<<endl;
//     int i = 1;
//     while(i <= num)
//     {
//         int j = 1;
//         while(j <= num)
//         {
//             cout<<j<<" ";
//             j=j+1;
//         }
//         i=i+1;
//         cout<<endl;
//     }
// }


// int main()
// {
//     int num  ;
//     cout<<"Enter the number "<<endl;
//     cin>>num;
//     cout<<endl;
//     int i = 1;
//     while(i <= num)
//     {
//         int j = 1;
//         while(j <= num)
//         {
//             cout<<num-j+1<<" ";
//             j=j+1;
//         }
//         i=i+1;
//         cout<<endl;
//     }
// }


// int main()
// {
//     int num  ;
//     int count = 1;
//     cout<<"Enter the number "<<endl;
//     cin>>num;
//     cout<<endl;
//     int i = 1;
//     while(i <= num)
//     {
//         int j = 1;
//         while(j <= num)
//         {
//             cout<<count<<" ";
//             j=j+1;
//             count = count +1;
//         }
//         i=i+1;
//         cout<<endl;
//     }
// }

// int main()
// {
//     int num  ;
//     cout<<"Enter the number "<<endl;
//     cin>>num;
//     cout<<endl;
//     int i = 1;
//     while(i <= num)
//     {
//         int j = 1;
//         while(j <= i)
//         {
//             cout<<"*"<<" ";
//             j=j+1;
//         }
//         i=i+1;
//         cout<<endl;
//     }
// }


// int main()
// {
//     int num;
//     cout<<"Enter a number "<<endl;
//     cin>>num;
//     int row = 1;

//     while(row <= num)
//     {
//         int col = 1;
//         int n = row;
//         while(col <= row)
//         {
//             cout<<n<<" ";
//             n=n+1;
//             col=col+1;
//         }
//         row=row+1;
//         cout<<endl;
//     }
// }



// int main()
// {
//     int num;
//     cout<<"Enter a number "<<endl;
//     cin>>num;
//     int row = 1;

//     while(row <= num)
//     {
//         int col = 1;
//         int n = row;
//         while(col <= row)
//         {
//             cout<<n<<" ";
//             n=n+1;
//             col=col+1;
//         }
//         row=row+1;
//         cout<<endl;
//     }
// }


// int main()
// {
//     int num;
//     cin>>num;
//     int row = 1;
//     while(row <= num)
//     {
//         int col = 1;
//         int value = row;
//         while(col <= row)
//         {
//             cout<<value<<" ";              also we can use i - j + 1
//             value = value - 1;
//             col = col +1;
//         }
//         row = row + 1;
//         cout<<endl;
//     }
// }


// int main()
// {
//     int num;
//     cin>>num;
//     int row = 1;
//     while(row <= num)
//     {
//         char alpha = 'A';
//         int col = 1;
//         while(col <= num)
//         {
//             cout<<char(alpha)<<" ";   
//             alpha = alpha + 1;       
//             col = col +1;
//         }
//         row = row + 1;
//         cout<<endl;
//     }
// }


// int main()
// {
//     int num;
//     cin>>num;
//     int row = 1;
//     char alpha = 'A';
//     while(row <= num)
//     {
//         int col = 1;
//         while(col <= num)
//         {
//             cout<<char(alpha)<<" ";   
//             alpha = alpha + 1;       
//             col = col +1;
//         }
//         row = row + 1;
//         cout<<endl;
//     }
// }



// int main()
// {
//     int num;
//     cin>>num;
//     int row = 1;
//     while(row <= num)
//     {
//         int col = 1;
//         while(col <= num)
//         {
//             cout<<char('A' + row + col -2)<<" ";         
//             col = col +1;
//         }
//         row = row + 1;
//         cout<<endl;
//     }
// }


// int main()
// {
//     int num;
//     cin>>num;
//     int row = 1;
//     while(row <= num)
//     {
//         int col = 1;
//         while(col <= row)
//         {
//             cout<<char('A' + row + - 1)<<" ";         
//             col = col +1;
//         }
//         row = row + 1;
//         cout<<endl;
//     }
// }


// int main()
// {
//     int num;
//     cin>>num;
//     int row = 1;
//     int count = 0;
//     while(row <= num)
//     {
//         int col = 1;
//         while(col <= row)
//         {
//             cout<<char('A' + count)<<" ";         
//             col = col +1;
//             count = count +1;
//         }
//         row = row + 1;
//         cout<<endl;
//     }
// }


// int main()
// {
//     int num;
//     cin>>num;
//     int row = 1;
//     while(row <= num)
//     {
//         int count = 'A' + row ;
//         int col = 1;
//         while(col <= row)
//         {
//             cout<<char('A' + row + col -2)<<" ";         
//             col = col +1;
//         }
//         row = row + 1;
//         cout<<endl;
//     }
// }


int main()
{
    int num;
    cin>>num;
    int row = 1;
    while(row <= num)
    {
        int space = row - 1;
        while(space)
        {
            cout<<" ";
            space = space - 1;
        }

        int col = 1 ;
        while(col <= num - row + 1)
        {
            cout<<"*";
            col = col + 1;
        }
        cout<<endl;
        row = row + 1;
    }
}