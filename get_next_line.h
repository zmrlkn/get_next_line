/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zalkan <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 16:11:27 by zalkan            #+#    #+#             */
/*   Updated: 2023/02/26 16:11:30 by zalkan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define  GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 4
# endif

int		ft_n(char *s1);
char	*ft_strjoin(char *s1, char *s2);
int		ft_strlen(char *str);
char	*ft_new_line(char *str);
char	*ft_new_str(char *str);
char	*get_next_line(int fd);

#endif

//buffersize
//Bir örnek alalım
//Paraya ihtiyacınız olduğunu ve size yardım eden birini tanıdığınızı varsayalım. Yani o kişiden para istiyorsun.
/* Ve o kişi sana kaç tane soruyor? çünkü çok parası var.
Benzer şekilde, tampon, paraya ihtiyaç duyan bir kişidir 
(bizim durum belleğimiz) ve işletim sistemi, parası olan bir kişidir 
(sistem belleğinin sahibi).Bu nedenle arabellek boyutunu ayarlamak,
işletim sistemine benim için gereken bellek boyutunu söyler ve işletim
sistemi, çalışma zamanında programımız için bu miktarda belleği yönetir.*\