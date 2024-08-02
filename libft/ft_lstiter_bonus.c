/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaskal <aaskal@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 22:16:40 by aaskal            #+#    #+#             */
/*   Updated: 2023/12/24 12:57:48 by aaskal           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (lst && f)
	{
		while (lst)
		{
			f(lst->content);
			lst = lst->next;
		}
	}
	else
		return ;
}

// void f(void *content)
// {
//     printf("%s\n", content);
// }

// int main()
// {
//     t_list *lst;
//     lst = ft_lstnew("hello");
//     ft_lstadd_back(&lst, ft_lstnew("world"));
//     ft_lstiter(lst, f);
//     return (0);
// }