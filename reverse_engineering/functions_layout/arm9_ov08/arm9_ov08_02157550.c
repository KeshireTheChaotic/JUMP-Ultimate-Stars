
/* WARNING: Removing unreachable block (ram,0x0215759e) */

void FUN_02157550(undefined4 param_1)

{
  undefined4 uVar1;
  int iVar2;
  byte bStack_10;
  char acStack_f [7];
  
  FUN_02165374();
  if ((*(char *)(DAT_0216e714 + 0x1e2a0) == '\0') || (*(char *)(DAT_0216e714 + 0x1e2a1) != '\0')) {
    FUN_02165330(&bStack_10,acStack_f);
    if (bStack_10 < 0x1b) {
      if (bStack_10 < 0x1a) {
        switch(bStack_10) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
          return;
        case 5:
          goto switchD_021575aa_caseD_5;
        case 0xc:
          if (acStack_f[0] == '\0') {
            return;
          }
          if (*(code **)(DAT_0216e714 + 0x1e298) == (code *)0x0) {
            *(undefined1 *)(DAT_0216e714 + 0x1e2a0) = 1;
            return;
          }
          (**(code **)(DAT_0216e714 + 0x1e298))(2);
          return;
        case 0xd:
          if (acStack_f[0] == '\0') {
            return;
          }
          if (*(code **)(DAT_0216e714 + 0x1e298) == (code *)0x0) {
            *(undefined1 *)(DAT_0216e714 + 0x1e2a0) = 1;
            return;
          }
          (**(code **)(DAT_0216e714 + 0x1e298))(1);
          return;
        default:
          if (bStack_10 != 0x17) {
            return;
          }
        case 0x14:
          if (acStack_f[0] == '\0') {
            return;
          }
          if (*(code **)(DAT_0216e714 + 0x1e298) == (code *)0x0) {
            *(undefined1 *)(DAT_0216e714 + 0x1e2a0) = 1;
            return;
          }
          (**(code **)(DAT_0216e714 + 0x1e298))(3);
          return;
        }
      }
    }
    else {
      if (0x1d < bStack_10) {
        if (bStack_10 == 0x22) {
          FUN_021677a0(0,param_1);
          FUN_02166b5c(&DAT_0216e714);
          return;
        }
        return;
      }
      if (bStack_10 != 0x1d) {
        return;
      }
    }
    if (acStack_f[0] != '\0') {
      if (*(code **)(DAT_0216e714 + 0x1e298) == (code *)0x0) {
        *(undefined1 *)(DAT_0216e714 + 0x1e2a0) = 1;
        return;
      }
      (**(code **)(DAT_0216e714 + 0x1e298))(4);
      return;
    }
  }
  else if (*(code **)(DAT_0216e714 + 0x1e298) != (code *)0x0) {
    (**(code **)(DAT_0216e714 + 0x1e298))(0);
    return;
  }
  return;
switchD_021575aa_caseD_5:
  if (acStack_f[0] == '\0') {
    return;
  }
  iVar2 = DAT_0216e714 + 0x1e280;
  uVar1 = FUN_02165324();
  MIi_CpuCopy16(uVar1,iVar2,0x16);
  if (*(code **)(DAT_0216e714 + 0x1e298) == (code *)0x0) {
    *(undefined1 *)(DAT_0216e714 + 0x1e2a0) = 1;
    return;
  }
  (**(code **)(DAT_0216e714 + 0x1e298))(0);
  return;
}

