
/* JUS-CLASS jus_Class_02093f78::vfunc_11 [class-virtual] slot 11 of vtable 02093f78 (own slot, not
   inherited) */

undefined4 *
jus_Class_02093f78::vfunc_11
          (undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0x3147434e) {
    iVar1 = FUN_0201a228(0x24);
    if (iVar1 == 0) {
      return (undefined4 *)0x0;
    }
    puVar2 = (undefined4 *)jus_TagNCG1::jus_TagNCG1(iVar1,param_3,param_4,param_5,0x100);
    return puVar2;
  }
  if (param_2 == 0x3247434e) {
    iVar1 = FUN_0201a228(0x24);
    if (iVar1 == 0) {
      return (undefined4 *)0x0;
    }
    puVar2 = (undefined4 *)jus_TagNCG2::jus_TagNCG2(iVar1,param_3,param_4,param_5);
    return puVar2;
  }
  if (param_2 == 0x3831474e) {
    iVar1 = FUN_0201a228(0x24);
    if (iVar1 == 0) {
      return (undefined4 *)0x0;
    }
    puVar2 = (undefined4 *)jus_TagNG18::jus_TagNG18(iVar1,param_3,param_4,param_5,0x100);
    return puVar2;
  }
  if (param_2 == 0x3443464e) {
    puVar2 = (undefined4 *)FUN_0201a228(0x24);
    if (puVar2 != (undefined4 *)0x0) {
      ::jus_Class_02096f04::jus_Class_02096f04(puVar2,param_3,param_4,param_5,0x100);
      *puVar2 = &jus_TagNFC4::vftable;
    }
    return puVar2;
  }
  if (param_2 == 0x344c4646) {
    iVar1 = FUN_0201a228(0x78);
    if (iVar1 == 0) {
      return (undefined4 *)0x0;
    }
    puVar2 = (undefined4 *)jus_TagFFL4::jus_TagFFL4(iVar1,param_3,param_4,param_5,0);
    return puVar2;
  }
  if (param_2 != 0x3450434c) {
    return (undefined4 *)0x0;
  }
  iVar1 = FUN_0201a228(0x24);
  if (iVar1 == 0) {
    return (undefined4 *)0x0;
  }
  puVar2 = (undefined4 *)jus_TagLCP4::jus_TagLCP4(iVar1,param_3,param_4,param_5,0);
  return puVar2;
}

