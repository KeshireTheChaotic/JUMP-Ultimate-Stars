
void FUN_02197c80(int param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  
  if (*(short *)(param_1 + 2) == 0) {
    *(undefined1 *)(DAT_021aa094 + 0x226b) = 0;
    *(undefined2 *)(DAT_021aa094 + 0x2282) = 0;
    switch(*(undefined4 *)(DAT_021aa094 + 0x2260)) {
    default:
      FUN_021988cc(0xb);
      FUN_02198974(7,0,*(undefined4 *)(DAT_021aa094 + 0x2260),0x959);
      return;
    case 5:
    case 6:
      FUN_021988cc(3);
      FUN_02198974(1,0,0,0x8f5);
      return;
    case 7:
      FUN_021988cc(3);
      FUN_02198974(0,0,0,0x8fb);
      return;
    case 8:
      sVar1 = *(short *)(DAT_021aa094 + 0x22f8);
      *(short *)(DAT_021aa094 + 0x22f8) = 0;
      if (sVar1 == 0x12) {
        uVar2 = *(ushort *)(DAT_021aa094 + 0x2170);
        if ((uVar2 & 0x24) != 0x24) {
          *(ushort *)(DAT_021aa094 + 0x2170) = uVar2 | 0x24;
          iVar3 = FUN_02058e64(0x2198145,DAT_021aa094 + 0x2140,0,
                               (*(uint *)(DAT_021aa094 + 0x2264) & 0x30000) != 0x30000,
                               (*(uint *)(DAT_021aa094 + 0x2264) & 0xc0000) == 0xc0000);
          if (iVar3 == 2) {
            return;
          }
          if ((iVar3 == 3) || (iVar3 != 8)) {
            FUN_021988cc(0xb);
            FUN_02198974(7,DAT_021aa094 + 0x2140,0x12,0x925);
            return;
          }
          FUN_021988cc(0xc);
          FUN_02198974(1,DAT_021aa094 + 0x2140,0x12,0x91c);
          return;
        }
      }
      FUN_021988cc(3);
      FUN_02198974(1,DAT_021aa094 + 0x2140,sVar1,0x92d);
      return;
    case 9:
    case 0xc:
      FUN_021988cc(3);
      FUN_02198974(0,DAT_021aa094 + 0x2140,1,0x935);
      return;
    case 10:
      FUN_021988cc(3);
      FUN_02198974(0,DAT_021aa094 + 0x2140,0,0x93c);
      return;
    case 0xd:
      iVar3 = FUN_02059518(0x2198581);
      if (iVar3 != 2) {
        if ((iVar3 == 3) || (iVar3 != 8)) {
          FUN_021988cc(0xb);
          FUN_02198974(7,0,0,0x953);
          return;
        }
        FUN_021988cc(0xc);
        FUN_02198974(1,0,0,0x94a);
        return;
      }
    }
  }
  else {
    FUN_021988cc(0xb);
    FUN_02198974(7,0,0,0x960);
  }
  return;
}

