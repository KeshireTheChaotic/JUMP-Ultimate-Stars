
undefined4 FUN_02152d1c(int param_1,undefined4 param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x100) == *(int *)(param_1 + 0xfc)) {
    return 0;
  }
  *(undefined4 *)(*(int *)(param_1 + 0xb4) + *(int *)(param_1 + 0x104) * 0x14f4) =
       *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(*(int *)(param_1 + 0x104) * 0x14f4 + *(int *)(param_1 + 0xb4) + 4) = param_2;
  iVar1 = FUN_01fff9a8(*(int *)(param_1 + 0x104) * 0x14f4 + *(int *)(param_1 + 0xb4));
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar1;
  *(int *)(param_1 + 0x104) = *(int *)(param_1 + 0x104) + 1;
  if (*(int *)(param_1 + 0x104) == *(int *)(param_1 + 0x20)) {
    *(undefined4 *)(param_1 + 0x104) = 0;
  }
  *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + 1;
  return 1;
}

