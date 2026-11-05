
/* JUS-CLASS ALDrawLinkImp_021d2e58_Derived_021d334c::ALDrawLinkImp_021d2e58_Derived_021d334c
   [class-derived] stores vtable 021d334c into *this (constructor) */

undefined4 *
ALDrawLinkImp_021d2e58_Derived_021d334c::ALDrawLinkImp_021d2e58_Derived_021d334c
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  uStack_c = param_4;
  ALDrawLinkImp_021d2e58::ALDrawLinkImp_021d2e58(param_1,ALDrawLinkImp::CreateDrawFunc);
  *param_1 = &vftable;
  param_1[0x25] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  FUN_021aca28(param_1 + 0x2a);
  *(undefined1 *)(param_1 + 0x2e) = 1;
  *(undefined1 *)((int)param_1 + 0xb9) = 0;
  *(undefined1 *)((int)param_1 + 0xba) = 0;
  *(undefined2 *)(param_1 + 0x2f) = 0;
  *(undefined2 *)((int)param_1 + 0xbe) = 0;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[0x24] = 0;
  local_10 = 0x40000;
  FUN_021b83e8(param_1,&local_10);
  FUN_02027de8(param_1,1);
  FUN_020282f4(param_1);
  return param_1;
}

