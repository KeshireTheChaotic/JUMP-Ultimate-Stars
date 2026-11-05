
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fac68(void)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  int iVar8;
  int local_48;
  int local_40;
  int local_38;
  int local_30;
  uint local_2c;
  
                    /* JUS-TAG hw={"WIRELESS":2} io=["04804000","0480805a"] */
  iVar2 = _DAT_0380fff4;
  local_30 = 0;
  local_38 = 0;
  local_40 = 0;
  local_48 = 0;
  local_2c = 0;
  uVar1 = _DAT_0480805a;
  do {
    while( true ) {
      do {
        _DAT_0480805a = uVar1;
        uVar6 = (uint)_DAT_0480805a;
        if (uVar6 == *(ushort *)(iVar2 + 0x4e0)) {
          return;
        }
        if (0x8c5 < uVar6) {
          FUN_027e9e08();
        }
        iVar5 = uVar6 * 2;
        puVar7 = (ushort *)(&DAT_04804000 + iVar5);
        puVar3 = (ushort *)FUN_037fa998(&DAT_04804002 + iVar5);
        uVar1 = *puVar3;
      } while (*(short *)(&DAT_04804000 + uVar6 * 2) == -1);
      puVar4 = (undefined2 *)FUN_037fa998(&DAT_04804008 + iVar5);
      iVar5 = FUN_037fb1f0(puVar7,*puVar4);
      _DAT_0480805a = uVar1;
      if (iVar5 != 0) break;
      if ((*puVar7 & 0xf) == 0xc) {
        FUN_027e904c(0x10);
        uVar1 = _DAT_0480805a;
      }
      else {
        FUN_027e904c(8);
        uVar1 = _DAT_0480805a;
      }
    }
    if (((*(ushort *)(_DAT_0380fff4 + 0x690) & 8) != 0) &&
       ((*(ushort *)(iVar5 + 0x14) & 0x4000) != 0)) {
      *(undefined2 *)(iVar2 + 0x4de) = 0;
    }
    iVar8 = 1;
    if ((*(ushort *)(iVar5 + 8) & 0x200) != 0) {
      if (((*(ushort *)(iVar5 + 0x14) & 0x7ff) >> 10 == 1) ||
         ((*(ushort *)(iVar5 + 0x2a) & 0xf) != 0)) {
        FUN_037f8a3c(iVar2 + 0x188,iVar2 + 0x1e8,iVar5 + -0x10);
        FUN_037f85f8(2,9);
        iVar8 = local_48;
      }
      goto switchD_037fae0c_default;
    }
    switch(*(ushort *)(iVar5 + 8) & 0xf) {
    case 0:
      if ((*(ushort *)(iVar5 + 0x14) & 0xf) == 0) {
        FUN_037f8a3c(iVar2 + 0x188,iVar2 + 0x1dc,iVar5 + -0x10);
        FUN_037f85f8(1,7);
        iVar8 = local_38;
      }
      break;
    case 1:
      if (*(short *)(iVar5 + 0x14) == 0x80) {
        FUN_027f472c(iVar5);
      }
      break;
    case 2:
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      if ((*(ushort *)(iVar5 + 0x14) & 0xe7ff) == 0xa4) {
        FUN_037f8a3c(iVar2 + 0x188,iVar2 + 0x1dc,iVar5 + -0x10);
        FUN_037f85f8(1,7);
        iVar8 = local_30;
      }
      break;
    case 6:
      break;
    case 7:
      break;
    case 8:
      if ((*(ushort *)(iVar5 + 0x14) & 0xf) == 8) {
        FUN_037f8a3c(iVar2 + 0x188,iVar2 + 0x1c4,iVar5 + -0x10);
        FUN_037f85f8(2,6);
        iVar8 = local_40;
      }
      break;
    case 9:
      break;
    case 10:
      break;
    case 0xb:
      break;
    case 0xc:
      if ((*(ushort *)(iVar5 + 0x14) & 0xe7ff) == 0x228) {
        if (*(short *)(_DAT_0380fff4 + 0x354) == 0) {
          _DAT_0480803c = 1;
        }
        *(int *)(_DAT_0380fff4 + 0x5ac) = *(int *)(_DAT_0380fff4 + 0x5ac) + 1;
        iVar8 = FUN_027f50c8(iVar5);
      }
      break;
    case 0xd:
      if ((*(ushort *)(iVar5 + 0x14) & 0xe7ff) == 0x218) {
        *(int *)(_DAT_0380fff4 + 0x5b0) = *(int *)(_DAT_0380fff4 + 0x5b0) + 1;
        iVar8 = FUN_027f4dec(iVar5);
      }
      break;
    case 0xe:
      goto LAB_037faf08;
    case 0xf:
LAB_037faf08:
      if ((*(ushort *)(iVar5 + 0x14) & 0xe7bf) == 0x118) {
        FUN_027f4ed0(iVar5);
      }
    }
switchD_037fae0c_default:
    if (iVar8 != 0) {
      FUN_037f89b8(iVar2 + 0x188,iVar5 + -0x10);
    }
    uVar1 = _DAT_0480805a;
    if ((*(ushort *)(_DAT_0380fff4 + 0x690) & 1) != 0) {
      uVar6 = local_2c;
      do {
        puVar3 = puVar7;
        if ((ushort *)0x4805f5f < puVar7) {
          puVar3 = (ushort *)((int)puVar7 - (uint)*(ushort *)(_DAT_0380fff4 + 0x3de));
        }
        puVar7 = puVar3 + 1;
        *puVar3 = 0xffff;
        uVar6 = uVar6 + 1;
        uVar1 = _DAT_0480805a;
      } while (uVar6 < 7);
    }
  } while( true );
}

