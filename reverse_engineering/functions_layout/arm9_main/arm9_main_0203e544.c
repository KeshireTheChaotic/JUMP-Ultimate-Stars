
/* WARNING: Removing unreachable block (ram,0x0203e8a4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-CLASS jus_Class_0209aa68::vfunc_40 [class-virtual] slot 40 of vtable 0209aa68 (own slot, not
   inherited) */

void jus_Class_0209aa68::vfunc_40(void)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 in_r3;
  int iVar6;
  uint uVar7;
  int unaff_r6;
  uint uVar8;
  bool bVar9;
  undefined4 local_3c;
  int local_38 [4];
  undefined4 uStack_28;
  
                    /* JUS-TAG hw={"GX_2D_sub":3} io=["0400100c","0400100e","0400104c"] */
  if ((DAT_020a0ebc != 0) && (DAT_020a0ebc = DAT_020a0ebc + -1, DAT_020a0ebc != 0)) {
    iVar6 = 0;
    uVar8 = 0;
    uStack_28 = in_r3;
    do {
      (**(code **)((&DAT_020a1710)[uVar8] + 0x94c))(*(undefined1 *)((&DAT_020a1710)[uVar8] + 0x957))
      ;
      iVar3 = (**(code **)((&DAT_020a1710)[uVar8] + 0x948))();
      local_38[uVar8] = (*(uint *)((&DAT_020a1710)[uVar8] + 0x964) & 0x3fff) + iVar3;
      uVar8 = uVar8 + 1;
    } while (uVar8 < 4);
    uVar7 = 0;
    DAT_0400104c = DAT_02093bc2 | DAT_02093bc0 << 4;
    uVar8 = FUN_020650a4();
    if ((uVar8 & 1) != 0) {
      uVar7 = 0x20000;
    }
    if ((uVar8 & 2) != 0) {
      uVar7 = uVar7 + 0x20000;
    }
    if ((uVar8 & 4) != 0) {
      uVar7 = uVar7 + 0x20000;
    }
    if ((uVar8 & 8) != 0) {
      uVar7 = uVar7 + 0x20000;
    }
    if ((uVar8 & 0x10) != 0) {
      uVar7 = uVar7 + 0x10000;
    }
    if ((uVar8 & 0x20) != 0) {
      uVar7 = uVar7 + 0x4000;
    }
    if ((uVar8 & 0x40) != 0) {
      uVar7 = uVar7 + 0x4000;
    }
    if ((uVar8 & 0x80) != 0) {
      uVar7 = uVar7 + 0x8000;
    }
    if ((uVar8 & 0x100) != 0) {
      uVar7 = uVar7 + 0x4000;
    }
    uVar8 = 0;
    do {
      if (*(int *)((&DAT_020a1710)[uVar8] + 0x960) != 0) {
        *(int *)((&DAT_020a1710)[uVar8] + 0x968) = iVar6;
        iVar6 = iVar6 + (*(int *)((&DAT_020a1710)[uVar8] + 0x960) + 0x7ffU & 0xfffff800);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 4);
    uVar5 = iVar6 + 0x3fffU & 0xffffc000;
    uVar8 = 0;
    do {
      if (*(int *)((&DAT_020a1710)[uVar8] + 0x95c) != 0) {
        *(uint *)((&DAT_020a1710)[uVar8] + 0x964) = uVar5;
        uVar5 = uVar5 + (*(int *)((&DAT_020a1710)[uVar8] + 0x95c) + 0x3fffU & 0xffffc000);
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 4);
    if (uVar7 < uVar5) {
      uVar8 = 0;
      do {
        if (*(int *)((&DAT_020a1710)[uVar8] + 0x95c) != 0) {
          *(int *)((&DAT_020a1710)[uVar8] + 0x964) = iVar6;
          iVar6 = iVar6 + (*(int *)((&DAT_020a1710)[uVar8] + 0x95c) + 0x7ffU & 0xfffff800);
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < 4);
    }
    if (*(int *)(DAT_020a1714 + 0x8e4) == 1) {
      iVar6 = *(int *)(DAT_020a1718 + 0x8e4);
      if (iVar6 == 1) {
        iVar6 = *(int *)(DAT_020a171c + 0x8e4);
        if (iVar6 == 1) {
          GXS_SetGraphicsMode(0);
        }
        else if (iVar6 == 2) {
          GXS_SetGraphicsMode(1);
        }
        else if (iVar6 - 3U < 3) {
          GXS_SetGraphicsMode(3);
        }
      }
      else if (iVar6 == 2) {
        if (*(int *)(DAT_020a171c + 0x8e4) == 2) {
          GXS_SetGraphicsMode(2);
        }
        else if (*(int *)(DAT_020a171c + 0x8e4) - 3U < 3) {
          GXS_SetGraphicsMode(4);
        }
      }
      else {
        uVar8 = iVar6 - 3;
        if (uVar8 < 3) {
          uVar8 = *(int *)(DAT_020a171c + 0x8e4) - 3;
        }
        if (uVar8 < 3) {
          GXS_SetGraphicsMode(5);
        }
      }
    }
    uVar8 = 0;
    do {
      iVar6 = (&DAT_020a1710)[uVar8];
      if (*(int *)(iVar6 + 0x8e4) == 1) {
        uVar7 = iVar6 + 0x800;
        sVar1 = *(short *)(iVar6 + 0x8c8);
        if (sVar1 != 0) {
          if (sVar1 == 0x20) {
            uVar7 = (uint)*(ushort *)(iVar6 + 0x8ca);
          }
          if (sVar1 != 0x20 || uVar7 != 0x20) {
            if (sVar1 == 0x40) {
              uVar7 = (uint)*(ushort *)(iVar6 + 0x8ca);
            }
            if (sVar1 == 0x40 && uVar7 == 0x20) {
              local_3c = 1;
            }
            else {
              if (sVar1 == 0x20) {
                uVar7 = (uint)*(ushort *)(iVar6 + 0x8ca);
              }
              if (sVar1 == 0x20 && uVar7 == 0x40) {
                local_3c = 2;
              }
              else {
                bVar9 = sVar1 == 0x40;
                if (bVar9) {
                  sVar1 = *(short *)(iVar6 + 0x8ca);
                }
                if (bVar9 && sVar1 == 0x40) {
                  local_3c = 3;
                }
              }
            }
            goto LAB_0203e8dc;
          }
        }
        local_3c = 0;
      }
      else if (*(int *)(iVar6 + 0x8e4) - 2U < 4) {
        uVar2 = *(ushort *)(iVar6 + 0x8c8);
        if (uVar2 < 0x21) {
          if (uVar2 < 0x20) {
            if ((uVar2 == 0) || (uVar2 == 0x10)) {
              unaff_r6 = 0;
            }
          }
          else {
            unaff_r6 = 1;
          }
        }
        else if (uVar2 < 0x41) {
          if (uVar2 == 0x40) {
            unaff_r6 = 2;
          }
        }
        else if (uVar2 == 0x80) {
          unaff_r6 = 3;
        }
      }
LAB_0203e8dc:
      bVar9 = *(int *)(iVar6 + 0x8dc) != 4;
      iVar3 = (&DAT_020a1710)[uVar8];
      uVar7 = *(uint *)(iVar3 + 0x968) >> 0xb;
      uVar5 = *(uint *)(iVar3 + 0x964) >> 0xe;
      uVar4 = FUN_0200d338(*(uint *)(iVar3 + 0x964) & 0x3fff,*(int *)(iVar6 + 0x8dc) << 3);
      *(undefined4 *)(iVar3 + 0x8e0) = uVar4;
      switch(uVar8) {
      case 0:
        FUN_0203ec50(local_3c,bVar9,uVar7,uVar5,uVar8 >> 1);
        iVar6 = FUN_02065d08();
        *(uint *)((&DAT_020a1730)[uVar8] + 0x1c) =
             (*(uint *)((&DAT_020a1710)[uVar8] + 0x964) & 0x3fff) + iVar6;
        break;
      case 1:
        FUN_0203ec84(local_3c,bVar9,uVar7,uVar5,uVar8 >> 1);
        iVar6 = FUN_02065cbc();
        *(uint *)((&DAT_020a1730)[uVar8] + 0x1c) =
             (*(uint *)((&DAT_020a1710)[uVar8] + 0x964) & 0x3fff) + iVar6;
        break;
      case 2:
        iVar3 = (&DAT_020a1710)[uVar8];
        iVar6 = *(int *)(iVar3 + 0x8e4);
        if (iVar6 == 1) {
          FUN_0203ecb8(local_3c,bVar9,uVar7,uVar5);
        }
        else if (iVar6 == 2) {
          _DAT_0400100c =
               _DAT_0400100c & 0x43 | (ushort)(unaff_r6 << 0xe) | (ushort)(uVar7 << 8) |
               (ushort)(uVar5 << 2) | (ushort)(*(int *)(iVar3 + 0x970) << 0xd);
        }
        else if (iVar6 == 3) {
          _DAT_0400100c =
               _DAT_0400100c & 0x43 | (ushort)(unaff_r6 << 0xe) | (ushort)(uVar5 << 2) |
               (ushort)(uVar7 << 8) | (ushort)(*(int *)(iVar3 + 0x970) << 0xd);
        }
        else if (iVar6 == 4) {
          _DAT_0400100c =
               _DAT_0400100c & 0x43 | (ushort)(unaff_r6 << 0xe) | 0x80 | (ushort)(uVar5 << 8) |
               (ushort)(*(int *)(iVar3 + 0x970) << 0xd);
        }
        else if (iVar6 == 5) {
          _DAT_0400100c =
               _DAT_0400100c & 0x43 | (ushort)(unaff_r6 << 0xe) | 0x84 | (ushort)(uVar5 << 8) |
               (ushort)(*(int *)(iVar3 + 0x970) << 0xd);
        }
        iVar6 = FUN_02065c38();
        *(uint *)((&DAT_020a1730)[uVar8] + 0x1c) =
             (*(uint *)((&DAT_020a1710)[uVar8] + 0x964) & 0x3fff) + iVar6;
        break;
      case 3:
        iVar3 = (&DAT_020a1710)[uVar8];
        iVar6 = *(int *)(iVar3 + 0x8e4);
        if (iVar6 == 1) {
          FUN_0203ece4(local_3c,bVar9,uVar7,uVar5);
        }
        else if (iVar6 == 2) {
          _DAT_0400100e =
               _DAT_0400100e & 0x43 | (ushort)(unaff_r6 << 0xe) | (ushort)(uVar7 << 8) |
               (ushort)(uVar5 << 2) | (ushort)(*(int *)(iVar3 + 0x970) << 0xd);
        }
        else if (iVar6 == 3) {
          _DAT_0400100e =
               _DAT_0400100e & 0x43 | (ushort)(unaff_r6 << 0xe) | (ushort)(uVar5 << 2) |
               (ushort)(uVar7 << 8) | (ushort)(*(int *)(iVar3 + 0x970) << 0xd);
        }
        else if (iVar6 == 4) {
          _DAT_0400100e =
               _DAT_0400100e & 0x43 | (ushort)(unaff_r6 << 0xe) | 0x80 | (ushort)(uVar5 << 8) |
               (ushort)(*(int *)(iVar3 + 0x970) << 0xd);
        }
        else if (iVar6 == 5) {
          _DAT_0400100e =
               _DAT_0400100e & 0x43 | (ushort)(unaff_r6 << 0xe) | 0x84 | (ushort)(uVar5 << 8) |
               (ushort)(*(int *)(iVar3 + 0x970) << 0xd);
        }
        iVar6 = FUN_02065bac();
        *(uint *)((&DAT_020a1730)[uVar8] + 0x1c) =
             (*(uint *)((&DAT_020a1710)[uVar8] + 0x964) & 0x3fff) + iVar6;
      }
      *(undefined4 *)((&DAT_020a1730)[uVar8] + 4) = *(undefined4 *)((&DAT_020a1710)[uVar8] + 0x95c);
      iVar3 = (&DAT_020a1710)[uVar8];
      iVar6 = (**(code **)(iVar3 + 0x948))();
      uVar4 = DAT_0209dd40;
      if (local_38[uVar8] != (*(uint *)(iVar3 + 0x964) & 0x3fff) + iVar6) {
        iVar3 = (&DAT_020a1710)[uVar8];
        iVar6 = (**(code **)(iVar3 + 0x948))();
        MI_DmaCopy32(uVar4,local_38[uVar8],
                     (*(uint *)((&DAT_020a1710)[uVar8] + 0x964) & 0x3fff) + iVar6,
                     *(undefined4 *)(iVar3 + 0x960));
      }
      uVar8 = uVar8 + 1;
    } while (uVar8 < 4);
  }
  return;
}

