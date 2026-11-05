
void FUN_02155af0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (**(uint **)(DAT_0216e6dc + 0xc0) & 0x1ff0000) >> 0x10;
  iVar2 = (**(uint **)(DAT_0216e6dc + 0xc0) & 0xff) - 0xc;
  uVar3 = (uint)DAT_0216a5ae;
  if ((int)uVar3 < iVar2) {
    FUN_02155214(*(undefined1 *)(DAT_0216e6dc + 0x11d),3,iVar2,uVar3,uVar1,iVar2);
    return;
  }
  FUN_02155214(*(undefined1 *)(DAT_0216e6dc + 0x11d),3,uVar3,uVar3,uVar1,iVar2);
  FUN_02155214(*(undefined1 *)(DAT_0216e6dc + 0x11d),4,0xc0);
  FUN_021677b8(param_1,0x2155a89);
  return;
}

