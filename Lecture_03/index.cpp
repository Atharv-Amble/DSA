// Sum of Even Numbers
/*
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the number"<<endl;
    cin>>num;
    int i=2;
    int sum = 0;
    while (i <= num)
    {
        sum = sum + i ;
        i = i + 2;
    }

    cout << "Sum is "<<sum;

}
*/

// Prime Or Not
/*
#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter the number "<<endl;
    cin>>number;
    int i;
    int flag = 1;

    for(i=2 ; i<number ;i++)
    {
        if(number %i ==0)
        {
            flag = 0;
            break;
        }
    }

    if(flag == 0)
    {
        cout<<"The number "<<number<<" is not prime"<<endl;
    }
    else
    {
        cout<<number<<" is prime"<<endl;
    }
}
*/


//Sum of prime numbers

// #include<iostream>
// using namespace std ;

//         bool isPrime(int num)
//         {

//             if(num <=1)
//             {
//                 return false;
//             }

//             if(num == 2)
//             {
//                 return true;
//             }

//             for(int i=2 ;i<=num/2 ; i++)
//             {
//                 if(num % i ==0)
//                 {
//                     return false;
//                 }
    
//             }

//             return true;
//         }

// int main()

// {
//        int number ;
//        cout<<"Enter the number "<<endl;
//        cin>>number;
//        int sum = 0;
//        for(int i=2 ;i<=number;i++)
//        {
//             if(isPrime(i))
//             {
//                 sum = sum +i;
//             }
//             else
//             {
//                 continue;
//             }
//        } 

//        cout<<"The sum between 1 and "<<number<<" is "<<sum<<endl;
       
//        return 0;
// }