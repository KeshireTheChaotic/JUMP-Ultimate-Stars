
int * FUN_021ac788(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[4] * 0x24 + *param_1;
  for (uVar2 = param_1[1] * 0x24 + uVar1; uVar1 < uVar2; uVar2 = uVar2 - 0x24) {
    FUN_021ac3c4(uVar2 - 0x1c);
  }
  param_1[1] = 0;
  FUN_021ac7ec(param_1);
  return param_1;
}

