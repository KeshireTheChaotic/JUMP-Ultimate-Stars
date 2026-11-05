
/* JUS-CLASS jus_Class_02093f78::vfunc_06 [class-virtual] slot 6 of vtable 02093f78 (own slot, not
   inherited) */

undefined4
jus_Class_02093f78::vfunc_06
          (undefined4 param_1,undefined4 param_2,int param_3,uint param_4,undefined1 param_5)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auStack_128 [8];
  undefined1 auStack_120 [256];
  uint uStack_20;
  
  uStack_20 = param_4;
  FUN_02004b18(auStack_120,&DAT_020aa1f4);
  FUN_02004bcc(auStack_120,param_2);
  iVar1 = FUN_020645d8(auStack_128,auStack_120);
  if (iVar1 == 0) {
    for (uVar3 = 0; uVar3 < param_4; uVar3 = uVar3 + 1) {
      uVar2 = FUN_02033c20(auStack_120,*(undefined4 *)(param_3 + uVar3 * 4));
      iVar1 = FUN_020645d8(auStack_128,uVar2);
      if (iVar1 != 0) {
        iVar1 = jus_AllocDebug(0x28);
        if (iVar1 == 0) {
          return 0;
        }
        uVar2 = jus_TagDUMY_Derived_02094a34::jus_TagDUMY_Derived_02094a34
                          (iVar1,auStack_128,param_2,param_5);
        return uVar2;
      }
    }
    uVar2 = 0;
  }
  else {
    iVar1 = jus_AllocDebug(0x28);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = jus_TagDUMY_Derived_02094a34::jus_TagDUMY_Derived_02094a34
                        (iVar1,auStack_128,param_2,param_5);
    }
  }
  return uVar2;
}

