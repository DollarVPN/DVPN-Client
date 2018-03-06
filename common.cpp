#include "common.h"

#include <QFontDatabase>

std::auto_ptr<Common> Common::mInstance;
Common * Common::instance()
{
    if (!mInstance.get())
        mInstance.reset(new Common());
    return mInstance.get();
}
Common::Common(QObject *parent) : QObject(parent)
{

}
