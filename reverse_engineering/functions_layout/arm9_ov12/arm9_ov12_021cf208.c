
undefined4 FUN_021cf208(int *param_1)

{
  int *piVar1;
  
  piVar1 = DAT_021d66e8;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      return 1;
    }
    if (((*piVar1 != 0) && (piVar1[3] == 2)) && (param_1 != piVar1)) break;
    piVar1 = (int *)piVar1[5];
  }
  return 0;
}

