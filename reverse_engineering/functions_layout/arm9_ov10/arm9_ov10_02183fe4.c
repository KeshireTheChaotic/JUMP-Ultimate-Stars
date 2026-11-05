
void FUN_02183fe4(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_18 [8];
  
  iVar2 = *param_1;
  iVar1 = *(int *)(iVar2 + 0x1d8);
  if (iVar1 != 4) {
    if (iVar1 != 0) {
      if ((param_2 != 0) && (iVar1 == 3)) {
        FUN_02183b94(param_1,iVar2 + 500,s__logout__sesskey__021a54c8);
        FUN_02183b70(param_1,iVar2 + 500,*(undefined4 *)(iVar2 + 0x198));
        FUN_02183b94(param_1,iVar2 + 500,s__final__021a54dc);
      }
      FUN_02183728(param_1,*(undefined4 *)(iVar2 + 0x1d4),iVar2 + 500,auStack_18,1,&DAT_021a54e4);
      if (*(int *)(iVar2 + 0x1d4) != -1) {
        FUN_02001b6c(*(int *)(iVar2 + 0x1d4),2);
        FUN_02001b80(*(undefined4 *)(iVar2 + 0x1d4));
        *(undefined4 *)(iVar2 + 0x1d4) = 0xffffffff;
      }
      if (*(int *)(iVar2 + 0x204) != -1) {
        FUN_02001b6c(*(int *)(iVar2 + 0x204),2);
        FUN_02001b80(*(undefined4 *)(iVar2 + 0x204));
        *(undefined4 *)(iVar2 + 0x204) = 0xffffffff;
      }
      *(undefined4 *)(iVar2 + 0x1d8) = 4;
      *(undefined4 *)(iVar2 + 0x19c) = 0;
      *(undefined4 *)(iVar2 + 0x1a0) = 0;
    }
    FUN_02175814(*(undefined4 *)(iVar2 + 0x1dc));
    *(undefined4 *)(iVar2 + 0x1dc) = 0;
    FUN_02175814(*(undefined4 *)(iVar2 + 0x1ec));
    *(undefined4 *)(iVar2 + 0x1ec) = 0;
    FUN_02175814(*(undefined4 *)(iVar2 + 500));
    *(undefined4 *)(iVar2 + 500) = 0;
    FUN_02175814(*(undefined4 *)(iVar2 + 0x440));
    *(undefined4 *)(iVar2 + 0x440) = 0;
    FUN_02175814(*(undefined4 *)(iVar2 + 0x450));
    *(undefined4 *)(iVar2 + 0x450) = 0;
    iVar1 = *(int *)(iVar2 + 0x424);
    while (iVar1 != 0) {
      FUN_021865e4(param_1);
      iVar1 = *(int *)(iVar2 + 0x424);
    }
    *(undefined4 *)(iVar2 + 0x424) = 0;
    iVar1 = *(int *)(iVar2 + 0x434);
    while (iVar1 != 0) {
      iVar3 = *(int *)(iVar1 + 0x3c);
      FUN_02186e6c(param_1,iVar1);
      iVar1 = iVar3;
    }
    *(undefined4 *)(iVar2 + 0x434) = 0;
    do {
      iVar1 = FUN_02187518(param_1,0x2184169,0);
    } while (iVar1 == 0);
  }
  return;
}

