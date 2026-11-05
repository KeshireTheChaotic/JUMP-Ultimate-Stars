
void FUN_0214e5b8(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  *(undefined1 *)(param_1 + 0x59) = 0;
  *(undefined1 *)(param_1 + 0x58) = param_2;
  *(undefined1 *)(param_1 + 0x5b) = param_4;
  *(undefined1 *)(param_1 + 0x5a) = param_3;
  *(undefined1 *)(param_1 + 0x5c) = param_5;
  if ((*(byte *)(param_1 + 0x56) & 4) == 0) {
    FUN_0204267c(DAT_020a0f64,FUN_0214e61c,param_1);
    *(byte *)(param_1 + 0x56) = *(byte *)(param_1 + 0x56) | 4;
  }
  FUN_0214e55c(param_1);
  return;
}

