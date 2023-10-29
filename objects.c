#include <glib.h>
#include <glib-object.h>
#include <stdio.h>

#include "base.h"
#include "derived.h"

#include "iface-implemented.h"

int main()
{
    GstFooDerived *obj;
    obj = g_object_new(GST_TYPE_FOODERIVED, NULL);
    gst_foobase_bar((GstFooBase *)obj);

    g_print("-- step --\n");

    // GstFooBase class_init not called this time, only init
    GstFooFinal *obj2;
    obj2 = g_object_new(GST_TYPE_FOOFINAL, NULL);
    gst_foobase_bar((GstFooBase *)obj2);

    g_print("-- step --\n");

    // This demonstrates class_init are only called once
    GstFooFinal *obj3;
    obj3 = g_object_new(GST_TYPE_FOOFINAL, NULL);
    gst_foobase_bar((GstFooBase *)obj3);

    g_print("-- step --\n");

    FooIface *iface;
    obj = g_object_new(FOO_TYPE_IMPLEMENTED, NULL);
    foo_iface_baz((FooIface  *)obj, NULL);

    return 0;
}
