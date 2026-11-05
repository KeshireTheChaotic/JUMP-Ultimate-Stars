
void FUN_021671e4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 in_r3;
  int iVar3;
  undefined1 auStack_28 [20];
  undefined4 uStack_14;
  
  DAT_020afe90 = 1;
  DAT_020afe94 = 1;
  DAT_020afe98 = 0;
  uStack_14 = in_r3;
  uVar1 = FUN_02071f08();
  uVar2 = FUN_02070cdc(0);
  FUN_020725e0(uVar2,uVar1,0);
  FUN_020517fc(auStack_28,0,0x14);
  iVar3 = 1;
  do {
    uVar1 = FUN_02070cdc(iVar3);
    FUN_020725e0(uVar1,auStack_28,0);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  return;
}

