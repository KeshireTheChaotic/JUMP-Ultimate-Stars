
void FUN_0219809c(int param_1)

{
  switch(*(undefined2 *)(param_1 + 2)) {
  case 0:
    break;
  case 1:
  case 3:
    FUN_021988cc(10);
    FUN_0219881c();
    return;
  default:
    FUN_021988cc(0xb);
    FUN_02198974(7,DAT_021aa094 + 0x2140,0,0x84f);
    return;
  }
  if (*(int *)(DAT_021aa094 + 0x2260) == 0xc) {
    FUN_021988cc(10);
    FUN_0219881c();
    return;
  }
  *(undefined2 *)(DAT_021aa094 + 0x2282) = 0;
  FUN_021988cc(3);
  FUN_02198974(0,DAT_021aa094 + 0x2140,0,0x83d);
  return;
}

