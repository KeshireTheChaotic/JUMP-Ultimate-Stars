
void FUN_02075bc0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar1 = FUN_0207382c();
  if (iVar1 != 0) {
    FUN_02026fd0(param_1,4);
    iVar1 = Record::RecordSave();
    func_0x021bad88(*(undefined4 *)(iVar4 + 0xc),0);
    FUN_02026fd0(param_1,8);
    func_0x021bace0(*(undefined4 *)(iVar4 + 0xc));
    while (iVar2 = func_0x021bad2c(*(undefined4 *)(iVar4 + 0xc)), iVar2 == 0) {
      (*DAT_020a0e18)();
    }
    if (iVar1 == 0) {
      func_0x021bac28(*(undefined4 *)(iVar4 + 0xc),0x11,0,0,0,0,0,0);
      uVar3 = 0;
      do {
        (*DAT_020a0e18)();
        uVar3 = uVar3 + 1;
      } while (uVar3 < 0x14);
      FUN_0206dd40();
    }
    else {
      FUN_0206dcdc(1);
      if (*(char *)(iVar4 + 0x18) == '\0') {
        FUN_02073ebc(3,1);
        FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02075d64);
      }
      else {
        *(undefined4 *)(iVar4 + 0x14) = 8;
        func_0x021bac28(*(undefined4 *)(iVar4 + 0xc),0x7b,0,0,0,0,0,0);
        FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_02075d00);
      }
    }
  }
  return;
}

