
void FUN_02014f2c(int param_1,uint param_2)

{
  if ((*(byte *)(param_1 + 0x10) & 1) == param_2) {
    return;
  }
  *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfe | (byte)param_2 & 1;
  if ((*(byte *)(param_1 + 0x11) & 1) != 0) {
    if ((*(byte *)(param_1 + 0x10) & 1) == 0) {
      FUN_0201cca0(*(int *)(param_1 + 0x34) + 0x8c,param_1);
    }
    else {
      FUN_0201cdb4(*(int *)(param_1 + 0x34) + 0x8c);
    }
  }
  FUN_02014ae0(param_1);
  *(undefined4 *)(param_1 + 0x3c) = 0;
  return;
}

