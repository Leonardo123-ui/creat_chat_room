/*************************************************************************
	> File Name: common.h
	> Author: yuanmengying
	> Mail:1559970212@qq.com 
	> Created Time: Tue 07 Jul 2020 07:47:13 AM CST
 *******************mZ****************************************************/
#ifndef _COMMON_H
#define _COMMON_H

char *get_conf_value(const char *path, const char *key);
int socket_create(int port);
void make_block(int fd);
void make_non_block(int fd);
#ifdef _D
#define DBG(fmt, args...) printf(fmt, ##args)
#else 
#define DBG(fmt, args...) 
#endif
#endif
