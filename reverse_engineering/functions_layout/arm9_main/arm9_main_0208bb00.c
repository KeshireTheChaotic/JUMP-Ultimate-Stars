
int FUN_0208bb00(int param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_78 [22];
  undefined1 uStack_62;
  undefined1 auStack_60 [4];
  undefined1 auStack_5c [20];
  ushort uStack_48;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  FUN_0205542c(auStack_60);
  FUN_020517fc(auStack_78,0,0x18);
  FUN_02051890(auStack_5c,auStack_78,(uint)uStack_48 << 1);
  uStack_62 = param_2;
  iVar1 = FUN_02089dec(param_1,auStack_78,0x18);
  if (iVar1 != 0) {
    *(undefined1 *)(DAT_0214ccec + 0x30) = 0;
    *(undefined1 *)(DAT_0214ccec + 0x3c) = 0;
    uVar2 = FUN_02070cdc();
    FUN_02051890(param_1 + 0x50,uVar2,0x14);
  }
  return iVar1;
}

