
void FUN_021583f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xac))();
  if (iVar1 == 1) {
    iVar1 = FUN_0203b3f4();
    iVar1 = FUN_0214d4a4(*(undefined4 *)(iVar1 + 0x88),0x851000,7,0x20);
    local_18 = 0;
    local_14 = 0x9000;
    FUN_0214e990(iVar1,&local_14,&local_18);
    (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
    FUN_0214e908(param_1,iVar1);
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x98) = 0x20;
  return;
}

