
void FUN_027e1e08(int param_1)

{
  ushort uVar1;
  
  if (DAT_027f97ec == 0) {
    return;
  }
  if (*DAT_027f97f0 == 1) {
    return;
  }
  uVar1 = *(ushort *)(param_1 + 0xc);
  if (0x182 < uVar1) {
    if (uVar1 < 0x186) {
      if (0x184 < uVar1) {
        FUN_027e1070();
        goto LAB_027e1f34;
      }
      if (uVar1 == 0x184) {
        FUN_027e1860();
        goto LAB_027e1f34;
      }
    }
    else if (uVar1 == 0x186) {
      FUN_027e0da4();
      goto LAB_027e1f34;
    }
    goto switchD_027e1e54_default;
  }
  if (0x181 < uVar1) {
    FUN_027e1380();
    goto LAB_027e1f34;
  }
  if (0x8d < uVar1) {
    if (uVar1 == 0x180) {
      FUN_027e0edc(param_1);
      goto LAB_027e1f34;
    }
    goto switchD_027e1e54_default;
  }
  switch(uVar1) {
  case 0x84:
    FUN_027e08cc();
    break;
  case 0x85:
    FUN_027e0900();
    break;
  case 0x86:
    FUN_027e0bb4();
    break;
  case 0x87:
    FUN_027e0d3c();
    break;
  case 0x88:
    FUN_027e0d70();
    break;
  case 0x89:
  default:
switchD_027e1e54_default:
    FUN_027e1dc4(param_1);
    break;
  case 0x8a:
    goto switchD_027e1e54_default;
  case 0x8b:
    FUN_027e1bc8();
    break;
  case 0x8c:
    FUN_027e1d78();
    break;
  case 0x8d:
    FUN_027e1c14();
  }
LAB_027e1f34:
  FUN_027e1dc8(param_1);
  return;
}

