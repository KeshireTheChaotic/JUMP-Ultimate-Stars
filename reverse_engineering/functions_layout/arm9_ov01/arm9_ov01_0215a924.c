
void FUN_0215a924(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_24 [8];
  undefined4 local_1c;
  undefined4 local_18;
  
  DAT_0216de4a = (undefined2)param_2;
  iVar3 = 0;
  DAT_0216de48 = (undefined2)param_4;
  do {
    FUN_020425bc(DAT_020a0f64,*(undefined4 *)(param_1 + iVar3 * 4 + 0xb0),param_2 + iVar3 + 1);
    FUN_020425bc(DAT_020a0f64,*(undefined4 *)(param_1 + iVar3 * 4 + 0xdc),param_4 - iVar3);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0xb);
  param_3 = param_3 + -8;
  iVar3 = 0x16;
  do {
    iVar4 = param_3 * 0x10000 >> 0x10;
    param_3 = iVar4 + 1;
    FUN_020425bc(DAT_020a0f64,*(undefined4 *)(param_1 + iVar3 * 4 + 0xb0),iVar4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 0x25);
  local_1c = DAT_0216de54;
  uVar1 = local_1c;
  local_18 = DAT_0216de58;
  uVar2 = local_18;
  local_1c._0_2_ = (short)DAT_0216de54;
  iVar3 = (int)(short)local_1c;
  local_18._0_2_ = (short)DAT_0216de58;
  iVar4 = (int)(short)local_18;
  local_1c = uVar1;
  local_18 = uVar2;
  FUN_0214dc98(auStack_24,iVar3,param_2,iVar4,param_4);
  iVar3 = FUN_0203b3f4();
  FUN_02150768(*(undefined4 *)(iVar3 + 0x88),0,auStack_24);
  return;
}

