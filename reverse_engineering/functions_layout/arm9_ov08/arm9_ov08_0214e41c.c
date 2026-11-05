
undefined4 FUN_0214e41c(ushort *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)param_1 + 0x117;
  if (iVar3 == 0) {
    return 0xffffffff;
  }
  *param_1 = (ushort)DAT_0216c1f4 & (ushort)DAT_0216c1f8;
  FUN_0214cf04(iVar3,0,0x154);
  if ((*param_1 & 1) != 0) {
    FUN_0214cf10(iVar3,&DAT_0216c924,DAT_0216c8f8);
    FUN_0214cf10((int)param_1 + 0x11d,&DAT_0216c964,DAT_0216c8f8);
    FUN_0214cf10((int)param_1 + 0x123,&DAT_0216c9a4,DAT_0216c8f8);
    FUN_0214cf10((int)param_1 + 0x129,&DAT_0216c9e4,DAT_0216c8f8);
    uVar1 = FUN_0214cdb0(&DAT_0216c8fc);
    iVar2 = FUN_0214e3f8(&DAT_0216c8fc,uVar1);
    if (iVar2 != 0) goto LAB_0214e5f2;
    uVar1 = FUN_0214cdb0(&DAT_0216c8fc);
    FUN_0214cf10((int)param_1 + 0x12f,&DAT_0216c8fc,uVar1);
  }
  if ((*param_1 & 2) != 0) {
    FUN_0214cf10(param_1 + 0xa8,&DAT_0216ca54,DAT_0216ca28);
    FUN_0214cf10(param_1 + 0xaf,&DAT_0216ca94,DAT_0216ca28);
    FUN_0214cf10(param_1 + 0xb6,&DAT_0216cad4,DAT_0216ca28);
    FUN_0214cf10(param_1 + 0xbd,&DAT_0216cb14,DAT_0216ca28);
    uVar1 = FUN_0214cdb0(&DAT_0216ca2c);
    iVar2 = FUN_0214e3f8(&DAT_0216ca2c,uVar1);
    if (iVar2 != 0) goto LAB_0214e5f2;
    uVar1 = FUN_0214cdb0(&DAT_0216ca2c);
    FUN_0214cf10(param_1 + 0xc4,&DAT_0216ca2c,uVar1);
  }
  if ((*param_1 & 4) != 0) {
    iVar2 = FUN_0214e3f8(&DAT_0216cb84,DAT_0216cb58 + -1);
    if (iVar2 != 0) goto LAB_0214e5f2;
    FUN_0214cf10((int)param_1 + 0x1a9,&DAT_0216cb84,DAT_0216cb58);
    uVar1 = FUN_0214cdb0(&DAT_0216cb5c);
    iVar2 = FUN_0214e3f8(&DAT_0216cb5c,uVar1);
    if (iVar2 != 0) goto LAB_0214e5f2;
    uVar1 = FUN_0214cdb0(&DAT_0216cb5c);
    FUN_0214cf10((int)param_1 + 0x1e9,&DAT_0216cb5c,uVar1);
  }
  if ((*param_1 & 8) == 0) {
LAB_0214e5e4:
    *(undefined1 *)(param_1 + 0x8b) = 0;
    return 0;
  }
  iVar2 = FUN_0214e3f8(&DAT_0216cbf4,DAT_0216cbc8 + -1);
  if (iVar2 == 0) {
    FUN_0214cf10(param_1 + 0x105,&DAT_0216cbf4,DAT_0216cbc8);
    uVar1 = FUN_0214cdb0(&DAT_0216cbcc);
    iVar2 = FUN_0214e3f8(&DAT_0216cbcc,uVar1);
    if (iVar2 == 0) {
      uVar1 = FUN_0214cdb0(&DAT_0216cbcc);
      FUN_0214cf10(param_1 + 0x125,&DAT_0216cbcc,uVar1);
      goto LAB_0214e5e4;
    }
  }
LAB_0214e5f2:
  FUN_0214cf04(iVar3,0,0x154);
  return 0xffffffff;
}

