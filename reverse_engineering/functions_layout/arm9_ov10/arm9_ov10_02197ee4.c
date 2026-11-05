
void FUN_02197ee4(int param_1)

{
  int iVar1;
  
  switch(*(undefined2 *)(param_1 + 2)) {
  case 0:
    if (*(int *)(DAT_021aa094 + 0x2260) == 0xc) {
      FUN_021988cc(10);
      FUN_0219881c();
      return;
    }
    iVar1 = FUN_02058d5c(0x219809d,0);
    if (iVar1 != 2) {
      if (iVar1 == 3) {
        FUN_021988cc(10);
        FUN_0219881c();
        return;
      }
      if (iVar1 == 8) {
        FUN_021988cc(0xc);
        FUN_02198974(1,DAT_021aa094 + 0x2140,0,0x8b4);
        return;
      }
      FUN_021988cc(0xb);
      FUN_02198974(7,DAT_021aa094 + 0x2140,0,0x8c0);
      return;
    }
    break;
  case 1:
  case 3:
    FUN_021988cc(10);
    FUN_0219881c();
    return;
  default:
    FUN_021988cc(0xb);
    FUN_02198974(7,DAT_021aa094 + 0x2140,0,0x8d3);
  }
  return;
}

