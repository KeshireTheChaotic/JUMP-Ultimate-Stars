
void FUN_02154d60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = (uint *)FUN_02165d64(*(undefined4 *)(DAT_0216e6dc + 0xfc),0);
  uVar2 = (*puVar1 & 0xff) + 0xc;
  FUN_02155214(*(undefined1 *)(DAT_0216e6dc + 0x11d),4,uVar2,param_4,(*puVar1 & 0x1ff0000) >> 0x10);
  if (0xbf < uVar2) {
    FUN_021677b8(param_1,0x2154d0d);
  }
  return;
}

