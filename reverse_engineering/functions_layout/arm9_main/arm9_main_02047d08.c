
void FUN_02047d08(int param_1,int param_2)

{
  FUN_02015184();
  if (param_2 != 0) {
    *(undefined1 *)(param_1 + 0x91) = 1;
    return;
  }
  if (*(char *)(param_1 + 0x91) != '\0') {
    *(undefined1 *)(param_1 + 0x91) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x94) == 0) {
    return;
  }
  FUN_0203d764(*(undefined4 *)(param_1 + 0x34));
  *(undefined4 *)(param_1 + 0x94) = 0;
  return;
}

