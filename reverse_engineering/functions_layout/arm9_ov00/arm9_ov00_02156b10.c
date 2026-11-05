
bool FUN_02156b10(int param_1)

{
  FUN_02156db4();
  if (*(int *)(param_1 + 0x18) < 0x80) {
    *(undefined4 *)(param_1 + 0x18) = 0x80;
    *(undefined4 *)(param_1 + 0x28) = 0;
    return true;
  }
  if (*(int *)(param_1 + 0x18) < 0x501) {
    return *(int *)(param_1 + 0x28) == 0;
  }
  *(undefined4 *)(param_1 + 0x18) = 0x500;
  *(undefined4 *)(param_1 + 0x28) = 0;
  return true;
}

