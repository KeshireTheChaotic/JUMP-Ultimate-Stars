
undefined4 FUN_021575cc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_02155824();
  iVar4 = 0;
  do {
    iVar2 = FUN_02155654(*(undefined4 *)(param_2 + iVar4 * 4 + 4));
    iVar4 = iVar4 + 1;
  } while (iVar4 < 9);
  if (iVar1 == 0) {
    return 1;
  }
  iVar4 = (int)*(char *)(iVar1 + 4);
  if (iVar4 != 0) {
    iVar2 = (int)*(char *)(param_1 + 0x45b);
  }
  if (iVar4 != 0 && iVar2 != iVar4) {
    *(char *)(param_1 + 0x45b) = *(char *)(iVar1 + 4);
    FUN_021576b8(param_1);
    if (*(int *)(param_1 + 0x3b0) == 0) {
      uVar3 = KomaExplanationData::KomaExplanationData_Create(iVar4);
      *(undefined4 *)(param_1 + 0x3b0) = uVar3;
    }
  }
  *(code **)(param_1 + 0x3a8) = FUN_0215765c;
  return 0;
}

