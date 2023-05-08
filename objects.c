#include <glib.h>
#include <glib-object.h>

#include "base.h"
#include "derived.h"

#include "iface-implemented.h"

int main()
{
    GstFooDerived *obj;
    obj = g_object_new(GST_TYPE_FOODERIVED, NULL);

    gst_foobase_bar(obj);


    FooIface *iface;
    obj = g_object_new(FOO_TYPE_IMPLEMENTED, NULL);
    foo_iface_baz(obj, NULL);

    return 0;
}
