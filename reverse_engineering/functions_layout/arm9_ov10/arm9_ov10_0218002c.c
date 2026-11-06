
undefined4 FUN_0218002c(uint *param_1)

{
  undefined4 uVar1;
  
  FUN_021817dc();
  if (*param_1 < 4) {
                    /* WARNING: Switch is manually overridden */
    switch(*param_1) {
    case 0:
      uVar1 = FUN_02180064(param_1);
      return uVar1;
    case 2:
      uVar1 = FUN_02180278(param_1);
      return uVar1;
    }
  }
  return 0;
}

