# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    run.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: namkyu <namkyu@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/18 20:08:50 by namkyu            #+#    #+#              #
#    Updated: 2021/06/15 14:57:19 by namkyu           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# GENERATE PERSONAL KEY && SSC
openssl req -newkey rsa:4096 -days 365 -nodes -x509 -subj\
	"/C=KR/L=Seoul/O=42seoul/OU=nlee/CN=localhost"\
	-keyout ../etc/ssl/private/tls_nlee.key -out ../etc/ssl/certs/tls_nlee.crt
chmod 600 ./etc/ssl/certs/tls_nlee.crt ./etc/ssl/private/tls_nlee.key

# SET OWN & ACCESS
chown -R www-data:www-data ./var/www/*
chmod -R 755 ./var/www/*