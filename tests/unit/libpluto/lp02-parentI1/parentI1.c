#include "parentI1_head.c"
#include "seam_x509.c"
#include "seam_keys.c"

#include "seam_host_parker.c"
#define TESTNAME "parentI1"

static void init_local_interface(void)
{
    init_parker_interface();
}

static void init_fake_secrets(void)
{
    osw_load_preshared_secrets(&pluto_secrets
			       , TRUE
			       , "../samples/parker.secrets"
			       , NULL);
}

#include "parentI1_main.c"


 /*
 * Local Variables:
 * c-style: pluto
 * c-basic-offset: 4
 * compile-command: "make check"
 * End:
 */
