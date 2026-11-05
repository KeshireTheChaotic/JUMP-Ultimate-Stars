
undefined4 FUN_02152e08(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int iStack_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  
  if (*(uint *)(param_1 + 0x110) <= *(uint *)(param_1 + 0x114)) {
    return 0;
  }
  iStack_14 = param_3 << 1;
  uStack_20 = *(undefined4 *)(*(int *)(param_1 + 0xb8) + *(int *)(param_1 + 0x128) * 4);
  uStack_1c = *(undefined4 *)(*(int *)(param_1 + 0xbc) + *(int *)(param_1 + 0x128) * 4);
  uStack_10 = *(undefined4 *)(param_1 + 0xc);
  uStack_c = *(undefined4 *)(param_1 + 0x10);
  uStack_18 = param_2;
  FUN_01ffec80(&uStack_20);
  *(int *)(param_1 + 0x114) = *(int *)(param_1 + 0x114) + 1;
  *(int *)(param_1 + 0x128) = *(int *)(param_1 + 0x128) + 1;
  if (*(int *)(param_1 + 0x128) == *(int *)(param_1 + 0xcc)) {
    *(undefined4 *)(param_1 + 0x128) = 0;
  }
  return 1;
}

