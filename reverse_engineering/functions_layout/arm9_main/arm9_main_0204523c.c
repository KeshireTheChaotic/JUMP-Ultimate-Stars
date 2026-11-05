
void FUN_0204523c(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  bool bVar7;
  
  uVar1 = (*(byte *)(param_1 + 0x28) & 7) >> 2;
  bVar7 = uVar1 != param_2;
  if (bVar7 && param_2 != 0) {
    uVar1 = *(uint *)(param_1 + 0x20);
  }
  if ((bVar7 && param_2 != 0) && uVar1 != 0) {
    piVar5 = *(int **)(param_1 + 0x4c);
    (**(code **)(*piVar5 + 0xa0))();
    iVar2 = (**(code **)(*piVar5 + 0x80))();
    uVar3 = (**(code **)(**(int **)(param_1 + 0x20) + 0x5c))();
    uVar3 = FUN_02045664(iVar2,uVar3);
    *(undefined4 *)(param_1 + 0x50) = uVar3;
    uVar3 = DAT_0209dd40;
    iVar2 = *(int *)(iVar2 + 0x1c);
    iVar6 = (*(int **)(param_1 + 0x20))[3];
    uVar4 = (**(code **)(**(int **)(param_1 + 0x20) + 0x5c))();
    FUN_0205160c(uVar3,iVar6,iVar2 + *(int *)(param_1 + 0x50),uVar4);
    piVar5 = (int *)(**(code **)(**(int **)(param_1 + 0x20) + 100))();
    *(int **)(param_1 + 0x30) = piVar5;
    (**(code **)(*piVar5 + 8))();
    FUN_02029e88(*(undefined4 *)(param_1 + 0x30));
    (**(code **)(**(int **)(param_1 + 0x20) + 0xc))();
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) & 0xfb | (byte)((param_2 & 1) << 2);
    if (*(int *)(param_1 + 0x3c) == 0) {
      return;
    }
    (**(code **)(**(int **)(param_1 + 0x1c) + 0x3c))();
    if (*(int *)(param_1 + 0x60) != 0) {
      uVar3 = FUN_0201a228();
      FUN_02051890(*(undefined4 *)(param_1 + 0x5c),uVar3,*(undefined4 *)(param_1 + 0x60));
      *(undefined4 *)(param_1 + 0x5c) = uVar3;
      *(undefined1 *)(param_1 + 0x68) = 1;
    }
    (**(code **)(**(int **)(param_1 + 0x3c) + 0xc))();
    *(undefined4 *)(param_1 + 0x3c) = 0;
    return;
  }
  return;
}

