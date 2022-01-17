//
// Created by luo on 2022/1/16.
//

#ifndef HELLO_CPLUS_CLIENT_H
#define HELLO_CPLUS_CLIENT_H


class client {
public:
    static void ChangeServerName(char name);
    static int getClientNum();
private:
    static char ServerName;
    static int ClientNum;
};


#endif //HELLO_CPLUS_CLIENT_H
