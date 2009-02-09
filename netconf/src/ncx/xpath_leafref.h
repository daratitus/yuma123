#ifndef _H_xpath_leafref
#define _H_xpath_leafref

/*  FILE: xpath_leafref.h
*********************************************************************
*								    *
*			 P U R P O S E				    *
*								    *
*********************************************************************

    Leafref data type Xpath support

*********************************************************************
*								    *
*		   C H A N G E	 H I S T O R Y			    *
*								    *
*********************************************************************

date	     init     comment
----------------------------------------------------------------------
13-nov-08    abb      Begun

*/

#include <xmlstring.h>
#include <xmlreader.h>
#include <xmlregexp.h>

#ifndef _H_dlq
#include "dlq.h"
#endif

#ifndef _H_ncxtypes
#include "ncxtypes.h"
#endif

#ifndef _H_status
#include "status.h"
#endif

#ifndef _H_obj
#include "obj.h"
#endif

#ifndef _H_tk
#include "tk.h"
#endif

#ifndef _H_val
#include "val.h"
#endif


/********************************************************************
*								    *
*			 C O N S T A N T S			    *
*								    *
*********************************************************************/

/********************************************************************
*								    *
*			     T Y P E S				    *
*								    *
*********************************************************************/

/********************************************************************
*								    *
*			F U N C T I O N S			    *
*								    *
*********************************************************************/

extern status_t
    xpath_leafref_parse_path (tk_chain_t *tkc,
			      ncx_module_t *mod,
			      xpath_pcb_t *pcb);

extern status_t
    xpath_leafref_validate_path (ncx_module_t *mod,
				 const obj_template_t *obj,
				 xpath_pcb_t *pcb,
				 const obj_template_t **leafobj);

extern status_t
    xpath_leafref_validate_xmlpath (xmlTextReaderPtr reader,
				    xpath_pcb_t *pcb,
				    boolean logerrors,
				    const obj_template_t **targobj);



#endif	    /* _H_xpath_leafref */
