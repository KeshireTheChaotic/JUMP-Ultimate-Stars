
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f2efc(void)

{
  uint uVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  iVar4 = _DAT_0380fff4;
  sVar2 = *(short *)(_DAT_0380fff4 + 0x350);
  iVar5 = *(int *)(_DAT_0380fff4 + 0x1dc);
  if (iVar5 == -1) {
    return;
  }
  iVar10 = iVar5 + 0x10;
  if ((*(ushort *)(iVar5 + 0x28) & 1) == 0) {
    *(int *)(_DAT_0380fff4 + 0x564) = *(int *)(_DAT_0380fff4 + 0x564) + 1;
  }
  else {
    *(int *)(_DAT_0380fff4 + 0x568) = *(int *)(_DAT_0380fff4 + 0x568) + 1;
  }
  iVar6 = FUN_038078c0(*(ushort *)(iVar5 + 0x18) & 0xf0,0x10);
  *(int *)(iVar4 + 0x560) = *(int *)(iVar4 + 0x560) + iVar6 + -1;
  uVar7 = (uint)*(ushort *)(iVar5 + 0x24);
  uVar1 = (uVar7 & 0xf) >> 2;
  uVar7 = (uVar7 & 0xff) >> 4;
  uVar8 = FUN_027ec78c(iVar5 + 0x2e);
  *(short *)(iVar5 + 0x12) = (short)uVar8;
  if (uVar8 == 0xff) {
    *(undefined2 *)(iVar5 + 0x12) = 0;
    if ((sVar2 == 1) && (uVar1 == 0)) {
      if (uVar7 == 0) {
        FUN_027f4478(iVar10);
      }
      else if (uVar7 == 4) {
        FUN_027f3fd0(iVar10);
      }
      else if (uVar7 == 0xb) {
        FUN_027f36b0(iVar10);
      }
    }
  }
  else {
    FUN_027ec3fc();
    FUN_027ec548(uVar8 & 0xffff,*(ushort *)(iVar5 + 0x22) & 0xff);
    if (uVar1 == 0) {
      uVar3 = *(ushort *)(iVar5 + 0x3a);
      uVar9 = FUN_027ec228(uVar8);
      if (uVar3 == uVar9) {
        *(int *)(iVar4 + 0x578) = *(int *)(iVar4 + 0x578) + 1;
        goto switchD_027f315c_default;
      }
      FUN_027ec438(uVar8);
    }
    if (sVar2 == 1) {
      FUN_027ec4e4(uVar8 & 0xffff,(*(ushort *)(iVar5 + 0x24) & 0x1fff) >> 0xc);
      if (uVar1 == 0) {
        switch(uVar7) {
        case 0:
          FUN_027f4478(iVar10);
          break;
        case 1:
          break;
        case 2:
          FUN_027f41b8(iVar10);
          break;
        case 3:
          break;
        case 4:
          FUN_027f3fd0(iVar10);
          break;
        case 5:
          FUN_027f3be0(iVar10,0);
          break;
        case 6:
          break;
        case 7:
          break;
        case 8:
          FUN_027f472c(iVar10);
          break;
        case 9:
          break;
        case 10:
          FUN_027f463c(iVar10);
          break;
        case 0xb:
          FUN_027f36b0(iVar10);
          break;
        case 0xc:
          FUN_027f35f4(iVar10);
        }
      }
      else if ((uVar1 == 1) && (uVar7 == 10)) {
        FUN_027f358c(iVar10);
      }
    }
    else if ((sVar2 == 2) || (sVar2 == 3)) {
      if (uVar1 == 0) {
        switch(uVar7) {
        case 0:
          break;
        case 1:
          FUN_027f434c(iVar10);
          break;
        case 2:
          break;
        case 3:
          FUN_027f4084(iVar10);
          break;
        case 4:
          break;
        case 5:
          FUN_027f3be0(iVar10,0);
          break;
        case 6:
          break;
        case 7:
          break;
        case 8:
          FUN_027f472c(iVar10);
          break;
        case 9:
          break;
        case 10:
          FUN_027f463c(iVar10);
          break;
        case 0xb:
          FUN_027f36b0(iVar10);
          break;
        case 0xc:
          FUN_027f35f4(iVar10);
        }
      }
      else if ((uVar1 == 1) && ((uVar7 == 0xe || (uVar7 == 0xf)))) {
        FUN_027f3588(iVar10);
      }
    }
  }
switchD_027f315c_default:
  FUN_037f89b8(iVar4 + 0x1dc,iVar5);
  if (*(short *)(iVar4 + 0x1e4) != 0) {
    FUN_037f85f8(1,7);
  }
  return;
}

