
void FUN_02197c80(int param_1)

{
  if (*(short *)(param_1 + 2) != 0) {
    FUN_021988cc(0xb);
    FUN_02198974(7,0,0,0x960);
    return;
  }
  *(undefined1 *)(DAT_021aa094 + 0x226b) = 0;
  *(undefined2 *)(DAT_021aa094 + 0x2282) = 0;
  if (*(uint *)(DAT_021aa094 + 0x2260) < 0xe) {
    (*(code *)((int)&switchD_02197cb4::switchdataD_02197cb6 +
              (int)(short)(&switchD_02197cb4::switchdataD_02197cb6)
                          [*(uint *)(DAT_021aa094 + 0x2260)]))();
    return;
  }
  FUN_021988cc(0xb);
  FUN_02198974(7,0,*(undefined4 *)(DAT_021aa094 + 0x2260),0x959);
  return;
}

