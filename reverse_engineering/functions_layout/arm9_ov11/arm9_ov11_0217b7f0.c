
void FUN_0217b7f0(int param_1)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  bVar1 = (byte)(*(char *)(param_1 + 0x3a) - 3U) < 2;
  bVar2 = (byte)(*(char *)(param_1 + 0x3a) - 7U) < 2;
  if (((*(uint *)(param_1 + 0xd4) & 2) != 0) && (bVar1 || bVar2)) {
    uVar5 = **(undefined4 **)(param_1 + 0x14);
    if (bVar1) {
      uVar4 = 0x200;
      if ((*(uint *)(param_1 + 0xd4) & 0x80) != 0) {
        uVar4 = 0x100;
      }
      iVar3 = FUN_0217b8a4(uVar5,uVar4,0xd);
      if (iVar3 != 0) {
        return;
      }
    }
    if ((bVar2) && (iVar3 = FUN_0217b8a4(uVar5,2,10), iVar3 != 0)) {
      return;
    }
  }
  *(undefined1 *)(param_1 + 0x39) = 3;
  *(undefined1 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)(param_1 + 0x3e) = 0;
  return;
}

