
void FUN_021987b4(int param_1)

{
  if (((*(short *)(param_1 + 2) == 8) && (*(short *)(param_1 + 4) == 0x16)) &&
     (*(short *)(param_1 + 6) == 0x25)) {
    switch(*(undefined4 *)(DAT_021aa094 + 0x2260)) {
    case 8:
      FUN_021988cc(0xc);
      return;
    case 9:
    case 0xc:
      FUN_0219881c();
      return;
    case 10:
      FUN_021988cc(0xc);
    }
  }
  return;
}

