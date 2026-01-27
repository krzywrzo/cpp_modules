/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kwrzosek <kwrzosek@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/27 16:51:00 by kwrzosek          #+#    #+#             */
/*   Updated: 2026/01/27 18:39:53 by kwrzosek         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
#define SED_HPP

#include <string>
#include <iostream>
#include <fstream>

std:: string	ft_replace(std:: string line, std:: string s1, std:: string s2);
bool		check_s1(std:: string line, std:: string s1, int j);
int	ft_strlen(std:: string str);

#endif