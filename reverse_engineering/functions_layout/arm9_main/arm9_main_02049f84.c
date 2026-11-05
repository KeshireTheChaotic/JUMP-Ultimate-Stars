
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-CLASS jus_Class_020972e0::vfunc_34 [class-virtual] slot 34 of vtable 020972e0 (own slot, not
   inherited) */

int jus_Class_020972e0::vfunc_34(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int aiStack_8 [2];
  
  iVar1 = FUN_020619a0((int)(_DAT_04000304 & 0x8000) >> 0xf != 1,param_2,0x2061d35,aiStack_8);
  if (iVar1 == 0) {
    FUN_02061d38();
    iVar1 = aiStack_8[0];
  }
  return iVar1;
}

