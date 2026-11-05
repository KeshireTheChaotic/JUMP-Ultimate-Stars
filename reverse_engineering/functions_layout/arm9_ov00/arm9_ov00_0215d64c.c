
void FUN_0215d64c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  FUN_0214f8e0(iVar1 + 200);
  FUN_0214f8e0(iVar1 + 0x180);
  *(short *)(iVar1 + 0x1b6) = *(short *)(iVar1 + 0x1b6) + 1;
  if (*(ushort *)(iVar1 + 0x1b6) < 0x79) {
    return;
  }
  *(undefined2 *)(iVar1 + 0x1b6) = 0;
  FUN_02073fa4(0xe,2,8,iVar1 + 0x100,param_4);
  FUN_0214fa3c(iVar1 + 200);
  FUN_0214fa3c(iVar1 + 0x180);
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215db1c);
  return;
}

