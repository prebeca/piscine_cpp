/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/06 13:22:40 by user42            #+#    #+#             */
/*   Updated: 2021/09/06 13:55:01 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

uintptr_t serialize(Data * data)
{
	return (reinterpret_cast<uintptr_t>(data));
}

Data * deserialize(uintptr_t data)
{
	return (reinterpret_cast<Data *>(data));
}

int main()
{
	Data data;
	uintptr_t serialized_data;
	Data * deserialized_data;

	data.value = 42;

	serialized_data = serialize(&data);
	deserialized_data = deserialize(serialized_data);

	std::cout << &data << std::endl;
	std::cout << deserialized_data << std::endl;
	return (0);
}