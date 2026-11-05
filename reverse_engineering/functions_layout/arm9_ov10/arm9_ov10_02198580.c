
void FUN_02198580(ushort *param_1)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = 0x14;
  switch(param_1[1]) {
  case 0:
    uVar1 = *param_1;
    if (uVar1 < 0x1a) {
      if (uVar1 < 0x19) {
        switch(uVar1) {
        case 3:
          iVar2 = FUN_02059560(0x2198581);
          break;
        case 4:
          iVar2 = FUN_0205822c();
          if (iVar2 == 0) {
            FUN_021988cc(1);
            FUN_02198974(0,0,0,0x663);
            return;
          }
          FUN_021988cc(0xb);
          FUN_02198974(7,0,0,0x66c);
          return;
        case 5:
          FUN_021988cc(3);
          FUN_02198974(0,0,0,0x673);
          return;
        case 6:
          iVar2 = FUN_020595a8(0x2198581);
        }
      }
      else {
        iVar2 = FUN_0205ad34(0x2198581,*(undefined1 *)(DAT_021aa094 + 0x2250),
                             *(undefined1 *)(DAT_021aa094 + 0x2251),DAT_021aa094 + 0x2200);
      }
    }
    else if (uVar1 < 0x1e) {
      if (uVar1 == 0x1d) {
        iVar2 = FUN_0205abfc(0x2198581,0);
      }
    }
    else if (uVar1 == 0x27) {
      iVar2 = FUN_02058e64(0x2198145,DAT_021aa094 + 0x2140,0,
                           (*(uint *)(DAT_021aa094 + 0x2264) & 0x30000) != 0x30000,
                           (*(uint *)(DAT_021aa094 + 0x2264) & 0xc0000) == 0xc0000);
    }
    if (iVar2 != 2) {
      if ((iVar2 == 3) || (iVar2 != 8)) {
        FUN_021988cc(0xb);
        if (*(short *)(DAT_021aa094 + 0x2280) == 5) {
          iVar2 = DAT_021aa094 + 0x2140;
        }
        else {
          iVar2 = 0;
        }
        FUN_02198974(7,iVar2,0,0x6b8);
        return;
      }
      FUN_021988cc(0xc);
      if (*(short *)(DAT_021aa094 + 0x2280) == 5) {
        iVar2 = DAT_021aa094 + 0x2140;
      }
      else {
        iVar2 = 0;
      }
      FUN_02198974(1,iVar2,0,0x6af);
      return;
    }
    break;
  case 1:
    FUN_021988cc(0xc);
    if (*(short *)(DAT_021aa094 + 0x2280) == 5) {
      iVar2 = DAT_021aa094 + 0x2140;
    }
    else {
      iVar2 = 0;
    }
    FUN_02198974(1,iVar2,0,0x6de);
    return;
  default:
    FUN_021988cc(0xb);
    if (*(short *)(DAT_021aa094 + 0x2280) == 5) {
      iVar2 = DAT_021aa094 + 0x2140;
    }
    else {
      iVar2 = 0;
    }
    FUN_02198974(7,iVar2,0,0x6e8);
  }
  return;
}

