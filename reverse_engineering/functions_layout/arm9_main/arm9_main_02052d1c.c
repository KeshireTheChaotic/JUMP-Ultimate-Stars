
void FUN_02052d1c(uint *param_1,undefined1 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((int)param_3 < 1) {
    return;
  }
  uVar2 = 0;
  uVar1 = *param_1;
  if (param_3 < *param_1) {
    uVar1 = param_3;
  }
  if (uVar1 != 0) {
    do {
      *(undefined1 *)(param_1[1] + uVar2) = param_2;
      uVar2 = uVar2 + 1;
    } while (uVar2 < uVar1);
  }
  *param_1 = *param_1 - uVar1;
  param_1[1] = param_1[1] + param_3;
  return;
}

