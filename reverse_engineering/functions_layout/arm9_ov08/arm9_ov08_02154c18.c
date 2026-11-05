
void FUN_02154c18(undefined4 param_1)

{
  uint uVar1;
  uint *puVar2;
  
  puVar2 = *(uint **)(DAT_0216e6dc + 0x30);
  uVar1 = (*puVar2 & 0xff) + 0xc;
  FUN_02155214(*(undefined1 *)(DAT_0216e6dc + 0x11d),0,uVar1,puVar2,(*puVar2 & 0x1ff0000) >> 0x10);
  if (0xbf < uVar1) {
    FUN_021677b8(param_1,0x2154b75);
  }
  return;
}

