
/* JUS-CLASS jus_TagDUMY::vfunc_15 [class-virtual] slot 15 of vtable 02094b0c (own slot, not
   inherited) */

void jus_TagDUMY::vfunc_15(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
                    /* JUS-TAG strings=["Stream"] */
  iVar4 = param_1[8];
  if ((iVar4 != 0) && (iVar1 = FUN_0201a9ec(iVar4), iVar1 == 0)) {
    FUN_0201a958(iVar4,1);
  }
  iVar4 = DAT_02093c00;
  iVar1 = (**(code **)(*param_1 + 0x1c))();
  iVar1 = FUN_0200d338(iVar4 + iVar1 + -1,iVar4);
  uVar3 = DAT_020a0dd8;
  iVar4 = iVar4 * iVar1;
  if (iVar4 == 0) {
    iVar4 = 1;
  }
  if (*(char *)((int)param_1 + 0x1a) == '\0') {
    iVar1 = FUN_0201a228(iVar4);
    param_1[8] = iVar1;
  }
  else {
    uVar2 = FUN_0201a5a4(DAT_020a0dd8,0,0x8000,1,1,param_4);
    iVar1 = FUN_0201a5a4(uVar3,0,iVar4,0,1);
    FUN_0201a958(uVar2,1);
    param_1[8] = iVar1;
  }
  if (param_1[4] == 0) {
    FUN_0201ac08(param_1[8],s_Stream_0209d9f4);
  }
  else {
    FUN_0201ac08(param_1[8]);
  }
  uVar3 = (**(code **)(*param_1 + 0x28))();
  (**(code **)(*param_1 + 0x14))(param_1,param_1[8],iVar4);
  (**(code **)(*param_1 + 0x24))(param_1,uVar3);
  (**(code **)(*param_1 + 0x38))();
  return;
}

