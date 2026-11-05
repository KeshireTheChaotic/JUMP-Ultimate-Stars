
undefined4 FUN_0219b644(int param_1)

{
  uint uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 1;
  }
  uVar1 = FUN_0217668c(param_1);
  uVar2 = 1 << (param_1 - 1U & 0xff);
  while( true ) {
    if (uVar2 == 0) {
      return 1;
    }
    if ((uVar1 & uVar2) != 0) break;
    uVar2 = uVar2 >> 1;
  }
  return 0;
}

