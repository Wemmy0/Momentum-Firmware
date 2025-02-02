#pragma once

#include <gui/view.h>

#include "desktop_events.h"
#include <storage/storage.h>

#define SLIDESHOW_FS_PATH EXT_PATH(".slideshow")

typedef struct DesktopSlideshowView DesktopSlideshowView;

typedef void (*DesktopSlideshowViewCallback)(DesktopEvent event, void* context);

DesktopSlideshowView* desktop_view_slideshow_alloc(void);

void desktop_view_slideshow_free(DesktopSlideshowView* main_view);

View* desktop_view_slideshow_get_view(DesktopSlideshowView* main_view);

void desktop_view_slideshow_set_callback(
    DesktopSlideshowView* main_view,
    DesktopSlideshowViewCallback callback,
    void* context);
