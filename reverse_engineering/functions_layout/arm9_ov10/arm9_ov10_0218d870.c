
void FUN_0218d870(undefined1 *param_1,undefined1 param_2,undefined1 *param_3)

{
  *param_1 = param_2;
  param_1[1] = *param_3;
  param_1[2] = param_3[1];
  param_1[3] = param_3[2];
  param_1[4] = param_3[3];
  *(undefined4 *)(param_1 + 0x800) = 5;
  return;
}

