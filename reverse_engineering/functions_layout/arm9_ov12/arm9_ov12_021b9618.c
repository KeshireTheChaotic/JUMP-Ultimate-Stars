
/* JUS-CLASS ALDrawLinkImp_021d2e58_Derived_021d2f8c::ALDrawLinkImp_021d2e58_Derived_021d2f8c
   [class-derived] stores vtable 021d2f8c into *this (constructor) */

undefined4 *
ALDrawLinkImp_021d2e58_Derived_021d2f8c::ALDrawLinkImp_021d2e58_Derived_021d2f8c
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ALDrawLinkImp_021d2e58::ALDrawLinkImp_021d2e58
            (param_1,ALDrawLinkImp::CreateDrawFunc,param_3,param_4,param_4);
  *param_1 = &vftable;
  param_1[0x24] = param_2;
  param_1[0x25] = param_3;
  param_1[0x26] = 0;
  *(char *)(param_1 + 0x27) = (char)param_4;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  return param_1;
}

