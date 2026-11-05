
int * FUN_021cf138(uint param_1)

{
  int *piVar1;
  
  piVar1 = DAT_021d66e8;
  if (DAT_021d7bf0 != 2) {
    while( true ) {
      if (piVar1 == (int *)0x0) {
        return (int *)0x0;
      }
      if ((*piVar1 != 0) && (*(byte *)(piVar1 + 1) == param_1)) break;
      piVar1 = (int *)piVar1[5];
    }
    return piVar1;
  }
  if ((DAT_021d6710 == 0) || (DAT_021d6714 != param_1)) {
    return (int *)0x0;
  }
  return &DAT_021d6710;
}

