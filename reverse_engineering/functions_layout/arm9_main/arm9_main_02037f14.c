
void FUN_02037f14(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 == (undefined4 *)0x0) {
    *param_1 = param_2;
    param_2[1] = 0;
    *param_2 = 0;
    return;
  }
  while ((undefined4 *)*puVar1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar1;
  }
  param_2[1] = puVar1;
  *param_2 = 0;
  *puVar1 = param_2;
  return;
}

