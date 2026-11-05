
void FUN_02002090(int param_1)

{
  *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x20);
  *(uint *)(param_1 + 0x28) =
       *(int *)(param_1 + 0x20) - (*(uint *)(param_1 + 0x2c) & *(uint *)(param_1 + 0x18));
  *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x18);
  return;
}

