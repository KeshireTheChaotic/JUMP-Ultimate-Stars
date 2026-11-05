
void FUN_0201512c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  if (((*(byte *)(param_1 + 0x10) & 1) == 0) && ((*(byte *)(param_1 + 0x11) & 1) != 0)) {
    FUN_0201cdb4(*(int *)(param_1 + 0x34) + 0x8c,param_1,param_3,param_4,param_4);
    *(byte *)(param_1 + 0x11) = *(byte *)(param_1 + 0x11) & 0xfe;
  }
  *(undefined4 *)(param_1 + 0x34) = param_2;
  FUN_02014ae0(param_1);
  return;
}

