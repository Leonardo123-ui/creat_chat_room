/*************************************************************************
	> File Name: udp_epoll.h
	> Author: yuanmengying
	> Mail:1559970212@qq.com 
	> Created Time: Fri 10 Jul 2020 12:19:44 AM CST
 ************************************************************************/

#ifndef _UDP_EPOLL_H
#define _UDP_EPOLL_H
int udp_accept(int fd,struct User *user);
void add_to_sub_reactor(struct User *user);

#endif
