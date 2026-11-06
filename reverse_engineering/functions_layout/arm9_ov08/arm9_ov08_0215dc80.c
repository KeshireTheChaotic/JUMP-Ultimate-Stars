
undefined4 FUN_0215dc80(void)

{
  uint uVar1;
  int iVar2;
  
  FUN_021622d4();
  uVar1 = FUN_0215cf30();
  if (uVar1 == 0xe) {
    return 0;
  }
  iVar2 = FUN_0215d400();
  if (iVar2 == 0) {
    FUN_02162378(9);
    return 1;
  }
  FUN_0215cc64(uVar1);
  if (uVar1 < 9) {
                    /* WARNING: Switch is manually overridden */
    switch(uVar1) {
    case 2:
      FUN_0215c9a0();
    }
  }
  FUN_0215db78(uVar1);
  return 1;
}

