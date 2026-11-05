
void FUN_021ce754(int param_1,undefined2 *param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = 0;
  if (param_3 != 0) {
    do {
      *(char *)(param_1 + uVar1) = (char)((ushort)*param_2 >> 8);
      param_2 = param_2 + 1;
      uVar1 = uVar1 + 1;
    } while (uVar1 < param_3);
  }
  return;
}

