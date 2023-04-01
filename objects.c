#include <glib.h>
#include <glib-object.h>

#include "base.h"
#include "derived.h"

int main()
{
    GstFooDerived *obj;
    obj = g_object_new(GST_TYPE_FOODERIVED, NULL);

    gst_foobase_bar(obj);

    return 0;
}
