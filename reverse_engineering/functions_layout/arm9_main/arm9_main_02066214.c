
void FUN_02066214(uint *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  
  param_1[1] = param_1[1] + param_2 * 4;
  *param_1 = *param_1 + 1;
  if ((*param_1 & 3) == 0) {
    if (param_1[4] != 0) {
      puVar2 = (undefined4 *)param_1[1];
      param_1[1] = param_1[1] + 4;
      *puVar2 = 0;
      param_1[4] = 0;
    }
    uVar1 = param_1[1];
    param_1[1] = uVar1 + 4;
    *param_1 = uVar1;
  }
  return;
}

