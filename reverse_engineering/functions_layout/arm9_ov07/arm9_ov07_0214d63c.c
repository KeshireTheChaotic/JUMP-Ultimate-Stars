
undefined * FUN_0214d63c(uint param_1)

{
  undefined *puVar1;
  
  if (((uint)DAT_0216acea & 1 << (param_1 & 0xff)) == 0) {
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &DAT_0216acf6 + (param_1 - 1) * 0x1e;
  }
  return puVar1;
}

