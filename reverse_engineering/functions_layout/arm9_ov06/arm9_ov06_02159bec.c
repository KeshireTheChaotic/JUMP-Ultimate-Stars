
void FUN_02159bec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 auStack_18 [4];
  undefined1 auStack_14 [4];
  undefined4 uStack_10;
  
  iVar1 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uStack_10 = param_4;
  FUN_021536c4(auStack_14,**(undefined4 **)(iVar1 + 0x1a0));
  FUN_021536a4(param_1,auStack_14);
  FUN_0214f068(auStack_18,**(undefined4 **)(iVar1 + 0x1a0));
  FUN_02153684(param_1,auStack_18);
  iVar1 = (**(code **)(**(int **)(*(int *)(param_1 + 4) + 0x68) + 0x68))();
  if (iVar1 != 0) {
    (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),0);
  }
  return;
}

