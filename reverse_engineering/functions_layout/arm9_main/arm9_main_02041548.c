
/* JUS-CLASS jus_Class_02093f78::vfunc_05 [class-virtual] slot 5 of vtable 02093f78 (own slot, not
   inherited) */

undefined4
jus_Class_02093f78::vfunc_05
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_118 [8];
  undefined1 auStack_110 [256];
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  FUN_02004b18(auStack_110,&DAT_020aa1f4);
  FUN_02004bcc(auStack_110,param_2);
  iVar1 = FUN_020645d8(auStack_118,auStack_110);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    iVar1 = jus_AllocDebug(0x28);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = jus_TagDUMY_Derived_02094a34::jus_TagDUMY_Derived_02094a34
                        (iVar1,auStack_118,param_2,param_4);
    }
  }
  return uVar2;
}

