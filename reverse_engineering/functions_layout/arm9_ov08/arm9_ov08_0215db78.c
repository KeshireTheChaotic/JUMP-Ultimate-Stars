
void FUN_0215db78(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0215d400();
  if (iVar1 == 0) {
    FUN_02162378(9);
    return;
  }
  if (param_1 < 9) {
                    /* WARNING: Switch is manually overridden */
    switch(param_1) {
    case 2:
    case 3:
      FUN_02162378(6);
      FUN_0215db24(param_1 != 3);
      return;
    case 7:
      FUN_02162378(6);
      FUN_0215dafc(param_1 != 8);
      return;
    }
  }
  *(char *)(DAT_0216e794 + 0x40) = (char)param_1;
  if (param_1 - 0xb < 2) {
    FUN_0215ca40();
    iVar1 = FUN_0215c924();
    if (iVar1 == 0) {
      FUN_02162378(9);
      FUN_02163654(6,1,1,0xffffffff,0);
      FUN_02157088(0x215c8f1);
      return;
    }
    if (param_1 == 0xb) {
      FUN_02162378(6);
    }
    else {
      FUN_02162378(0xe);
    }
  }
  else if (param_1 == 0xd) {
    FUN_0215ca40();
    FUN_02162378(7);
  }
  else {
    FUN_02162378(6);
    uVar2 = FUN_0215cf04((&DAT_0216aad0)[param_1]);
    FUN_0215d33c(0,1,uVar2);
    FUN_0215d0b0();
  }
  FUN_02161614();
  FUN_02157088(0x215d93d);
  return;
}

