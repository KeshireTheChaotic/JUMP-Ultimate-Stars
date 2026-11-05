
undefined * FUN_0214e008(uint param_1)

{
  undefined **ppuVar1;
  
  if (param_1 < 0x2b) {
    ppuVar1 = &PTR_DAT_0209e840;
  }
  else {
    param_1 = param_1 - 0x2b;
    ppuVar1 = &PTR_DAT_0215bd9c;
  }
  return ppuVar1[param_1];
}

