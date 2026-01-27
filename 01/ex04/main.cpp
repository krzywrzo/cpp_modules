/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:49:01 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/27 18:51:53 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

// TODO: tests

int main(int argc, char **argv)
{
	std:: string	filename;
	std:: string	s1;
	std:: string	s2;
	std:: string	line;

	if (argc != 4)
		return (1);
	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];
	
	std:: string output = filename + ".replace";
	std:: ifstream in_file(filename); 
	std:: ofstream out_file(output);

	if (!in_file.is_open() || !out_file.is_open())
	{
		std::cout<<"Cannot open file"<<std::endl;
		return (1);
	}

	while (getline(in_file, line))
	{
		out_file<<ft_replace(line, s1, s2);
		if(!in_file.eof())
			out_file<<std::endl;
	}

	out_file.close();
	in_file.close();
	return (0);
}