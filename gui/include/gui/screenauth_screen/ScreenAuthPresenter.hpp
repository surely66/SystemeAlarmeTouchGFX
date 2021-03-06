#ifndef SCREENAUTH_PRESENTER_HPP
#define SCREENAUTH_PRESENTER_HPP

#include <gui/model/ModelListener.hpp>
#include <mvp/Presenter.hpp>

using namespace touchgfx;

class ScreenAuthView;

class ScreenAuthPresenter : public Presenter, public ModelListener
{
public:
    ScreenAuthPresenter(ScreenAuthView& v);

    /**
     * The activate function is called automatically when this screen is "switched in"
     * (ie. made active). Initialization logic can be placed here.
     */
    virtual void activate();

    /**
     * The deactivate function is called automatically when this screen is "switched out"
     * (ie. made inactive). Teardown functionality can be placed here.
     */
    virtual void deactivate();
    virtual void nbVoleursChanged();
    virtual void CodeEntreChanged();
    virtual void authChanged();
    virtual void ColorBarChanged();
    virtual void AlphaTXTChanged();
    virtual void BTNChanged();
    virtual void BTNXauthview();
    virtual void GoToCodes();
    virtual ~ScreenAuthPresenter() {};

private:
    ScreenAuthPresenter();

    ScreenAuthView& view;
};


#endif // SCREENAUTH_PRESENTER_HPP
