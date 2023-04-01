#include "base.h"

G_DEFINE_TYPE_WITH_PRIVATE(GstFooBase, gst_foobase, G_TYPE_OBJECT)

void gst_foobase_base_bar()
{
    g_print("%s\n", __FUNCTION__);
}

static void gst_foobase_class_init(GstFooBaseClass *klass)
{
    klass->bar = gst_foobase_base_bar;
    g_print("%s\n", __FUNCTION__);
}

static void gst_foobase_init(GstFooBase *klass)
{
    g_print("%s\n", __FUNCTION__);
}

void gst_foobase_bar(GstFooBase *self)
{
    g_print("%s\n", __FUNCTION__);
    GstFooBaseClass *klass;
    klass = GST_FOOBASE_GET_CLASS(self);
    klass->bar();
}
