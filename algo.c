/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: prastoin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/28 13:41:56 by prastoin          #+#    #+#             */
/*   Updated: 2019/01/28 18:20:52 by prastoin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lem_in.h"

int		ft_fill_power(t_room *room, t_algo *algo)
{
	int i;
	int j;
	int cmt;

	i = 0;
	j = 0;
	cmt = 0;
	while (algo->list1[i] != -42)
	{
		while (j < room[algo->list1[i]].links)
		{
			algo->list2[cmt] = atoi(room[algo->list1[i]].way[j]);
			cmt++;
		}

}

int		ft_algo(t_room *room, t_algo *algo, long fourmis)
{
	(void)fourmis;
	algo->list1[0] = algo->index_end;
	algo->list2[1] = -42;
	ft_fill_power(room, algo);
	return (0);
}
