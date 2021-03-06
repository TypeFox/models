/*----------------------------------------------------------------------------
 * File:  dsl_CARHOME_class.c
 *
 * Class:       carousel home  (CARHOME)
 * Component:   dsl
 *
 * your copyright statement can go here (from te_copyright.body)
 *--------------------------------------------------------------------------*/

#include "dsl_sys_types.h"
#include "dsl_classes.h"

/*
 * class operation:  load
 */
i_t
dsl_CARHOME_op_load( const dsl_ASCMD * p_ascmd, const dsl_PROGRAM * p_program)
{

}

/*
 * instance operation:  run
 */
bool
dsl_CARHOME_op_run( dsl_CARHOME * self)
{

}



/*----------------------------------------------------------------------------
 * Operation action methods implementation for the following class:
 *
 * Class:      carousel home  (CARHOME)
 * Component:  dsl
 *--------------------------------------------------------------------------*/
/*
 * Statically allocate space for the instance population for this class.
 * Allocate space for the class instance and its attribute values.
 * Depending upon the collection scheme, allocate containoids (collection
 * nodes) for gathering instances into free and active extents.
 */
static Escher_SetElement_s dsl_CARHOME_container[ dsl_CARHOME_MAX_EXTENT_SIZE ];
static dsl_CARHOME dsl_CARHOME_instances[ dsl_CARHOME_MAX_EXTENT_SIZE ];
Escher_Extent_t pG_dsl_CARHOME_extent = {
  {0}, {0}, &dsl_CARHOME_container[ 0 ],
  (Escher_iHandle_t) &dsl_CARHOME_instances,
  sizeof( dsl_CARHOME ), dsl_CARHOME_STATE_1, dsl_CARHOME_MAX_EXTENT_SIZE
  };
/*----------------------------------------------------------------------------
 * State and transition action implementations for the following class:
 *
 * Class:      carousel home  (CARHOME)
 * Component:  dsl
 *--------------------------------------------------------------------------*/

/*
 * State 1:  [a]
 */
static void dsl_CARHOME_act1( dsl_CARHOME *, const Escher_xtUMLEvent_t * const );
static void
dsl_CARHOME_act1( dsl_CARHOME * self, const Escher_xtUMLEvent_t * const event )
{
}



  /*
   * Array of pointers to the class state action procedures.
   * Index is the (MC enumerated) number of the state action to execute.
   */
  static const StateAction_t dsl_CARHOME_acts[ 2 ] = {
    (StateAction_t) 0,
    (StateAction_t) dsl_CARHOME_act1  /* a */
  };

/*
 * For this state machine, there are either no events,
 * no transitions, or no states.
 */
void
dsl_CARHOME_Dispatch( Escher_xtUMLEvent_t * event )
{
  /*
   * This is an empty state machine, which is not good to have.
   * But since there are no events that could land here, we will
   * ignore this and assume that it is an incomplete model.
   */
}


