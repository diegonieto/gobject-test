#include "derived.h"

/* FINAL */

G_DEFINE_TYPE (GstFooFinal, gst_foofinal, GST_TYPE_FOOBASE)

static void
gst_foofinal_bar ()
{
    g_print("%s\n", __FUNCTION__);
}

static void
gst_foofinal_class_init (GstFooFinalClass *klass)
{
    g_print("%s\n", __FUNCTION__);
    GstFooBaseClass *base = (GstFooBaseClass *)klass;
    base->bar = gst_foofinal_bar;
}

static void
gst_foofinal_init (GstFooFinal *self)
{
    g_print("%s\n", __FUNCTION__);
}

/* DERIVABLE */

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
    GstFooBaseClass *base = GST_FOOBASE_CLASS(klass);
    base->bar = gst_fooderived_bar;
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
