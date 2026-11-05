
void FUN_0205b1d8(undefined4 *param_1)

{
  int iVar1;
  
  if ((undefined4 *)*param_1 != (undefined4 *)0x0) {
    *(undefined4 *)*param_1 = 0;
    *param_1 = 0;
  }
  iVar1 = param_1[1];
  FUN_0205e108(iVar1,param_1);
  param_1[1] = 0;
  if (param_1[2] != 0) {
    FUN_0205e240(iVar1 + 0xc);
    *(undefined4 *)(param_1[2] + 0xc) = 0;
    param_1[2] = 0;
  }
  FUN_0205e108(&DAT_020ad63c,param_1);
  FUN_0205e240(&DAT_020ad630,param_1);
  *(undefined1 *)(param_1 + 0xb) = 0;
  return;
}

