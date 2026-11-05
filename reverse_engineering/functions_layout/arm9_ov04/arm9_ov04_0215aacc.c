
void FUN_0215aacc(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  local_30 = param_3;
  local_2c = param_4;
  uStack_28 = param_4;
  iVar1 = FUN_0203b404();
  uVar2 = FUN_0214ee60(param_2,*(undefined4 *)(iVar1 + 0x88),0x830000,0x10,0x80,&local_30);
  iVar1 = 0;
  do {
    iVar3 = FUN_0203b404();
    uVar4 = JQuizCommonScore::JQuizCommonScoreClass_Create
                      (uVar2,*(undefined4 *)(iVar3 + 0x88),3,0x830000,0x11,0xb,0xe,0x7f);
    *(undefined4 *)(param_1 + iVar1 * 4) = uVar4;
    FUN_021501e4(uVar4,(int)(short)(&DAT_02160534)[iVar1 * 2],(int)(short)(&DAT_02160536)[iVar1 * 2]
                );
    uVar4 = FUN_0214f9d8(iVar1);
    FUN_02150270(*(undefined4 *)(param_1 + iVar1 * 4),uVar4);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 6);
  return;
}

