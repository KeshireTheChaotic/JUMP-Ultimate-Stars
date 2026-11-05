
int FUN_02168cf4(int param_1,int param_2,int param_3,int param_4,undefined1 param_5,int param_6,
                int param_7,char param_8)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  undefined1 local_28;
  int iStack_20;
  
  iVar5 = *(int *)(*(int *)(param_2 + 0x10) + 0x5c);
  iStack_20 = param_4;
  iVar1 = FUN_02168f6c(param_2);
  iVar6 = param_3;
  if (iVar1 != 0) {
    iVar6 = -param_3;
  }
  iVar6 = *(int *)(iVar5 + 0xc) + iVar6;
  param_4 = *(int *)(iVar5 + 0x10) + param_4;
  iVar1 = FUN_020836b4(iVar6 + 0x800,param_4 + -0x400);
  if ((iVar1 == 0) || (iVar6 = FUN_020836b4(iVar6 + -0x800,param_4 + -0x400), iVar6 == 0)) {
    iVar6 = FUN_02168f6c(param_2);
    if (iVar6 == 0) {
      local_30 = *(int *)(iVar5 + 0xc) - param_3;
    }
    else {
      local_30 = *(int *)(iVar5 + 0xc) + param_3;
    }
  }
  else {
    iVar6 = FUN_02168f6c(param_2);
    if (iVar6 != 0) {
      param_3 = -param_3;
    }
    local_30 = *(int *)(iVar5 + 0xc) + param_3;
  }
  local_2c = param_4;
  if (param_8 != '\0') {
    local_40 = local_30;
    local_3c = param_4;
    FUN_0216e6d4(param_2,&local_40,&local_48);
    local_30 = local_48;
    local_2c = local_44;
  }
  uVar3 = *(uint *)(*(int *)(param_2 + 0x10) + 0x3c);
  iVar6 = *(int *)(DAT_02172994 + 8);
  uVar3 = uVar3 | (uVar3 & 0xf) << 4;
  uVar4 = *(uint *)(*(int *)(param_2 + 0x10) + 0x34);
  if (iVar6 == 0) {
    iVar6 = 0;
  }
  else {
    *(undefined1 *)(iVar6 + 0x33) = 0xff;
    local_34 = param_6;
    *(int *)(iVar6 + 0x1c) = param_6;
    if (param_6 == 1) {
      uVar4 = 0x100;
    }
    local_28 = param_5;
    if (param_6 == 1) {
      uVar3 = 0x7f0;
    }
    local_38 = param_1;
    iVar1 = FUN_020834d4(FUN_021690cc,&local_38,uVar4 & 0xfffffff0 | (uVar4 & 0xf) << 4,0x800,
                         uVar3 & 0xcfffffff,0);
    *(int *)(iVar6 + 8) = iVar1;
    if (iVar1 == 0) {
      iVar6 = 0;
    }
    else {
      *(int *)(iVar6 + 0xc) = param_2;
      FUN_02169030(param_1,1);
      *(undefined4 *)(*(int *)(*(int *)(iVar6 + 8) + 0x10) + 0x6c) = *(undefined4 *)(param_1 + 0x84)
      ;
      if (*(int *)(iVar6 + 8) != 0) {
        FUN_0207a878(*(undefined4 *)(*(int *)(iVar6 + 8) + 0x14));
      }
      iVar1 = *(int *)(*(int *)(iVar6 + 8) + 0x10);
      *(uint *)(iVar1 + 0x40) = *(uint *)(iVar1 + 0x40) | 8;
      iVar1 = FUN_0216908c(*(undefined4 *)(*(int *)(iVar6 + 8) + 8));
      FUN_02028330(*(undefined4 *)(iVar1 + 4));
      piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 8) + 4) + 100);
      (**(code **)(*piVar2 + 0x5c))(piVar2,param_5);
      FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0xc) + 4),*(int *)(param_1 + 0x88) + param_7,0
                  );
      (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0xc) + 4) + 0x68) + 0x6c))();
      FUN_0207506c(param_1,param_5);
      FUN_02037c24(DAT_02172994 + 8,iVar6);
      FUN_02037b98(DAT_02172994,iVar6);
      *(undefined **)(iVar6 + 0x14) = &DAT_021696d0;
      (*(code *)(&PTR_LAB_021726f8)[param_6])(iVar6);
    }
  }
  return iVar6;
}

