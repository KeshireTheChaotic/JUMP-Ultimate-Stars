
void FUN_02161870(int param_1)

{
  FUN_021618b8(param_1 + 0x14);
  FUN_021618b8(param_1 + 0x214);
  FUN_021618dc(param_1);
  *(undefined4 *)(param_1 + 0x414) = 0xfffe;
  *(undefined4 *)(param_1 + 4) = 1;
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0;
  return;
}

