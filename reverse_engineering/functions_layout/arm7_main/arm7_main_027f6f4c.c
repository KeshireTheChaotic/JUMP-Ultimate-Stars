
void FUN_027f6f4c(undefined4 param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  
  if (param_3 != 0) {
    return;
  }
  uVar1 = (param_2 & 0x7f00) >> 8;
  switch(uVar1) {
  case 0:
    goto LAB_027f7018;
  case 1:
    goto LAB_027f7018;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
    break;
  case 6:
    break;
  case 7:
    break;
  case 8:
    break;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    break;
  case 0xc:
    break;
  case 0xd:
    break;
  case 0xe:
    break;
  case 0xf:
    break;
  case 0x10:
    goto LAB_027f7018;
  case 0x11:
    goto LAB_027f7018;
  case 0x12:
    goto LAB_027f7018;
  case 0x13:
    goto LAB_027f7018;
  case 0x14:
    goto LAB_027f7018;
  case 0x15:
    goto LAB_027f7018;
  case 0x16:
    goto LAB_027f7018;
  case 0x17:
    goto LAB_027f7018;
  case 0x18:
    goto LAB_027f7018;
  case 0x19:
    goto LAB_027f7018;
  case 0x1a:
    break;
  case 0x1b:
    break;
  case 0x1c:
    break;
  case 0x1d:
    break;
  case 0x1e:
    break;
  case 0x1f:
    break;
  case 0x20:
    break;
  case 0x21:
    break;
  case 0x22:
    break;
  case 0x23:
    goto LAB_027f7018;
  case 0x24:
    goto LAB_027f7018;
  case 0x25:
    goto LAB_027f7018;
  case 0x26:
    goto LAB_027f7018;
  case 0x27:
    goto LAB_027f7018;
  case 0x28:
    goto LAB_027f7018;
  case 0x29:
LAB_027f7018:
    if (DAT_027f9a28 != 0) {
      FUN_027f6f0c(uVar1,3);
      return;
    }
    DAT_027f9a28 = 1;
    DAT_027f9a2c = (undefined2)((param_2 & 0x7f00) >> 8);
    iVar2 = FUN_037fcc6c(&DAT_027f9854,0,0);
    if (iVar2 == 0) {
      FUN_027f6f0c(uVar1,4);
      return;
    }
    return;
  }
  FUN_027f6f0c(uVar1,1);
  return;
}

