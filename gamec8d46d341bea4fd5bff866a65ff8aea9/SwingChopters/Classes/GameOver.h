#ifndef __GameOver_SCENE_H__
#define __GameOver_SCENE_H__

#include "cocos2d.h"

class GameOver : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    void share(Ref *object);
    void reStart(Ref *object);
    void gohome(Ref *object);
    cocos2d::Color4B getLevelBackground(int level);
    
    // implement the "static create()" method manually
    CREATE_FUNC(GameOver);
};

#endif // __GameOver_SCENE_H__
