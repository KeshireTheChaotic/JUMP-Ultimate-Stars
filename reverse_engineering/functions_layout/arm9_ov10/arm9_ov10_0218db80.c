
void FUN_0218db80(int *param_1)

{
  if (param_1 == (int *)0x0) {
    param_1 = DAT_021a6758;
  }
  if (param_1[0x2f] != 0) {
    FUN_0218ce54(param_1,2);
  }
  if ((*param_1 != -1) && (param_1[0x31] != 0)) {
    FUN_02001b80();
  }
  *param_1 = -1;
  param_1[0x2b] = 0;
  if (param_1[0x31] != 0) {
    FUN_02001ec8();
  }
  if (param_1 != &DAT_021a675c) {
    FUN_02175814(param_1);
  }
  return;
}

