#ifndef __SPLASH_SCENE_H__
#define __SPLASH_SCENE_H__

#include "cocos2d.h"

class SplashScene : public cocos2d::Layer
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();
    CREATE_FUNC(SplashScene);
    
private:
    void GoToMainMenuScene(float dt);

};

#endif // __HELLOWORLD_SCENE_H__
