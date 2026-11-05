
/* JUS-CLASS jus_Class_02093ff0::vfunc_11 [class-virtual] slot 11 of vtable 02093ff0 (own slot, not
   inherited) */

undefined4
jus_Class_02093ff0::vfunc_11(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0x384c4150) {
    uVar2 = param_4;
    iVar1 = FUN_0201a228(0x24);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = jus_TagPAL8::jus_TagPAL8(iVar1,param_3,param_4,0,uVar2);
    return uVar2;
  }
  if (param_2 == 0x344c4150) {
    iVar1 = FUN_0201a228(0x24);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = jus_TagPAL4::jus_TagPAL4(iVar1,param_3,param_4,0);
    return uVar2;
  }
  if (param_2 == 0x52344c50) {
    iVar1 = FUN_0201a228(0x24);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = jus_TagPL4R::jus_TagPL4R(iVar1,param_3,param_4,0);
    return uVar2;
  }
  if (param_2 != 0x314c4150) {
    return 0;
  }
  iVar1 = FUN_0201a228(0x24);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = jus_TagPAL1::jus_TagPAL1(iVar1,param_3,param_4,0);
  return uVar2;
}

