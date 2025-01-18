#ifndef _WIN32API_H_
#define _WIN32API_H_

#include <Windows.h>
#include "ZephyrUI/zCore/zEnumerations.h"

namespace zUI
{
    namespace zPlatform
    {
        namespace Win32API
        {
            class WidgetAPI // The soul purpose of this is to eliminate code that will be repeated
            {
                public:
                static RECT calculateScaleAndSize(zCore::zEnumerations::zComponentScale zComponentScale, int zComponentAlign, HWND hwnd, LPARAM lParam);
            };
        }
    }
}

#endif /*_WIN32API_H_*/