
void FUN_0216378c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_02083624(FUN_02163630,param_1,param_2,param_3,0);
  *(undefined4 *)(*(int *)(iVar1 + 0x10) + 0x6c) = *(undefined4 *)(param_1[2] + 0x18);
  FUN_02163584(iVar1,1);
  FUN_021635a4(iVar1,1);
  if (iVar1 != 0) {
    FUN_0207a878(*(undefined4 *)(iVar1 + 0x14));
  }
  FUN_02023894(*(undefined4 *)(*(int *)(iVar1 + 0xc) + 4),*(byte *)(param_1[1] + 0xd) + 0x401200,0);
  (**(code **)(**(int **)(*(int *)(*(int *)(iVar1 + 0xc) + 4) + 0x68) + 0x6c))();
  *param_1 = iVar1;
  *(undefined1 *)(iVar1 + 0x39) = *(undefined1 *)(param_1[1] + 0xc);
  return;
}

