/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murachid <murachid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:41:31 by murachid          #+#    #+#             */
/*   Updated: 2022/03/03 12:43:57 by murachid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(void)
{
	Base	*base = generate();
	identify(base);
	identify(*base);
	delete base;
	return 0;
}

// example for explanation how work this //

// #include <iostream>
// #include <string>
// #include <iostream>
// #include <math.h>
// #include <stdio.h>
// #include <ctype.h>

// int main()
// {

//     unsigned int number = 0;
//     cout <<"sizeof(number) = "<< number <<endl;
//     // number = (unsigned int)ptr;
// }

// class A
// {
//     public:
//         virtual void f()
//         {
//             cout << "A::f()" << endl;
//         }
// };

// class B : public A
// {
//     public:
//         void f()
//         {
//             cout << "B::f()" << endl;
//         }
// };

// int main()
// {
// 	A a;
// 	B b;
   

// 	A *pA = &a;   
//     pA->f();      
//     pA = &b;   
//     pA->f();     

// 	B *pB = &b;   
//     pB->f();      
//   //  pB = &a;   

// 	pB = dynamic_cast<B*>(&a);
// 	if (pB == nullptr)
// 		cout << "null" << endl;
// 	else
// 		cout << "it's works not null" << endl;
//    // pB->f();

// 	return 0;
// }


// class Base 
// { 
//     public : 
//     virtual ~Base(){};
// };

// class A : public Base {};
// class B : public Base {};	
// class C : public Base {};

// int main()
// {
//     Base *instance0 = NULL;
//     Base *instance1 = NULL;
//     Base *instance2 = NULL;
//     Base *instance3 = NULL;

// 	instance0 = new A;
// 	instance1 = new B;
// 	instance2 = new C;
// 	instance3 = new Base;


//     if (dynamic_cast<A *>(instance0) != NULL)
// 		std::cout <<  "(A)A" << std::endl;
// 	if (dynamic_cast<A *>(instance1) != NULL)
// 		std::cout << "(A)B" <<  std::endl;
// 	if (dynamic_cast<A *>(instance2) != NULL)
// 		std::cout << "(A)C"  << std::endl;
// 	if (dynamic_cast<A *>(instance2) != NULL)
// 		std::cout << "(A)base"  << std::endl;

//     if (dynamic_cast<B *>(instance0) != NULL)
// 		std::cout <<  "(B)A" << std::endl;
// 	if (dynamic_cast<B *>(instance1) != NULL)
// 		std::cout << "(B)B" <<  std::endl;
// 	if (dynamic_cast<B *>(instance2) != NULL)
// 		std::cout << "(B)C"  << std::endl;
// 	if (dynamic_cast<A *>(instance3) != NULL)
// 		std::cout << "(A)base"  << std::endl;

//     if (dynamic_cast<C *>(instance0) != NULL)
// 		std::cout <<  "(C)A" << std::endl;
// 	if (dynamic_cast<C *>(instance1) != NULL)
// 		std::cout << "(C)B" <<  std::endl;
// 	if (dynamic_cast<C *>(instance2) != NULL)
// 		std::cout << "(C)C"  << std::endl;
// 	if (dynamic_cast<A *>(instance3) != NULL)
// 		std::cout << "(A)base"  << std::endl;

//     if (dynamic_cast<Base *>(instance0) != NULL)
// 		std::cout <<  "(Base)A" << std::endl;
// 	if (dynamic_cast<Base *>(instance1) != NULL)
// 		std::cout << "(Base)B" <<  std::endl;
// 	if (dynamic_cast<Base *>(instance2) != NULL)
// 		std::cout << "(Base)C"  << std::endl;
// 	if (dynamic_cast<Base *>(instance3) != NULL)
// 		std::cout << "(Base)base"  << std::endl;
// }
