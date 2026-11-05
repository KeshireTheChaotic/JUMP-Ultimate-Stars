
void FUN_02197fcc(int param_1)

{
  if (*(short *)(param_1 + 2) != 0) {
    FUN_021988cc(0xb);
    FUN_02198974(7,DAT_021aa094 + 0x2140,0,0x88c);
    return;
  }
  if (*(short *)(param_1 + 4) == 0xe) {
    if (*(int *)(DAT_021aa094 + 0x2260) == 0xc) {
      FUN_021988cc(8);
      FUN_0219881c();
      return;
    }
    FUN_021988cc(9);
    FUN_02198974(0,DAT_021aa094 + 0x2140,0,0x872);
    return;
  }
  if (*(short *)(param_1 + 4) == 0xf) {
    FUN_02199cd8((int)(uint)*(ushort *)(*(int *)(param_1 + 8) + 0xe) >> 8);
    DC_InvalidateRange(*(undefined4 *)(param_1 + 8),0x620);
    FUN_02199c84(*(undefined4 *)(param_1 + 8));
    return;
  }
  FUN_021988cc(0xb);
  FUN_02198974(7,DAT_021aa094 + 0x2140,*(undefined2 *)(param_1 + 4),0x881);
  return;
}

