
void FUN_02041050(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = DAT_020a0dd0;
  iVar2 = (**(code **)(*DAT_020a0dd0 + 0x74))();
  if (iVar2 != 0) {
    iVar2 = FUN_0201a228(0x70);
    if (iVar2 == 0) {
      return;
    }
    jus_TagSPD3::jus_TagSPD3(iVar2,param_1);
    return;
  }
  iVar2 = (**(code **)(*piVar1 + 0x78))();
  if (iVar2 == 0) {
    iVar2 = FUN_0201a228(0x68);
    if (iVar2 == 0) {
      return;
    }
    jus_TagSPD2::jus_TagSPD2(iVar2,param_1);
    return;
  }
  iVar2 = FUN_0201a228(0x74);
  if (iVar2 == 0) {
    return;
  }
  jus_TagSPDB::jus_TagSPDB(iVar2,param_1);
  return;
}

