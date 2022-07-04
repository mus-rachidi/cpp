/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:46:57 by murachid          #+#    #+#             */
/*   Updated: 2022/03/02 21:40:07 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "casting.hpp"

int main(int ac , char **ar)
{
    std::cout << std::fixed << std::setprecision(1) ;
    if (ac == 2)
	{
		casting	obj(ar);
        std::cout << obj ;
	}
    return(0);
}

// #include <iostream>
// #include <string>
// #include <iostream>
// #include <math.h>
// #include <stdio.h>
// #include <ctype.h>

// using namespace std;

// class A {

// };

// class B 
// {
//     public:
//     B (const A& x) {}
//     B& operator= (const A& x) {return *this;}
//     operator A() {return A();}
// };

// int main ()
// {
//   A foo;
//   B bar = foo;   
//   bar = foo;   
//   foo = bar;  
//   return 0;
// }

// int main ()
// {
//     int i = 321323;
//     float f = i;

//     bool vof = true;
//     int k = vof;

//     int kk = 11;
//     bool voff = kk;
    
//     float ff = 323233413413141;
//     int j = ff;
//     cout << voff;
//     return 0;
// }
// string toBinary(int n, int len)
// {
//     string binary;
//     for (unsigned int i = (1 << len - 1); i > 0; i = i / 2) 
//     {
//         binary += (n & i) ? "1" : "0";
//     }
//     return binary;
// }

// int main()
// {
//     int *ptr = (int *)malloc(sizeof(int) * 12);
// }

// int main()
// {
//     char c = 'a';
//     int *ptrC = (int *)&c;
//     cout << *ptrC << endl;
//     char *check = (char *)ptrC;
//     cout << *check << endl;
//     cout << sizeof(*ptrC) << endl;
//     cout << sizeof(&c) << endl;
// } 

// int main()
// {
//     char c = 'a';
//     int a = (int)c;
//     cout << a << endl;
//     cout << sizeof(a) << endl;
//     cout << sizeof(c) << endl;
//     cout << "The binary representation of " << c << " is " << toBinary(c, 8) << endl;
//     cout << "The binary representation of " << c << " is " << toBinary(a, 32);
// }

// int main()
// {
//     char c = 'a';
//     int *ptrC = (int *)&c;
//     cout << &ptrC << endl;
//     cout << (void *) &c << endl;
//     cout << "The binary representation of " << c << " is " << toBinary(c, 8) << endl;
//     cout << "The binary representation of " << *ptrC << " is " << toBinary(*ptrC, 32);
//     char *check = (char *)ptrC;
//     // cout << sizeof(*ptrC) << endl;
//     // cout << sizeof(&c) << endl;
// }
// #include <iostream>
// using namespace std;

// class A {};

// class B {
// public:
//    B (const A& x) {}
//   B& operator= (const A& x) {return *this;}
//   operator A() {return A();}
// };

// void fn (B x) {}

// int main ()
// {
//   A foo;
//   B bar (foo);
//   bar = foo;
//   foo = bar;
  
// //  fn (foo);  // not allowed for explicit ctor.
//   fn (bar);  

//   return 0;
// }
// #include <iostream>
// int main()
// {
//     double x = 10.3;
//     int y = 89;
// // y = int (x);    
// // y = (int) x; 
//     int i = x + y;
//     std::cout << i;
// }