
void FUN_021770c0(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined1 auStack_3d8 [74];
  undefined1 auStack_38e [301];
  undefined1 auStack_261 [77];
  undefined4 local_214 [113];
  undefined1 auStack_50 [52];
  undefined1 auStack_1c [12];
  undefined4 local_10;
  undefined4 local_c;
  
  iVar1 = FUN_021731c8();
  if (iVar1 != 0x15) {
    iVar1 = FUN_021731c8();
    if (iVar1 != 0) {
      lVar3 = OS_GetTick();
      lVar3 = lVar3 - *(longlong *)(DAT_021a759c + 0x28);
      uVar2 = (uint)lVar3;
      uVar4 = FUN_0200d0c4(uVar2 * 0x40,(int)((ulonglong)lVar3 >> 0x20) * 0x40 | uVar2 >> 0x1a,
                           0x82ea,0);
      iVar1 = (int)((ulonglong)uVar4 >> 0x20);
      uVar2 = (uint)uVar4;
      if ((uint)(uVar2 < 0x2711) <= (uint)-iVar1) {
        FUN_02173168(local_214);
        FUN_02173228();
        FUN_021758a4(0,*(undefined4 *)(DAT_021a759c + 0x24),0);
        *(undefined4 *)(DAT_021a759c + 0x24) = 0;
        FUN_02177528(2,local_214[0]);
        return;
      }
      FUN_02173228(10000 - uVar2,iVar1,10000,-(uint)(uVar2 >= 0x2711) - iVar1);
      FUN_020517fc(auStack_50,0,0x48);
      iVar1 = FUN_02175b90(*(undefined4 *)(DAT_021a759c + 0x10));
      FUN_02051890(*(undefined4 *)(DAT_021a759c + 0x10),auStack_50,iVar1 * 2 + 2);
      FUN_02004b18(auStack_1c,DAT_021a759c + 0x251);
      local_10 = 0x21758cd;
      local_c = 0x21758a5;
      FUN_02173340(auStack_50,*(undefined4 *)(DAT_021a759c + 0x24));
    }
    return;
  }
  FUN_02173168(auStack_3d8);
  FUN_02004b18(DAT_021a759c + 0x48,auStack_38e);
  FUN_02004b18(DAT_021a759c + 0x148,auStack_261);
  FUN_02173228();
  FUN_021758a4(0,*(undefined4 *)(DAT_021a759c + 0x24),0);
  *(undefined4 *)(DAT_021a759c + 0x24) = 0;
  iVar1 = FUN_020698e4(*(undefined4 *)(DAT_021a759c + 0x1c));
  if (iVar1 == 0) {
    FUN_02177360(DAT_021a759c + 0x48,DAT_021a759c + 0x148,0x21773e1,3);
    return;
  }
  (*DAT_021a75a0)(DAT_021a759c + 0x48,DAT_021a759c + 0x148,DAT_021a7598);
  return;
}

