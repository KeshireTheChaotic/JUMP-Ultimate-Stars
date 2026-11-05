
void FUN_021607c0(int param_1,uint param_2)

{
  if (param_1 == 0) {
    return;
  }
  if (*(byte *)(param_1 + 0x6a) < param_2) {
    *(char *)(param_1 + 0x6a) = (char)param_2;
    if (*(uint *)(param_1 + 0x38) < 0xffff) {
      *(uint *)(param_1 + 0x38) = *(uint *)(param_1 + 0x38) + 1;
    }
    return;
  }
  if (*(byte *)(param_1 + 0x6a) != param_2) {
    *(char *)(param_1 + 0x6a) = (char)param_2;
  }
  return;
}

