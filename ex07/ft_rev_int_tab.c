/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpotthar <mpotthar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:48:02 by mpotthar          #+#    #+#             */
/*   Updated: 2022/07/28 18:29:21 by mpotthar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	cnt;
	int	cntre;
	int	cng;

	cnt = 0;
	cntre = size - 1;
	while (cnt < size / 2)
	{
		cng = tab[cnt];
		tab[cnt] = tab[cntre];
		tab[cntre] = cng;
		cnt++;
		cntre--;
	}
}
