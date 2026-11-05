
void FUN_02180fe8(undefined4 *param_1)

{
  if (param_1[0x1f] != 0) {
    FUN_02175814();
  }
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  if (param_1[300] != -1) {
    FUN_02001b80();
  }
  param_1[300] = 0xffffffff;
  *param_1 = 1;
  FUN_02181038(param_1);
  param_1[0x121] = 0xffffffff;
  FUN_0218107c(param_1);
  return;
}

