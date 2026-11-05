
void FUN_021541a4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uStack_c = param_4;
  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0x10) + 4),0x215422d);
  }
  iVar1 = FUN_02026f94();
  *(int *)(param_1 + 0x10) = iVar1;
  (**(code **)(**(int **)(iVar1 + 4) + 0x24))(*(int **)(iVar1 + 4),param_1);
  FUN_02028384(*(undefined4 *)(*(int *)(param_1 + 0x10) + 4),0x2154245);
  local_10 = 0x80000;
  FUN_0214ed20(*(undefined4 *)(param_1 + 0x10),&local_10);
  return;
}

