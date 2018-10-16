/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_no_zero.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dshults <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/04 14:59:00 by dshults           #+#    #+#             */
/*   Updated: 2018/04/04 14:59:02 by dshults          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr_no_zeroo(const char *s, int c)
{
	int i;

	i = 0;
	if (!c)
		return (0);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i++;
	}
	return (0);
}
