/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpolojie <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/21 11:19:18 by vpolojie          #+#    #+#             */
/*   Updated: 2022/03/23 18:11:15 by vpolojie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_tolower(int c)
{
	if (65 <= c && c <= 90)
	{
		c = c + 32;
		return (c);
	}
	else
	{
		return (c);
	}
}
