#ifndef SESSION_H_
#define SESSION_H_

#include <vector>
#include <unordered_map>
#include <string>
#include "Action.h"

class User;
class Watchable;

class Session{
public:
    Session(const std::string &configFilePath);
    Session(const Session& other);
    ~Session();
    void start();
    void addUser(User*);
    CreateUser addAction(BaseAction*);
    void getUserByName(string);


    std::vector<Watchable*> get_content();

private:
    std::vector<Watchable*> content;
    std::vector<BaseAction*> actionsLog;
    std::unordered_map<std::string,User*> userMap;
    User* activeUser;
    std::vector<string> parameters;
};
#endif
