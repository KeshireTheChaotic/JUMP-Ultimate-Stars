
void FUN_0208b8ec(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 auStack_58 [4];
  undefined1 auStack_54 [20];
  ushort local_40;
  
  *(undefined1 *)(DAT_0214ccec + 0x30) = 0;
  *(undefined1 *)(DAT_0214ccec + 0x3c) = 0;
  *(int *)(DAT_0214ccec + 0x24) = param_1;
  if (param_1 != 0) {
    FUN_0202788c(*(undefined4 *)(param_1 + 4),1,&LAB_0208b8d4_1);
  }
  FUN_0205542c(auStack_58);
  *(char *)(DAT_0214ccec + 0x14) = (char)local_40;
  FUN_02051890(auStack_54,DAT_0214ccec,(uint)local_40 << 1);
  uVar1 = FUN_0208bce4();
  *(undefined1 *)(DAT_0214ccec + 0x15) = uVar1;
  uVar1 = FUN_0208bd0c();
  *(undefined1 *)(DAT_0214ccec + 0x16) = uVar1;
  uVar2 = FUN_02070cdc(0);
  FUN_020725e0(uVar2,DAT_0214ccec,0);
  FUN_02089348(0x70000002);
  FUN_02089354(0x70000003);
  FUN_0208936c(0x70000004);
  FUN_02089378(0x70000005);
  FUN_0208a518(0x208b819);
  FUN_02089548(DAT_0214ccec,0x18,*(undefined4 *)(DAT_0214ccec + 0x2c),param_2);
  return;
}

