
undefined4 FUN_020170c4(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  
  piVar3 = (int *)param_1[3];
  uVar1 = (**(code **)(*param_1 + 0x5c))();
  uVar2 = 0;
  while( true ) {
    if (uVar1 >> 2 <= uVar2) {
      return 1;
    }
    if (*piVar3 != 0) break;
    piVar3 = piVar3 + 1;
    uVar2 = uVar2 + 1;
  }
  return 0;
}

