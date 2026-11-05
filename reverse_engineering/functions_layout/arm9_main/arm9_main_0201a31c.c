
void FUN_0201a31c(undefined4 param_1,undefined2 *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  short *psVar3;
  
  psVar3 = (short *)((int)param_2 + param_3);
  if (*(short *)((int)param_2 + param_3) == 0x4648) {
    iVar2 = *(int *)(psVar3 + 4);
    *(int *)(param_2 + 6) = param_3 + *(int *)(*(int *)(iVar2 + 4) + 0xc);
    *(int *)(param_2 + 4) = iVar2;
    iVar1 = *(int *)(*(int *)(iVar2 + 4) + 4);
    *(int *)(param_2 + 2) = iVar1;
    *(undefined2 **)(iVar1 + 8) = param_2;
    *(undefined2 **)(iVar2 + 4) = param_2;
    if (param_2 == (undefined2 *)(iVar2 + *(int *)(iVar2 + 0xc))) {
      *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + *(int *)(param_2 + 6);
      *(undefined4 *)(iVar2 + 4) = *(undefined4 *)(param_2 + 2);
      *(int *)(*(int *)(param_2 + 2) + 8) = iVar2;
    }
    *param_2 = 0x4648;
    return;
  }
  for (; *psVar3 != 0x4648; psVar3 = (short *)((int)psVar3 + *(int *)(psVar3 + 8))) {
  }
  iVar1 = *(int *)(psVar3 + 4);
  if (param_2 == (undefined2 *)(iVar1 + *(int *)(iVar1 + 0xc))) {
    *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + param_3;
    return;
  }
  *(undefined4 *)(param_2 + 2) = *(undefined4 *)(iVar1 + 4);
  *(int *)(param_2 + 4) = iVar1;
  *(int *)(param_2 + 6) = param_3;
  *param_2 = 0x4648;
  *(undefined2 **)(*(int *)(iVar1 + 4) + 8) = param_2;
  *(undefined2 **)(iVar1 + 4) = param_2;
  return;
}

