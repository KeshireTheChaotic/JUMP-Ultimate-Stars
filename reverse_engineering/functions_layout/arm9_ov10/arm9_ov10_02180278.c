
int FUN_02180278(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_02001c9c(param_1[300]);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = param_1[0x20];
  iVar1 = FUN_02001ac0(param_1[300],param_1[0x1f] + iVar2,0x1000 - iVar2,0);
  if (iVar1 + 1U < 2) {
    FUN_0218154c(param_1);
    return 3;
  }
  param_1[0x20] = param_1[0x20] + iVar1;
  iVar1 = 0;
  if ((*param_1 == 2) || (0 < param_1[0x172])) {
    FUN_0217ef10(param_1 + 0x12f,param_1[0x1f] + iVar2,param_1[0x20] - iVar2);
  }
  if (*param_1 == 3) {
    iVar1 = FUN_02180820(param_1);
  }
  if (iVar1 != 0) {
    return iVar1;
  }
  if ((*param_1 == 2) && (0 < param_1[0x20])) {
    iVar1 = FUN_02180328(param_1);
    return iVar1;
  }
  return 0;
}

