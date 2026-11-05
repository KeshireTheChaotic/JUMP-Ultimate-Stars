
/* JUS-CLASS jus_Class_02093f78::vfunc_12 [class-virtual] slot 12 of vtable 02093f78 (own slot, not
   inherited) */

undefined4 jus_Class_02093f78::vfunc_12(undefined4 param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0x3147434e) {
    iVar1 = FUN_0201a228(0x24);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = jus_TagNCG1::jus_TagNCG1(iVar1,param_3);
    return uVar2;
  }
  if (param_2 == 0x3247434e) {
    iVar1 = FUN_0201a228(0x24);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = jus_TagNCG2::jus_TagNCG2(iVar1,param_3);
    return uVar2;
  }
  if (param_2 == 0x3831474e) {
    iVar1 = FUN_0201a228(0x24);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = jus_TagNG18::jus_TagNG18(iVar1,param_3);
    return uVar2;
  }
  if (param_2 == 0x3443464e) {
    iVar1 = FUN_0201a228(0x24);
    if (iVar1 == 0) {
      return 0;
    }
    uVar2 = jus_TagNFC4::jus_TagNFC4(iVar1,param_3);
    return uVar2;
  }
  if (param_2 != 0x344c4646) {
    return 0;
  }
  iVar1 = FUN_0201a228(0x78);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = jus_TagFFL4::jus_TagFFL4(iVar1,param_3);
  return uVar2;
}

