
void FUN_0208b9a0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined1 uVar4;
  int iVar5;
  undefined1 auStack_64 [4];
  undefined1 auStack_60 [20];
  ushort uStack_4c;
  
  *(undefined1 *)(DAT_0214ccec + 0x30) = 0;
  *(undefined1 *)(DAT_0214ccec + 0x3c) = 0;
  *(int *)(DAT_0214ccec + 0x24) = param_1;
  if (param_1 != 0) {
    FUN_0202788c(*(undefined4 *)(param_1 + 4),1,0x208b8d5);
  }
  FUN_0205542c(auStack_64);
  *(char *)(DAT_0214ccec + 0x14) = (char)uStack_4c;
  FUN_02051890(auStack_60,DAT_0214ccec,(uint)uStack_4c << 1);
  uVar1 = FUN_02070cdc(0);
  FUN_020725e0(uVar1,DAT_0214ccec,0);
  FUN_02089348(0x70000002);
  FUN_02089354(0x70000003);
  FUN_0208936c(0x70000004);
  FUN_02089378(0x70000005);
  if (cRam020afeb9 != '\0') {
    iVar5 = 0;
    uVar3 = 0;
    do {
      uVar4 = (undefined1)iVar5;
      iVar2 = FUN_0208a4ec(uVar3 + 1);
      if (iVar2 == 0) {
        uVar4 = 0xff;
      }
      else {
        iVar5 = (iVar5 + 1) * 0x1000000 >> 0x18;
      }
      iVar2 = DAT_0214ccec + uVar3;
      uVar3 = uVar3 + 1;
      *(undefined1 *)(iVar2 + 0x54) = uVar4;
    } while (uVar3 < 3);
    FUN_0208a518(0x208b88d);
  }
  FUN_02089390(DAT_0214ccec,0x18,*(undefined4 *)(DAT_0214ccec + 0x2c),param_2,param_3);
  return;
}

