
/*
 * Copyright (C) Maxim Vladimirskiy
 * Copyright (C) Mailgun by Rackspace, Inc.
 */


#ifndef _NGX_MAIL_PROXY_MODULE_H_INCLUDED_
#define _NGX_MAIL_PROXY_MODULE_H_INCLUDED_


#include <ngx_config.h>
#include <ngx_core.h>


typedef struct {
    ngx_flag_t  enable;
    ngx_flag_t  pass_error_message;
    ngx_flag_t  xclient;
    ngx_flag_t  proxy_protocol;
    size_t      buffer_size;
    ngx_msec_t  timeout;
} ngx_mail_proxy_conf_t;


extern ngx_module_t  ngx_mail_proxy_module;


#endif /* _NGX_MAIL_PROXY_MODULE_H_INCLUDED_ */
