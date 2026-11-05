
void FUN_02158594(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int local_18;
  int local_14;
  
  local_18 = (int)*(short *)(*(int *)(param_1 + 4) + 0xa2) << 0xc;
  local_14 = (int)*(short *)(*(int *)(param_1 + 4) + 0xa0) << 0xc;
  FUN_0214e990(param_1,&local_14,&local_18);
  iVar1 = FUN_0215817c(param_1,0x31305053);
  iVar2 = 0;
  if (DAT_0215ec34 != 0) {
    iVar2 = *(int *)(DAT_0215ec34 + 0x30);
  }
  if (DAT_0215ec34 != 0 && iVar2 != 0) {
    uVar3 = (**(code **)(**(int **)(iVar2 + 4) + 0x194))();
    iVar2 = DAT_0215ec34;
    uVar4 = FUN_0214fb7c(*(undefined4 *)(DAT_0215ec34 + 4));
    uVar5 = FUN_02157f80(uVar4,*(undefined1 *)(iVar2 + 2),uVar3);
    if (uVar5 < 3) {
      FUN_02023894(*(undefined4 *)(iVar1 + 4),0x851038,0);
    }
    else {
      FUN_02023894(*(undefined4 *)(iVar1 + 4),0x85100c,0);
    }
    (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0x6c))();
  }
  return;
}

