
void FUN_0215fcfc(int param_1,int param_2,int param_3)

{
  if (param_3 == 0) {
    return;
  }
  if (0x26 < param_2) {
    if (param_2 < 0x81) {
      if (param_2 == 0x80) {
        FUN_0215fe34();
        return;
      }
    }
    else if (param_2 == 0x81) {
      return;
    }
    goto switchD_0215fd24_default;
  }
  if (0x25 < param_2) goto LAB_0215fde0;
  switch(param_2) {
  case 0:
    break;
  case 1:
    goto LAB_0215fdd4;
  case 2:
    break;
  case 3:
    goto LAB_0215fdd4;
  case 4:
    goto LAB_0215fdd4;
  case 5:
    goto LAB_0215fdd4;
  case 6:
LAB_0215fdd4:
    FUN_0215fe34();
    return;
  case 7:
    goto LAB_0215fde0;
  case 8:
    goto LAB_0215fde0;
  case 9:
    break;
  case 10:
    break;
  case 0xb:
    goto LAB_0215fde0;
  case 0xc:
    if ((param_3 == 1) || (param_3 - 0xbU < 2)) {
      *(undefined4 *)(param_1 + 0x50f0) = 5;
      FUN_0215eac8(param_1,3);
      return;
    }
    FUN_0215fe34();
    return;
  case 0xd:
    goto LAB_0215fde0;
  case 0xe:
    goto LAB_0215fde0;
  case 0xf:
    return;
  case 0x10:
    break;
  case 0x11:
    break;
  case 0x12:
    break;
  case 0x13:
    break;
  case 0x14:
    break;
  case 0x15:
    break;
  case 0x16:
    break;
  case 0x17:
    break;
  case 0x18:
    break;
  case 0x19:
    break;
  case 0x1a:
    break;
  case 0x1b:
    break;
  case 0x1c:
    break;
  case 0x1d:
    break;
  case 0x1e:
LAB_0215fde0:
    FUN_0215fe34();
    return;
  }
switchD_0215fd24_default:
  FUN_0215fe34();
  return;
}

