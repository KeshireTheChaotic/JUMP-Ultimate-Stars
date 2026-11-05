
undefined4 FUN_0218658c(int *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*param_1 + 0x424);
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 0;
    }
    if ((piVar1[2] != 0) && (*piVar1 != 3)) break;
    piVar1 = (int *)piVar1[8];
  }
  return 1;
}

