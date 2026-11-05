
void FUN_02017024(int param_1,undefined2 param_2,undefined2 param_3,int *param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = 0;
  if (*(int **)(param_1 + 0x14) != (int *)0x0) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x14) + 0xc))();
  }
  iVar3 = *(int *)(param_1 + 0xc);
  if (iVar3 != 0) {
    uVar1 = (uint)*(byte *)(param_1 + 0x10);
  }
  if ((iVar3 != 0 && uVar1 != 0) && (iVar2 = FUN_0201a9ec(iVar3), iVar2 == 0)) {
    FUN_0201a958(iVar3,1);
  }
  *(undefined1 *)(param_1 + 0x10) = 0;
  iVar3 = (**(code **)(*param_4 + 0x2c))();
  *(int *)(param_1 + 0xc) = param_5 + iVar3;
  *(int **)(param_1 + 0x14) = param_4;
  (**(code **)(*param_4 + 8))();
  *(undefined2 *)(param_1 + 8) = param_2;
  *(undefined2 *)(param_1 + 10) = param_3;
  return;
}

