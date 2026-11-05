
void FUN_02155be0(undefined4 param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  uVar1 = (**(uint **)(DAT_0216e6dc + 0x60) & 0x1ff0000) >> 0x10;
  iVar2 = (**(uint **)(DAT_0216e6dc + 0x60) & 0xff) - 0xc;
  uVar3 = (uint)DAT_0216a54e;
  if ((int)uVar3 < iVar2) {
    FUN_02155214(*(undefined1 *)(DAT_0216e6dc + 0x11d),1,iVar2,uVar3,uVar1,iVar2);
    return;
  }
  FUN_02155214(*(undefined1 *)(DAT_0216e6dc + 0x11d),1,uVar3,uVar3,uVar1,iVar2);
  FUN_02155214(*(undefined1 *)(DAT_0216e6dc + 0x11d),2,0xc0);
  FUN_021677b8(param_1,0x2155b69);
  return;
}

