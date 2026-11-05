
void FUN_02166250(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(ushort *)(iVar1 + 0x96) < 0xe) {
    *(ushort *)(iVar1 + 0x96) = *(ushort *)(iVar1 + 0x96) + 1;
    return;
  }
  FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02166284,iVar1,param_4,param_4);
  return;
}

