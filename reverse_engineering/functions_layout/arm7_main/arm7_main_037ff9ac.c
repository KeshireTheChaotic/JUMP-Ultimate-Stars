
void FUN_037ff9ac(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = 0xfffe9680;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined4 *)(param_1 + 0x34) = param_2;
  FUN_037ffbb8(param_1 + 0x28);
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) | 2;
  *(byte *)(param_1 + 3) = *(byte *)(param_1 + 3) & 0xfe | 1;
  return;
}

