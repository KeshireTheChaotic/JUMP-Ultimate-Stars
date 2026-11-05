
int * FUN_0204f02c(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[4] * 0xc + *param_1;
  uVar2 = param_1[1] * 0xc + uVar1;
  while (uVar1 < uVar2) {
    uVar2 = uVar2 - 0xc;
    FUN_0200ad54(uVar2);
  }
  param_1[1] = 0;
  FUN_0204f104(param_1);
  return param_1;
}

