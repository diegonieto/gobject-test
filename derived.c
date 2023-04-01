#include "derived.h"

typedef struct
{
    int foo;
} GstFooDerivedPrivate;

G_DEFINE_TYPE_WITH_PRIVATE(GstFooDerived, gst_fooderived, GST_TYPE_FOOBASE)

void gst_fooderived_bar();

static void
gst_fooderived_class_init(GstFooDerivedClass *klass)
{
    g_print("%s\n", __FUNCTION__);
    klass->bar = gst_fooderived_bar;
}

static void
gst_fooderived_init(GstFooDerived *self)
{
    g_print("%s\n", __FUNCTION__);
    GstFooDerivedPrivate *priv = gst_fooderived_get_instance_private(self);
    priv->foo;
}

void gst_fooderived_bar()
{
    g_print("%s\n", __FUNCTION__);
}
