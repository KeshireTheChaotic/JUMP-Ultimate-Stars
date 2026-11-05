
/* JUS-GAME ALWidgetBaseImp::CreateImpFunc [source-string] __FILE__="ALWidgetBaseImp.h"
   __FUNCTION__="CreateImpFunc" lines=[258] passed to 1 source-location call(s) */

void ALWidgetBaseImp::CreateImpFunc(void)

{
  int iVar1;
  undefined4 in_r3;
  
  iVar1 = jus_AllocDebug(0x134,s_ALWidgetBaseImp_h_021d3cb4,s_CreateImpFunc_021d3c00,0x102,in_r3);
  if (iVar1 == 0) {
    return;
  }
  ALWidgetBase_021d3498::ALWidgetBase_021d3498(iVar1,0,0,CreateDrawFunc);
  return;
}

