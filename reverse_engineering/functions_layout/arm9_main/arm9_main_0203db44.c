
/* WARNING: Removing unreachable block (ram,0x0203de00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-CLASS jus_Class_0209ab18::vfunc_40 [class-virtual] slot 40 of vtable 0209ab18 (own slot, not
   inherited) */

void jus_Class_0209ab18::vfunc_40(void)

{
  short sVar1;
  ushort uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 in_r3;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int unaff_r7;
  int unaff_r8;
  int iVar8;
  bool bVar9;
  
                    /* JUS-TAG hw={"GX_2D_main":4} io=["04000008","0400000c","0400000e","0400004c"]
                        */
  if (DAT_020a0ff0 == 0) {
    return;
  }
  DAT_020a0ff0 = DAT_020a0ff0 + -1;
  if (DAT_020a0ff0 == 0) {
    return;
  }
  iVar6 = 0;
  uVar7 = 0;
  do {
    (**(code **)((&DAT_020a1700)[uVar7] + 0x94c))(*(undefined1 *)((&DAT_020a1700)[uVar7] + 0x957));
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  uVar7 = 0;
  DAT_0400004c = DAT_02093bc4 | DAT_02093bc5 << 4;
  do {
    if (*(int *)((&DAT_020a1700)[uVar7] + 0x960) != 0) {
      *(int *)((&DAT_020a1700)[uVar7] + 0x968) = iVar6;
      iVar6 = iVar6 + (*(int *)((&DAT_020a1700)[uVar7] + 0x960) + 0x7ffU & 0xfffff800);
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  uVar4 = iVar6 + 0x3fffU & 0xffffc000;
  uVar7 = 0;
  do {
    uVar5 = 0;
    if (*(int *)((&DAT_020a1700)[uVar7] + 0x95c) != 0) {
      *(uint *)((&DAT_020a1700)[uVar7] + 0x964) = uVar4;
      uVar5 = *(int *)((&DAT_020a1700)[uVar7] + 0x95c) + 0x3fffU & 0xffffc000;
      uVar4 = uVar4 + uVar5;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 4);
  bVar9 = *(int *)(DAT_020a1700 + 0x8e4) == 0;
  if (*(int *)(DAT_020a1704 + 0x8e4) == 1) {
    iVar6 = *(int *)(DAT_020a1708 + 0x8e4);
    if (iVar6 == 1) {
      iVar6 = *(int *)(DAT_020a170c + 0x8e4);
      if (iVar6 == 1) {
        GX_SetGraphicsMode(1,0,bVar9,uVar5,in_r3);
      }
      else if (iVar6 == 2) {
        GX_SetGraphicsMode(1,1,bVar9,uVar5,in_r3);
      }
      else if (iVar6 - 3U < 3) {
        GX_SetGraphicsMode(1,3,bVar9,uVar5,in_r3);
      }
    }
    else if (iVar6 == 2) {
      if (*(int *)(DAT_020a170c + 0x8e4) == 2) {
        GX_SetGraphicsMode(1,2,bVar9,uVar5,in_r3);
      }
      else if (*(int *)(DAT_020a170c + 0x8e4) - 3U < 3) {
        GX_SetGraphicsMode(1,4,bVar9,uVar5,in_r3);
      }
    }
    else {
      uVar7 = iVar6 - 3;
      if (uVar7 < 3) {
        uVar7 = *(int *)(DAT_020a170c + 0x8e4) - 3;
      }
      if (uVar7 < 3) {
        GX_SetGraphicsMode(1,5,bVar9,uVar5,in_r3);
      }
    }
  }
  uVar7 = 0;
  do {
    iVar8 = (&DAT_020a1700)[uVar7];
    iVar6 = *(int *)(iVar8 + 0x8e4);
    if (iVar6 == 1) {
      uVar4 = iVar8 + 0x800;
      sVar1 = *(short *)(iVar8 + 0x8c8);
      if (sVar1 != 0) {
        if (sVar1 == 0x20) {
          uVar4 = (uint)*(ushort *)(iVar8 + 0x8ca);
        }
        if (sVar1 != 0x20 || uVar4 != 0x20) {
          if (sVar1 == 0x40) {
            uVar4 = (uint)*(ushort *)(iVar8 + 0x8ca);
          }
          if (sVar1 == 0x40 && uVar4 == 0x20) {
            unaff_r7 = 1;
          }
          else {
            if (sVar1 == 0x20) {
              uVar4 = (uint)*(ushort *)(iVar8 + 0x8ca);
            }
            if (sVar1 == 0x20 && uVar4 == 0x40) {
              unaff_r7 = 2;
            }
            else {
              bVar9 = sVar1 == 0x40;
              if (bVar9) {
                sVar1 = *(short *)(iVar8 + 0x8ca);
              }
              if (bVar9 && sVar1 == 0x40) {
                unaff_r7 = 3;
              }
            }
          }
          goto LAB_0203de38;
        }
      }
      unaff_r7 = 0;
    }
    else if (iVar6 - 2U < 4) {
      uVar2 = *(ushort *)(iVar8 + 0x8c8);
      if (uVar2 < 0x21) {
        if (uVar2 < 0x20) {
          if ((uVar2 == 0) || (uVar2 == 0x10)) {
            unaff_r8 = 0;
          }
        }
        else {
          unaff_r8 = 1;
        }
      }
      else if (uVar2 < 0x41) {
        if (uVar2 == 0x40) {
          unaff_r8 = 2;
        }
      }
      else if (uVar2 == 0x80) {
        unaff_r8 = 3;
      }
    }
LAB_0203de38:
    bVar9 = *(int *)(iVar8 + 0x8dc) != 4;
    uVar4 = *(uint *)(iVar8 + 0x968) >> 0xb;
    uVar5 = *(uint *)(iVar8 + 0x964) >> 0xe;
    switch(uVar7) {
    case 0:
      if (iVar6 == 1) {
        _DAT_04000008 =
             _DAT_04000008 & 0x43 | (ushort)(unaff_r7 << 0xe) | (ushort)bVar9 << 7 |
             (ushort)(uVar4 << 8) | (ushort)(uVar5 << 2) | (ushort)((uVar7 >> 1) << 0xd);
        uVar3 = FUN_02065d24();
        *(undefined4 *)((&DAT_020a1720)[uVar7] + 0x1c) = uVar3;
        *(undefined4 *)((&DAT_020a1720)[uVar7] + 4) =
             *(undefined4 *)((&DAT_020a1700)[uVar7] + 0x95c);
      }
      break;
    case 1:
      FUN_0203e0d8(unaff_r7);
      uVar3 = FUN_02065cd8();
      *(undefined4 *)((&DAT_020a1720)[uVar7] + 0x1c) = uVar3;
      *(undefined4 *)((&DAT_020a1720)[uVar7] + 4) = *(undefined4 *)((&DAT_020a1700)[uVar7] + 0x95c);
      break;
    case 2:
      if (iVar6 == 1) {
        _DAT_0400000c =
             _DAT_0400000c & 0x43 | (ushort)(unaff_r7 << 0xe) | (ushort)bVar9 << 7 |
             (ushort)(uVar4 << 8) | (ushort)(uVar5 << 2);
      }
      else if (iVar6 == 2) {
        FUN_0203e10c(unaff_r8,*(undefined4 *)(iVar8 + 0x970));
      }
      else if (iVar6 == 3) {
        _DAT_0400000c =
             _DAT_0400000c & 0x43 | (ushort)(unaff_r8 << 0xe) | (ushort)(uVar5 << 2) |
             (ushort)(uVar4 << 8) | (ushort)(*(int *)(iVar8 + 0x970) << 0xd);
      }
      else if (iVar6 == 4) {
        _DAT_0400000c =
             _DAT_0400000c & 0x43 | (ushort)(unaff_r8 << 0xe) | 0x80 | (ushort)(uVar5 << 8) |
             (ushort)(*(int *)(iVar8 + 0x970) << 0xd);
      }
      else if (iVar6 == 5) {
        _DAT_0400000c =
             _DAT_0400000c & 0x43 | (ushort)(unaff_r8 << 0xe) | 0x84 | (ushort)(uVar5 << 8) |
             (ushort)(*(int *)(iVar8 + 0x970) << 0xd);
      }
      FUN_02065eb8();
      uVar3 = FUN_02065c70();
      *(undefined4 *)((&DAT_020a1720)[uVar7] + 0x1c) = uVar3;
      *(undefined4 *)((&DAT_020a1720)[uVar7] + 4) = *(undefined4 *)((&DAT_020a1700)[uVar7] + 0x95c);
      break;
    case 3:
      if (iVar6 == 1) {
        _DAT_0400000e =
             _DAT_0400000e & 0x43 | (ushort)(unaff_r7 << 0xe) | (ushort)bVar9 << 7 |
             (ushort)(uVar4 << 8) | (ushort)(uVar5 << 2);
      }
      else if (iVar6 == 2) {
        _DAT_0400000e =
             _DAT_0400000e & 0x43 | (ushort)(unaff_r8 << 0xe) | (ushort)(uVar4 << 8) |
             (ushort)(uVar5 << 2) | (ushort)(*(int *)(iVar8 + 0x970) << 0xd);
      }
      else if (iVar6 == 3) {
        FUN_0203e138(unaff_r8,*(undefined4 *)(iVar8 + 0x970));
      }
      else if (iVar6 == 4) {
        _DAT_0400000e =
             _DAT_0400000e & 0x43 | (ushort)(unaff_r8 << 0xe) | 0x80 | (ushort)(uVar5 << 8) |
             (ushort)(*(int *)(iVar8 + 0x970) << 0xd);
      }
      else if (iVar6 == 5) {
        _DAT_0400000e =
             _DAT_0400000e & 0x43 | (ushort)(unaff_r8 << 0xe) | 0x84 | (ushort)(uVar5 << 8) |
             (ushort)(*(int *)(iVar8 + 0x970) << 0xd);
      }
      FUN_02065dc0();
      uVar3 = FUN_02065be8();
      *(undefined4 *)((&DAT_020a1720)[uVar7] + 0x1c) = uVar3;
      *(undefined4 *)((&DAT_020a1720)[uVar7] + 4) = *(undefined4 *)((&DAT_020a1700)[uVar7] + 0x95c);
    }
    uVar7 = uVar7 + 1;
    if (3 < uVar7) {
      return;
    }
  } while( true );
}

