
void FUN_0207d180(int param_1)

{
  if (*(int *)(param_1 + 100) == 0) {
    return;
  }
  FUN_0207c070();
  *(uint *)(param_1 + 0x40) = *(uint *)(param_1 + 0x40) & 0xfffffff9;
  return;
}

