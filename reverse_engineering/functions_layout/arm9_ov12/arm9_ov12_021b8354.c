
/* JUS-CLASS ALDrawLinkImp_021d2e58_Derived_021d30c8::ALDrawLinkImp_021d2e58_Derived_021d30c8
   [class-derived] stores vtable 021d30c8 into *this (constructor) */

undefined4 *
ALDrawLinkImp_021d2e58_Derived_021d30c8::ALDrawLinkImp_021d2e58_Derived_021d30c8
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  
  local_10 = param_4;
  ALDrawLinkImp_021d2e58::ALDrawLinkImp_021d2e58(param_1,ALDrawLinkImp::CreateDrawFunc);
  *param_1 = &vftable;
  param_1[0x24] = param_2;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  local_10 = 0xf0000;
  FUN_021b83e8(param_1,&local_10);
  (**(code **)(*(int *)param_1[0x19] + 0x28))((int *)param_1[0x19],1);
  return param_1;
}

