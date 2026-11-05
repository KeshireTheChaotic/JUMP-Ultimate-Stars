
undefined1 * FUN_03801770(int param_1,int param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  
  if (0xf < param_2) {
    return (undefined1 *)0x0;
  }
  uVar2 = (uint)*(byte *)(param_1 + param_2 + 8);
  if (uVar2 == 0xff) {
    puVar1 = (undefined1 *)0x0;
  }
  else {
    puVar1 = &DAT_03809228 + uVar2 * 0x40;
  }
  return puVar1;
}

