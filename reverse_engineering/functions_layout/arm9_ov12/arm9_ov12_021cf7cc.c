
undefined4 FUN_021cf7cc(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)0x0;
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  puVar1 = DAT_021d66e8;
  if (DAT_021d7bf0 == 2) {
    if (param_1 == &DAT_021d6710) {
      DAT_021d6710 = 0;
    }
    return 1;
  }
  while( true ) {
    if (puVar1 == (undefined4 *)0x0) {
      return 0;
    }
    if (puVar1 == param_1) break;
    puVar2 = puVar1;
    puVar1 = (undefined4 *)puVar1[5];
  }
  *param_1 = 0;
  if (puVar2 == (undefined4 *)0x0) {
    DAT_021d66e8 = (undefined4 *)puVar1[5];
    if (DAT_021d66e8 == (undefined4 *)0x0) {
      DAT_021d66e8 = (undefined4 *)0x0;
    }
  }
  else {
    puVar2[5] = param_1[5];
  }
  param_1[5] = DAT_021d66e4;
  DAT_021d66e4 = param_1;
  return 1;
}

