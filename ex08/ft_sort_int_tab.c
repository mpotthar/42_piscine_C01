/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpotthar <mpotthar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 15:36:02 by mpotthar          #+#    #+#             */
/*   Updated: 2022/07/28 18:59:25 by mpotthar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	cache;
	int	count;

	count = 0;
	while (count < (size - 1))
	{
		if (tab[count] > tab[count + 1])
		{
			cache = tab[count];
			tab[count] = tab[count + 1];
			tab[count + 1] = cache;
			count = 0;
		}
		else
		{
			count++;
		}
	}
}

/* int	main()
{
	int	tab[5] = {4, 3, 1, 2, 5};
	int size = 5;
	ft_sort_int_tab(tab, size);
	printf("%d %d %d %d %d", tab[0], tab[1], tab[2], tab[3], tab[4]);
} */