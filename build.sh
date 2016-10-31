#!/bin/bash
set -e

export VERSION=debug
export INSTALL_DIR=/opt/nginx-${VERSION}
export OS_USER=mg
export OS_GROUP=mg
mkdir -p ${INSTALL_DIR}
chown ${OS_USER}:${OS_GROUP} -R ${INSTALL_DIR}
auto/configure --with-http_ssl_module \
        --with-http_gzip_static_module \
        --with-mail \
        --with-mail_ssl_module \
        --with-http_stub_status_module \
        --with-http_realip_module \
        --with-debug \
        --prefix=${INSTALL_DIR}
make -f objs/Makefile
make -f objs/Makefile install
chown ${OS_USER}:${OS_GROUP} -R ${INSTALL_DIR}
