/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ymarival <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 05:55:52 by ymarival          #+#    #+#             */
/*   Updated: 2023/10/04 05:55:52 by ymarival         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	Data ptr2;
	ptr2.name = "Michaela Mustermann";
	ptr2.age = 42;
	ptr2.next = NULL;

	Data ptr;
	ptr.name = "Max Mustermann";
	ptr.age = 42;
	ptr.next = &ptr2;


	std::cout << "Here is the original structs:" <<
				"\n\taddress: " << &ptr <<
				"\n\tname: " << ptr.name <<
				"\n\tage: " << ptr.age <<
				"\n\taddress next: " << ptr.next <<
	std::endl;
	std::cout << "\taddress ptr2: " << &ptr2 <<
				"\n\tname: " << ptr2.name <<
				"\n\tage: " << ptr2.age <<
				"\n\taddress next: " << ptr2.next <<
	std::endl << std::endl;

	Serializer a;

	Data *deserialized_struct = a.deserialize(a.serialize(&ptr));

	std::cout << "Here is the reserialized structs:" <<
				"\n\taddress: " << deserialized_struct <<
				"\n\tname: " << deserialized_struct->name <<
				"\n\tage: " << deserialized_struct->age <<
				"\n\taddress next: " << deserialized_struct->next <<
	std::endl;
	std::cout << "\taddress ptr2: " << &ptr2 <<
				"\n\tname: " << ptr2.name <<
				"\n\tage: " << ptr2.age <<
				"\n\taddress next: " << ptr2.next <<
	std::endl << std::endl;

	return (0);
}