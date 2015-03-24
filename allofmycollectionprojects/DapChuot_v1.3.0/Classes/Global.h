#ifndef __GLOBAL_H__
#define __GLOBAL_H__

#include "cocos2d.h"

class Global : public cocos2d::CCNode
{
public:
    virtual bool init();
    
    static Global *sharedGlobal();
    static std::string encrypt(std::string str);
    static std::string decrypt(std::string str);

    static std::string getKeyBestScore();
    
    static int level;
    static float score;
    static float total;
    static bool admobIsShow;
    static bool admobIsLoaded;
    static int admobHeight;
    
    static std::string flurryEventName;
    void logEvent(std::string eventName);
    void postNotification(std::string notificationName);
    
    void submitScore();
    void showLeaderBoard();
    void shareFacebook(std::string path);
    
    cocos2d::CCArray *textureArray;
    
    CREATE_FUNC(Global);
};

std::string randomString(unsigned int len);
std::string base64_encode(unsigned char const* , unsigned int len);
std::string base64_decode(std::string const& s);



#endif /* defined(__EggSeed__Global__) */
