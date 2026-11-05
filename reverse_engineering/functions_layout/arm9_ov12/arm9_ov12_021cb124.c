
undefined2 FUN_021cb124(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x34);
  while (iVar1 != param_1) {
    *(short *)(iVar1 + 4) = *(short *)(iVar1 + 4) + 1;
    iVar1 = *(int *)(iVar1 + 0x34);
  }
  *(short *)(param_1 + 4) = *(short *)(param_1 + 4) + 1;
  return *(undefined2 *)(param_1 + 4);
}

