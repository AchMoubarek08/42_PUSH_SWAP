/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 18:34:13 by amoubare          #+#    #+#             */
/*   Updated: 2022/04/08 23:26:43 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	t_pile	a;
	t_pile	b;
	int		*p;

	p = (int *)malloc(200);
	argv_to_a(&a, argc, argv);
	check_dup(a);
	is_sorted(a, argc);
	p[0] = getminelem(a) - 1;
	if (argc > 2 && argc < 30)
		minisort(argc, &a, &b);
	else
		bigsort(p, argv, &a, &b);
}
