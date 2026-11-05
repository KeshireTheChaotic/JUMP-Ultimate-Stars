
void FUN_02020b34(int *param_1)

{
  int extraout_r1;
  uint uVar1;
  
  param_1[0x21] = param_1[0x20];
  (**(code **)(*param_1 + 0x124))();
  uVar1 = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = param_1[0x1f] & param_1[0x20];
  do {
    if ((param_1[0x20] & 1 << (uVar1 & 0xff)) == 0) {
      param_1[uVar1 + 0x22] = 0;
    }
    else {
      param_1[uVar1 + 0x22] = param_1[uVar1 + 0x22] + 1;
      if ((param_1[0x1f] & 1 << (uVar1 & 0xff)) == 0) {
        if ((uint)param_1[0x1c] < (uint)param_1[uVar1 + 0x22]) {
          param_1[0x1f] = param_1[0x1f] | 1 << (uVar1 & 0xff);
          param_1[0x1e] = param_1[0x1e] | 1 << (uVar1 & 0xff);
        }
      }
      else {
        FUN_0200d338(param_1[uVar1 + 0x22] - param_1[0x1c],param_1[0x1d]);
        if (extraout_r1 == 0) {
          param_1[0x1e] = param_1[0x1e] | 1 << (uVar1 & 0xff);
        }
      }
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 8);
  return;
}

