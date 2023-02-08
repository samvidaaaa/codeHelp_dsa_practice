//finding uppercase, lowercase and digit characters
#include <iostream>

using namespace std;

int main()
{
    char c;
    
    cout << "Enter a character : ";
    cin >> c;
    
    if(c >= 'A' && c <= 'Z')
    {
        cout << "Upper case letter!" << endl;
    }
    else if (c >= 'a' && c <= 'z')
    {
        cout << "Lower case letter!" << endl;
    }
    else if (c >= '0' && c <= '9')
    {
        cout << "It's a digit!" << endl;
    }
    else
    {
        cout << "err!";
    }
    
    return 0;
}


//while loop
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
   
    cout << "Enter a number : ";
    cin >> n;
    
    while(i <= n)
    {
        cout << i << "\t";
        i++;
    }
    
    return 0;
}


//sum till n
#include<iostream>
using namespace std;

int main(){
    
    int n, sum = 0, i = 1;
    
    cout << "Enter a number: ";
    cin >> n;
    
    while( i <= n)
    {
        sum = sum + i;
        i++;
    }
    
    cout << "Sum is " << sum;
    
    return 0;
}

//sum of all even nos till n
#include<iostream>
using namespace std;

int main()
{
    int n, sum = 0, i = 0;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while( i <= n)
    {
        sum += i;
        i += 2;
    }
    
    cout<< "Sum is " << sum;
    
    return 0;
}



//patter 1 
// ****
// ****
// ****
// ****
#include<iostream>
using namespace std;

int main()
{
    int i = 1, n;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while ( i <= n)
    {
        int j = 1;
        while ( j <= n)
        {
            cout << "*";
            j++;
        }
        cout << '\n';
        i++;
    }
}



//Pattern 2
// 1 1 1 1
// 2 2 2 2
// 3 3 3 3
// 4 4 4 4
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while( i <= n)
    {
        int j = 1;
        while(j <= 3)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}



//Pattern 3
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
// 1 2 3 4
#include<iostream>
using namespace std;

