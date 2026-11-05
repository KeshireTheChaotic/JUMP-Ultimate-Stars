
/* JUS-CLASS jus_TagDUMY_Derived_02094a34::vfunc_05 [class-virtual] slot 5 of vtable 02094a34 (own
   slot, not inherited) */

int jus_TagDUMY_Derived_02094a34::vfunc_05(int param_1,int param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar1 = DAT_020a10a8;
  if ((DAT_020a10a8 == 0) || (param_3 < DAT_020a10a8)) {
    iVar2 = FUN_02064430(*(undefined4 *)(param_1 + 0x24),param_2,param_3);
    DC_FlushRange(param_2,param_3);
    *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar2;
    return iVar2;
  }
  uVar3 = FUN_0200d338(param_3 + DAT_020a10a8 + -1,DAT_020a10a8,param_3,&DAT_020a0c34,param_4);
  iVar2 = 0;
  uVar5 = 0;
  iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 0x2c) - *(int *)(*(int *)(param_1 + 0x24) + 0x24);
  while ((uVar5 < uVar3 && (DAT_020a10a8 != 0))) {
    FUN_020643f4(*(undefined4 *)(param_1 + 0x24),iVar4,0);
    iVar4 = FUN_02064430(*(undefined4 *)(param_1 + 0x24),uVar5 * uVar1 + param_2);
    iVar2 = iVar2 + iVar4;
    iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 0x2c) - *(int *)(*(int *)(param_1 + 0x24) + 0x24);
    (*DAT_020a0e18)();
    uVar5 = uVar5 + 1;
  }
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + iVar2;
  return iVar2;
}

