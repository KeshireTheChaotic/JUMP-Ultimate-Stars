
void FUN_02161bc8(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_28 [20];
  
  MIi_CpuClear16(0,DAT_0216e7f0,0x400);
  iVar3 = 0;
  iVar2 = 0;
  do {
    *(undefined1 *)(DAT_0216e7f0 + iVar2 + 0xe7) = 0xff;
    iVar2 = iVar2 + 0x100;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  FUN_0206ab24(auStack_28);
  uVar1 = FUN_02069cf4(auStack_28);
  iVar2 = 0;
  iVar3 = 0;
  do {
    FUN_02051890(uVar1,DAT_0216e7f0 + iVar3 + 0xf0,0xe);
    iVar3 = iVar3 + 0x100;
    iVar2 = iVar2 + 1;
  } while (iVar2 < 2);
  iVar2 = 0;
  do {
    FUN_02161ad8(iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 4);
  return;
}