int main()
{
    int i = 1, n;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while (i <= n)
    {
        int j = 1;
        while(j <= n)
        {
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}



//Pattern 4
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
// 4 3 2 1
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(i <= n)
    {
        int j = 1;
        while(j <= n)
        {
            cout << n-j+1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}



//Pattern 5
// 1 2 3 4
// 5 6 7 8
// 9 10 11 12
// 13 14 15 16
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1, count = 1;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(i <= n)
    {
        int j = 1;
        while(j <= n)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}



//Pattern 5
// *
// * *
// * * *
// * * * *
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(i <= n)
    {
        int j = 1;
        while(j <= i)
        {
            cout << "*" << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}   



//Pattern 6
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(i <= n)
    {
        int j = 1;
        while(j <= i)
        {
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}



//Pattern 7
// 1
// 2 3
// 4 5 6
// 7 8 9 10
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1, count = 1;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(i <= n)
    {
        int j = 1;
        while(j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}   



//Pattern 8
// 1
// 2 3
// 3 4 5
// 4 5 6 7
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    
    cout << "Enter  a number : ";
    cin >> n;
    
    while(i <= n)
    {
        int j = 1, value = i;
        while(j <= i)
        {
            cout << value << " ";
            value++;
            j++;
        }
        cout << endl;
        i++;
    }
    
    
    return 0;
}



//Pattern 8 (alternative - without storing value of row in 'value' variable)
// 1
// 2 3
// 3 4 5
// 4 5 6 7
#include<iostream>
using namespace std;
    
int main()
{
    int n, i = 1;
        
    cout << "Enter  a number : ";
    cin >> n;
        
    while(i <= n)
    {
        int j = 0, value = i;
        while(j < i)
        {
            cout << i+j << " ";
            value++;
            j++;
        }
        cout << endl;
        i++;
    }
        
        
    return 0;
}



//Pattern 9
// 1
// 2 1
// 3 2 1
// 4 3 2 1
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
     
    cout << "Enter a number : ";
    cin >> n;
    
    while (i <= n)
    {
        int j = 1, count = i;
        while(j <= i)
        {
            cout << count << " ";
            count--;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}



//Pattern 9 (ALternative - without using count variable)
// 1
// 2 1
// 3 2 1
// 4 3 2 1
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while (i <= n)
    {
        int j = 1;
        while(j <= i)
        {
            cout << i - j + 1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}



//Pattern 10
// A A A A
// B B B B
// C C C C
// D D D D
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(i <= n)
    {
        int j = 1;
        while(j <= n)
        {
            char ch = 'A' + i - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}



//Pattern 11
// A B C D
// A B C D
// A B C D
// A B C D
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(i <= n)
    {
        int j = 1;
        while(j <= n)
        {
            char ch = 'A' + j - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}



//Pattern 12
// A B C D
// B C D E
// C D E F
// D E F G
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(i <= n)
    {
        int j = 1;
        while(j <= n)
        {
            //i + j - 1 => 1 + 1 - 1 = 1
            //'A' - 1 + i + j - 1 = 1 + 'A' + - 1 
            //'A' + i + j - 2 = 'A'
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}



//Pattern 12 (Easy method)
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while (i <= n)
    {
        int j = 1;
        char ch = 'A' + i - 1;
        while(j <= n)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}



//Pattern 13
// A
// B B
// C C C
// D D D D
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(i <= n)
    {
        int j = 1;
        while(j <= i)
        {
            char ch = 'A' + i - 1;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}



//pattern 14
// A B C D
// E F G H
// I J K L
// M N O P
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    char ch = 'A';
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(i <= n)
    {
        int j = 1;
        while(j <= n)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
    
    
    return 0;
}



//Pattern 15
// A
// B C
// D E F
// H I J K
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    char ch = 'A';
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(i <= n)
    {
        int j = 1;
        while(j <= i)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
    
    
    return 0;
}



//Pattern 16
// A
// B C 
// C D E
// D E F G
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(i <= n)
    {
        int j = 1;
        while(j <= i)
        {
            //i + j - 1 => 1 + 1 - 1 = 1
            //'A' - 1 + i + j - 1 = 1 + 'A' - 1 
            //'A' + i + j - 2 = 'A'
            char ch = 'A' + i + j - 2;
            cout << ch << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}



//Pattern 17
// D
// C D
// B C D
// A B C D
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(i <= n)
    {
        char ch = 'A' + n - i;
        int j = 1;
        while(j <= i)
        {
            cout << ch << " ";
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}



//Pattern 18
//     *
//    **
//   ***
//  ****
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(i <= n)
    {
    //printing space 
    int space = n - i;
    while(space)
    {
        cout << " ";
        space--;
    }
    
    //print stars
    int j = 1; 
    while(j <= i)
    {
        cout << "*";
        j++;
    }
    cout << endl;
    i++;
    
    }
    
    return 0;
}



//Pattern 19
// * * * *
// * * *
// * *
// *
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(i <= n)
    {
        int j = 1;
        int stars = n - i + 1;
        while(j <= stars)
        {
            cout << "*" << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
    
    return 0;
}



//Pattern 20
// ****
//  ***
//   **
//    *
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(i <= n)
    {
        int space = i - 1;
        while(space)
        {
            cout << " ";
            space--;
        }
        
        int stars = n - i + 1;
        int j = 1;
        while(j <= stars)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}   



//Pattern 21
// 1111
//  222
//   33
//    4
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(i <= n)
    {
        int space = i - 1;
        while(space)
        {
            cout << " ";
            space--;
        }
        
        int j = 1;
        while(j <= n - i + 1)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}



//Pattern 22
//    1
//   22
//  333
// 4444
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(i <= n)
    {
        int space = i - 1;
        while(space)
        {
            cout << " ";
            space--;
        }
        
        int j = 1;
        while(j <= n - i + 1)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}



//Pattern 23
// 1234
//  234
//   34
//    4
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(i <= n)
    {
        int space = i - 1;
        while(space)
        {
            cout << " ";
            space--;
        }
        
        int j = 1, count = i;
        while(j <= n - i + 1)
        {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}



//Pattern 24
//    1
//   23
//  456
// 78910
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1, count = 1;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(i <= n)
    {
        int space = n - i;
        while(space)
        {
            cout << " ";
            space--;
        }
        
        int j = 1;
        while(j <= i)
        {
            cout << count;
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}



//Pattern 25
//    1
//   121
//  12321
// 1234321
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(i <= n)
    {
        //printing space vala triangle
        int space = n - i;
        while(space)
        {
            cout << " ";
            space--;
        }
        
        //Print 1st triangle
        int j = 1;
        while(j <= i)
        {
            cout << j;
            j++;
        }
        
        //Print 2nd triangle
        int start = i - 1;
        while(start)
        {
            cout << start;
            start--;
        }
        cout << endl;
        i++;
        
    }
    
    return 0;
}



//Pattern 26
// 1 2 3 4 5 5 4 3 2 1
// 1 2 3 4 * * 4 3 2 1
// 1 2 3 * * * * 3 2 1
// 1 2 * * * * * * 2 1
// 1 * * * * * * * * 1
#include<iostream>
using namespace std;

int main()
{
    int n, i = 1;
    
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(i <= n)
    {
        //Triangle 1 
        int j = 1, value = 1;
        while(j <= n - i + 1)
        {
            cout << value;
            value++;
            j++;
        }
        
        //Triangle 2 
        int star1 = i - 1;
        while(star1)
        {
            cout << "*";
            star1--;
        }
        
        //Triangle 3 
        int star2 = i - 1;
        while(star2)
        {
            cout << "*";
            star2--;
        }
        
        //Triangle 4 
        int col = 1;
        int val = n - i + 1;
        while(col <= n - i + 1)
        {
            cout << val;
            val--;
            col++;
        }
        cout << endl;
        i++;
    }
    
    return 0;
}



//Bitwise operators
// AND & -  1 1 -> 1     
// OR | -  1 1 - > 1      
         //1 0 -> 1
         //0 1 -> 1
// NOT ~ -  1 -> 0 
          //0 -> 1
// TILDE ^ -  1 0 -> 1
            //0 1 -> 1
#include<iostream>
using namespace std;

int main()
{
    int a = 4, b = 6;
    
    cout << "a & b : " << (a & b) << endl;
    cout << "a | b : " << (a | b) << endl;
    cout << "~a : " << ~a << endl;
    cout << "a ^ b : " << (a ^ b) << endl;
    
    
    return 0;
}



// right-shift >> divide by 2
// left- shift << multiply by 2
#include<iostream>
using namespace std;

int main()
{
    cout << (17 >> 1) << endl;
    cout << (17 >> 2) << endl;
    cout << (19 << 1) << endl;
    cout << (21 << 2) << endl;
    
    
    return 0;
}



// i++ , ++i , i--, --i
#include<iostream>
using namespace std;

int main()
{
    int i = 7;
    
    cout << (i++) << endl; // 7 , i = 8
    cout << (++i) << endl; // 9 , i = 9
    cout << (i--) << endl; // 9 , i = 8
    cout << (--i) << endl; // 7 , i = 7
    
    return 0;
}



//fibonacci series
#include<iostream>
using namespace std;

int main()
{
    int n = 10, a = 0, b = 1;
    
    cout << a << " " << b << " ";
    
    for(int i = 0; i < 10; i++)
    {
        int nextNum = a + b;
        cout << nextNum << " ";
        a = b;
        b = nextNum;
    }
    
    return 0;
}



//Prime number
#include<iostream>
using namespace std;

int main()
{
    int n;
    bool isPrime = 1;
    
    cout << "Enter a number : ";
    cin >> n;
    
    for(int i = 2; i < n; i++)
    {
        if(n%i == 0)
        {
            isPrime = 0;
            break;
        }
    }
    
    if(isPrime == 0)
    {
        cout << "Not a prime number.";
    }
    else
    {
         cout << "It's a prime number!";
    }
    
    return 0;
}



//Decimal to binary
#include<iostream>
#include<math.h>
using namespace std;


int main()
{
    int i = 0;
    int ans = 0;
    int n;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(n != 0)
    {
        int bit = n&1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    
    cout << ans;
}



//binary to decimal
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int i = 0, ans = 0;
    int n;
    
    cout << "Enter a number : ";
    cin >> n;
    
    while(n != 0)
    {
        digit = n % 10;
        
        if(digit == 1)
        {
            ans = ans + pow(2, i);
        }
        
        n = n / 10;
        i++;
    }
    
    cout << ans;
    
    
    return 0;
}



//switch case - calculator
#include<iostream>
using namespace std;

int main()
{
    int a, b;
    
    cout << "Enter a : ";
    cin >> a;
    
    cout << "Enter b : ";
    cin >> b;
    
    char op;
    cout << "Enter the operation you want to perform : ";
    cin >> op;
    
    switch(op)
    {
        case '+':
            cout << (a + b) << endl;
            break;
        case '-':
            cout << (a - b) << endl;
            break;
        case '*':
            cout << (a * b) << endl;
            break;
        case '/':
            cout << (a / b) << endl;
            break;
        default:
            cout << "Enter a valid operand!" << endl;
        
    }
    
    return 0;
}



//number of notes of 100, 50, 20 and 1
#include<iostream>
using namespace std;

int main()
{
    int amount;
    int Rs100, Rs50, Rs20, Rs1;
    
    cout << "Enter amount : ";
    cin >> amount;
    
    switch(1)
    {
        case 1:
            Rs100 = amount / 100;
            amount = amount % 100;
            cout << "Rs 100 notes = " << Rs100 << endl;
        case 2:
            Rs50 = amount / 50;
            amount = amount % 50;
            cout << "Rs 50 notes = " << Rs50 << endl;
        case 3:
            Rs20 = amount / 20;
            amount = amount % 20;
            cout << "Rs 20 notes = " << Rs20 << endl;
        default:
            Rs1 = amount / 1;
            amount = amount % 1;
            cout << "Rs 1 notes = " << Rs1 << endl;
    }
    
    return 0;
}



//Making a power() function
#include<iostream>
using namespace std;

int pow()
{
    int a, b, ans = 1;
    
    cout << "Enter a and b :";
    cin >> a >> b;
    
    for(int i = 0; i < b; i++)
    {
        ans = ans * a;
    }
    
    return ans;
}

int main()
{
    int answer = pow();
    cout << "Answer is : " << answer << endl;
    
    
    return 0;
}



//making isEven() function
#include<iostream>
using namespace std;

// return 1 - for even
// return 0 - for odd
bool isEven(int a)
{
    if(a & 1)  //odd
    {
        return 0;
    }
    
    return 1;
}

int main()
{
    int num;
    
    cout << "Enter a number : ";
    cin >> num;
    
    if(isEven(num) == 1)
        cout << "It's an even number!";
    else
        cout << "It's an odd number!";
    
    return 0;
}



//making a factorial() function
#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact = 1;
    
    for(int i = 1; i <= n; i++)
    {
        fact = fact * i; 
    }
    
    return fact;
}

int nCr(int n, int r)
{
    int num = factorial(n);
    int denom = factorial(r) * factorial(n-r);
    
    return num / denom;
}


int main()
{
    int n, r;
    
    cout << "Enter n and r : ";
    cin >> n >> r;
    
    cout << "Answer is " << nCr(n, r);
    
    return 0;
}



//making a isPrime() function
#include<iostream>
using namespace std;

bool isPrime(int num)
{
    for(int i = 2; i < num; i++)
    {
        if(num % i == 0)
        {
            return 0;
        }
    }
    
    return 1;
}


int main()
{
    int n;
    
    cout << "Enter n : ";
    cin >> n;
    
    if(isPrime(n))
    {
        cout << "It's a prime number.";
    }
    else
    {
        cout << "Not a prime number.";
    }
    
    return 0;
}



//A.P - [(3 * n) + 7] and we have to find the nth term
#include<iostream>
using namespace std;

int ap(int n)
{
    int ans;
    ans = (3 * n) + 7;
    
    return ans;
}

int main()
{
    int num;
    
    cout << "Enter a number : ";
    cin >> num;
    
    cout << ap(num);    

    return 0;
}



// count the no. of set bits in a & b
#include<bits/stdc++.h>
using namespace std;

int countSetBits(int n)
{
    int count = 0;
    while(n)
    {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}

int main()
{
    int a, b;
    
    cout << "a : ";
    cin >> a;
    cout << "b : ";
    cin >> b;
    cout << countSetBits(a) + countSetBits(b) << endl;

    
    return 0;
}



//find nth term in fibonacci series
#include<iostream>
using namespace std;

int fib(int n)
{
    int a = 0, b = 1, next;
    
    for (int i = 2; i < n; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }
    
    return next;
}


int main()
{
    int n;
    
    cout << "n : ";
    cin >> n;
    
    cout << n << "th term in fibonacci series is " << fib(n);
}