#include <stdio.h>
#include <assert.h>
#include <arpa/inet.h>

#define HOST_FILE "endian.host"
#define NET_FILE "endian.net"

int main() {
    FILE *f;
    unsigned int num_host;