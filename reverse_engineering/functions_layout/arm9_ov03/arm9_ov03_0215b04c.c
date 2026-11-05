
void FUN_0215b04c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  uVar4 = FUN_02054b44();
  uVar2 = (uint)uVar4 - *(uint *)(iVar3 + 0xf8);
  if ((int)((ulonglong)uVar4 >> 0x20) !=
      *(int *)(iVar3 + 0xfc) + (uint)((uint)uVar4 < *(uint *)(iVar3 + 0xf8)) || 2999999 < uVar2) {
    FUN_02073ebc(3,1,*(int *)(iVar3 + 0xfc),uVar2,param_4);
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215aca8);
  }
  uVar1 = *(ushort *)(iVar3 + 0xee);
  if (0xe8 < uVar1) {
    if (uVar1 < 0xef) {
      if (uVar1 < 0xee) {
        if (uVar1 == 0xec) {
          *(undefined2 *)(iVar3 + 0xec) = 0x1c;
        }
      }
      else {
        *(undefined2 *)(iVar3 + 0xec) = 0xfffc;
      }
    }
    else if (uVar1 == 0xf0) {
      *(undefined2 *)(iVar3 + 0xec) = 0xffc4;
    }
    goto switchD_0215b0bc_default;
  }
  if (0xe7 < uVar1) {
    *(undefined2 *)(iVar3 + 0xec) = 100;
    goto switchD_0215b0bc_default;
  }
  if (0xe0 < uVar1) {
    if (uVar1 == 0xe4) {
      *(undefined2 *)(iVar3 + 0xec) = 0x8b;
    }
    goto switchD_0215b0bc_default;
  }
  if (0xdf < uVar1) {
    *(undefined2 *)(iVar3 + 0xec) = 0x88;
    goto switchD_0215b0bc_default;
  }
  switch(uVar1) {
  case 4:
    *(undefined2 *)(iVar3 + 0xec) = 0x10c;
    break;
  case 5:
    break;
  case 6:
    *(undefined2 *)(iVar3 + 0xec) = 0xec;
    break;
  case 7:
    break;
  case 8:
    *(undefined2 *)(iVar3 + 0xec) = 0xcd;
    break;
  case 9:
    break;
  case 10:
    *(undefined2 *)(iVar3 + 0xec) = 0xb4;
    break;
  case 0xb:
    break;
  case 0xc:
    *(undefined2 *)(iVar3 + 0xec) = 0x9c;
    FUN_0207342c(0x78,0xb);
    break;
  case 0xd:
    break;
  case 0xe:
    goto LAB_0215b1ac;
  case 0xf:
    break;
  case 0x10:
    goto LAB_0215b1b8;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    goto LAB_0215b1ac;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
LAB_0215b1b8:
    *(undefined2 *)(iVar3 + 0xec) = 0x7e;
    break;
  case 0x19:
    break;
  case 0x1a:
    break;
  case 0x1b:
    break;
  case 0x1c:
LAB_0215b1ac:
    *(undefined2 *)(iVar3 + 0xec) = 0x80;
  }
switchD_0215b0bc_default:
  *(short *)(iVar3 + 0xee) = *(short *)(iVar3 + 0xee) + 1;
  return;
}

