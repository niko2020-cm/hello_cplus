//
// Created by luo on 2022/1/16.
//

#include "client.h"
int client::ClientNum=0;
char client::ServerName='a';

void client::ChangeServerName(char name)
{
    client::ServerName=name;
    client::ClientNum++;
}
int client::getClientNum() {
    return client::ClientNum;
}
