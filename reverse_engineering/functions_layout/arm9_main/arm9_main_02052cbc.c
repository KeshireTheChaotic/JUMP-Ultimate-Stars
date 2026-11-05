
void FUN_02052cbc(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((int)param_3 < 1) {
    return;
  }
  uVar1 = 0;
  uVar2 = *param_1;
  if (param_3 < *param_1) {
    uVar2 = param_3;
  }
  if (uVar2 != 0) {
    do {
      *(undefined1 *)(param_1[1] + uVar1) = *(undefined1 *)(param_2 + uVar1);
      uVar1 = uVar1 + 1;
    } while (uVar1 < uVar2);
  }
  *param_1 = *param_1 - uVar2;
  param_1[1] = param_1[1] + param_3;
  return;
}

