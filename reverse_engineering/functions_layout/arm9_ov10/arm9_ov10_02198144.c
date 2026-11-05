
/* WARNING: Removing unreachable block (ram,0x02198182) */

void FUN_02198144(int param_1)

{
  ushort uVar1;
  int iVar2;
  
  switch(*(undefined2 *)(param_1 + 2)) {
  case 0:
    switch(*(short *)(param_1 + 8)) {
    case 6:
      break;
    case 7:
      if (*(int *)(DAT_021aa094 + 0x2260) == 0xc) {
        FUN_021988cc(8);
        FUN_0219881c();
        return;
      }
      uVar1 = *(ushort *)(param_1 + 10);
      if ((uVar1 == 0) || (0x7d7 < uVar1)) {
        FUN_0219881c();
        return;
      }
      *(ushort *)(DAT_021aa094 + 0x2282) = uVar1;
      iVar2 = FUN_02059c5c(0x2197fcd,DAT_021aa094 + 0x1500,0x620);
      if (iVar2 != 2) {
        if ((iVar2 == 3) || (iVar2 != 8)) {
          FUN_021988cc(0xb);
          FUN_02198974(7,DAT_021aa094 + 0x2140,0,0x7f6);
          return;
        }
        FUN_021988cc(0xc);
        FUN_02198974(1,DAT_021aa094 + 0x2140,0,0x7ed);
        return;
      }
      break;
    case 8:
    case 9:
      switch(*(undefined4 *)(DAT_021aa094 + 0x2260)) {
      case 9:
        *(undefined2 *)(DAT_021aa094 + 0x2282) = 0;
        *(undefined2 *)(DAT_021aa094 + 0x2280) = 6;
      case 0xc:
        FUN_0219881c();
        return;
      case 10:
        *(undefined2 *)(DAT_021aa094 + 0x2282) = 0;
      case 8:
        FUN_021988cc(0xc);
        return;
      }
      break;
    default:
      if (*(short *)(param_1 + 8) == 0x1a) {
        return;
      }
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
      FUN_021988cc(0xb);
      FUN_02198974(7,DAT_021aa094 + 0x2140,*(undefined2 *)(param_1 + 8),0x804);
      return;
    }
    break;
  case 1:
    *(undefined2 *)(DAT_021aa094 + 0x22f8) = *(undefined2 *)(param_1 + 0xe);
  case 6:
  case 0xb:
  case 0xc:
    FUN_021988cc(8);
    FUN_0219881c();
    return;
  default:
    FUN_021988cc(0xb);
    FUN_02198974(7,DAT_021aa094 + 0x2140,0,0x81b);
  }
  return;
}

