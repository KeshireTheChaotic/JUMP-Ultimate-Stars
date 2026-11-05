
int FUN_02194e20(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 unaff_r7;
  int iVar3;
  undefined1 auStack_58 [20];
  undefined1 auStack_44 [48];
  
  iVar1 = FUN_02194fb0(param_1,param_2 + 5,
                       CONCAT11(*(undefined1 *)(param_2 + 3),*(undefined1 *)(param_2 + 4)));
  if (*(short *)(param_1 + 0x32) == 4) {
    iVar2 = iVar1 + -0x10;
    *(char *)(param_2 + 3) = (char)((uint)iVar2 >> 8);
    *(char *)(param_2 + 4) = (char)iVar2;
    iVar3 = param_1 + 0x3fc;
    FUN_02196500(iVar3);
    FUN_02196474(iVar3,*(undefined4 *)(param_1 + 0x1d4),0x10);
    FUN_020517fc(auStack_44,0x36,0x30);
    FUN_02196474(iVar3,auStack_44,0x30);
    FUN_02196474(iVar3,param_1 + 0x2e4,8);
    FUN_02196474(iVar3,param_2,1);
    FUN_02196474(iVar3,param_2 + 3,iVar1 + -0xe);
    FUN_02196420(iVar3,auStack_58);
    FUN_02196500(iVar3);
    FUN_02196474(iVar3,*(undefined4 *)(param_1 + 0x1d4),0x10);
    FUN_020517fc(auStack_44,0x5c,0x30);
    FUN_02196474(iVar3,auStack_44,0x30);
    FUN_02196474(iVar3,auStack_58,0x10);
    FUN_02196420(iVar3,auStack_58);
    unaff_r7 = 0x10;
    iVar1 = iVar2;
  }
  else if (*(short *)(param_1 + 0x32) == 5) {
    iVar2 = iVar1 + -0x14;
    *(char *)(param_2 + 3) = (char)((uint)iVar2 >> 8);
    *(char *)(param_2 + 4) = (char)iVar2;
    iVar3 = param_1 + 0x348;
    FUN_02196a88(iVar3);
    FUN_021969fc(iVar3,*(undefined4 *)(param_1 + 0x1d4),0x14);
    FUN_020517fc(auStack_44,0x36,0x28);
    FUN_021969fc(iVar3,auStack_44,0x28);
    FUN_021969fc(iVar3,param_1 + 0x2e4,8);
    FUN_021969fc(iVar3,param_2,1);
    FUN_021969fc(iVar3,param_2 + 3,iVar1 + -0x12);
    FUN_021969a8(iVar3,auStack_58);
    FUN_02196a88(iVar3);
    FUN_021969fc(iVar3,*(undefined4 *)(param_1 + 0x1d4),0x14);
    FUN_020517fc(auStack_44,0x5c,0x28);
    FUN_021969fc(iVar3,auStack_44,0x28);
    FUN_021969fc(iVar3,auStack_58,0x14);
    FUN_021969a8(iVar3,auStack_58);
    unaff_r7 = 0x14;
    iVar1 = iVar2;
  }
  iVar2 = FUN_020024cc(param_2 + 5 + iVar1,auStack_58,unaff_r7);
  if (iVar2 != 0) {
    *(undefined1 *)(param_1 + 0x455) = 9;
  }
  FUN_02194fc8(param_1 + 0x2ec);
  return iVar1 + 5;
}

