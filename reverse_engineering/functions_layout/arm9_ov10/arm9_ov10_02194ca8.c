
int FUN_02194ca8(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined1 auStack_44 [48];
  
  uVar2 = (uint)CONCAT11(*(undefined1 *)(param_2 + 3),*(undefined1 *)(param_2 + 4));
  iVar1 = param_2 + 5 + uVar2;
  if (*(short *)(param_1 + 0x32) == 4) {
    iVar3 = param_1 + 0x3fc;
    FUN_02196500(iVar3);
    FUN_02196474(iVar3,*(undefined4 *)(param_1 + 0xbc),0x10);
    FUN_020517fc(auStack_44,0x36,0x30);
    FUN_02196474(iVar3,auStack_44,0x30);
    FUN_02196474(iVar3,param_1 + 0x1cc,8);
    FUN_02196474(iVar3,param_2,1);
    FUN_02196474(iVar3,param_2 + 3,uVar2 + 2);
    FUN_02196420(iVar3,iVar1);
    FUN_02196500(iVar3);
    FUN_02196474(iVar3,*(undefined4 *)(param_1 + 0xbc),0x10);
    FUN_020517fc(auStack_44,0x5c,0x30);
    FUN_02196474(iVar3,auStack_44,0x30);
    FUN_02196474(iVar3,iVar1,0x10);
    FUN_02196420(iVar3,iVar1);
    uVar2 = uVar2 + 0x10;
  }
  else if (*(short *)(param_1 + 0x32) == 5) {
    iVar3 = param_1 + 0x348;
    FUN_02196a88(iVar3);
    FUN_021969fc(iVar3,*(undefined4 *)(param_1 + 0xbc),0x14);
    FUN_020517fc(auStack_44,0x36,0x28);
    FUN_021969fc(iVar3,auStack_44,0x28);
    FUN_021969fc(iVar3,param_1 + 0x1cc,8);
    FUN_021969fc(iVar3,param_2,1);
    FUN_021969fc(iVar3,param_2 + 3,uVar2 + 2);
    FUN_021969a8(iVar3,iVar1);
    FUN_02196a88(iVar3);
    FUN_021969fc(iVar3,*(undefined4 *)(param_1 + 0xbc),0x14);
    FUN_020517fc(auStack_44,0x5c,0x28);
    FUN_021969fc(iVar3,auStack_44,0x28);
    FUN_021969fc(iVar3,iVar1,0x14);
    FUN_021969a8(iVar3,iVar1);
    uVar2 = uVar2 + 0x14;
  }
  *(char *)(param_2 + 3) = (char)(uVar2 >> 8);
  *(char *)(param_2 + 4) = (char)uVar2;
  FUN_02197140(param_1 + 200,param_2 + 5,uVar2);
  FUN_02194fc8(param_1 + 0x1d4);
  return uVar2 + 5;
}

