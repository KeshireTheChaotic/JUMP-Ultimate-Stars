
undefined4 FUN_02163910(uint param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined1 auStack_20 [4];
  ushort local_1c;
  ushort local_1a;
  ushort local_18;
  ushort local_16;
  ushort local_14;
  
  uVar1 = OS_DisableInterrupts();
  uVar2 = 1 << (param_1 & 0xff) & 0xffff;
  if ((*(ushort *)(DAT_0216e808 + 2) & uVar2) == 0) {
    OS_RestoreInterrupts();
    return 0;
  }
  FUN_02051890(DAT_0216e808,auStack_20,0xe);
  OS_RestoreInterrupts(uVar1);
  if ((local_1c & uVar2) != 0) {
    return 2;
  }
  if ((local_1a & uVar2) != 0) {
    return 3;
  }
  if ((local_18 & uVar2) != 0) {
    return 4;
  }
  if ((local_16 & uVar2) != 0) {
    return 5;
  }
  if ((local_14 & uVar2) == 0) {
    return 1;
  }
  return 6;
}

