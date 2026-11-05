
void FUN_02150524(undefined1 *param_1,undefined1 param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      *param_1 = param_2;
      param_1 = param_1 + 1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_3);
  }
  return;
}

