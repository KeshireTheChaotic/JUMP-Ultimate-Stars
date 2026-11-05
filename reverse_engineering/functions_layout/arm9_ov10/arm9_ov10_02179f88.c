
void FUN_02179f88(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_1 == 0) {
    FUN_0217a0cc();
    return;
  }
  FUN_0217c6d4();
  iVar1 = FUN_02178448();
  if ((*(char *)(iVar1 + 0x15) == '\x02') ||
     (iVar1 = FUN_02178448(), *(char *)(iVar1 + 0x15) == '\x03')) {
    iVar1 = FUN_02178448();
    iVar1 = *(int *)(iVar1 + 0x204);
    iVar2 = FUN_02178448();
    iVar3 = FUN_02178448();
    uVar4 = FUN_02177f3c(*(undefined4 *)(iVar3 + 0x204));
    iVar3 = FUN_02178448();
    (**(code **)(iVar2 + 0x45c))(0,1,iVar1 == 0,0,uVar4,*(undefined4 *)(iVar3 + 0x460));
    return;
  }
  iVar1 = FUN_02178448();
  if (*(char *)(iVar1 + 0x15) == '\0') {
    if (param_1 == 1) {
      FUN_0217c498(0);
      FUN_021790e4();
      return;
    }
  }
  else {
    iVar1 = FUN_02178448();
    if ((*(char *)(iVar1 + 0x15) == '\x01') && (param_1 == 1)) {
      FUN_0217abc4(0,0,0);
    }
  }
  return;
}

