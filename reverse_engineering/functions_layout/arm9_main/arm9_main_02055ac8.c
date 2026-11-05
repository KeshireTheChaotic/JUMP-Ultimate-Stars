
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02055ac8(undefined4 param_1,uint param_2,int param_3)

{
  code *pcVar1;
  uint *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  
  puVar2 = DAT_020aaf68;
                    /* JUS-TAG hw={"SYSTEM_SHARED":3} io=["027ffde8","027ffdea","027ffdec"] */
  pcVar1 = DAT_020aaf64;
  if (param_3 != 0) {
    if (DAT_020aaf78 != 0) {
      DAT_020aaf78 = 0;
    }
    if (DAT_020aaf60 != 0) {
      DAT_020aaf60 = 0;
    }
    if (DAT_020aaf64 == (code *)0x0) {
      return;
    }
    DAT_020aaf64 = (code *)0x0;
    (*pcVar1)(6,DAT_020aaf70);
    return;
  }
  if ((param_2 & 0x7f00) == 0x3000) {
    if (DAT_020aaf7c == (code *)0x0) {
      return;
    }
    (*DAT_020aaf7c)();
    return;
  }
  if ((param_2 & 0xff) == 0) {
    uVar7 = 0;
    switch(DAT_020aaf74) {
    case 0:
      uVar5 = FUN_02055a44(DAT_027ffde8);
      *puVar2 = uVar5;
      uVar5 = FUN_02055a44((_DAT_027ffde8 & 0x1fff) >> 8);
      puVar2[1] = uVar5;
      uVar5 = FUN_02055a44((_DAT_027ffde8 & 0x3fffff) >> 0x10);
      puVar2[2] = uVar5;
      uVar5 = FUN_02056394(puVar2);
      puVar2[3] = uVar5;
      break;
    case 1:
      uVar5 = FUN_02055a44(_DAT_027ffdec & 0x3f);
      *puVar2 = uVar5;
      uVar5 = FUN_02055a44((_DAT_027ffdec & 0x7fff) >> 8);
      puVar2[1] = uVar5;
      uVar5 = FUN_02055a44((_DAT_027ffdec & 0x7fffff) >> 0x10);
      puVar2[2] = uVar5;
      break;
    case 2:
      uVar5 = FUN_02055a44(_DAT_027ffde8 & 0xff);
      *puVar2 = uVar5;
      uVar5 = FUN_02055a44((_DAT_027ffde8 & 0x1fff) >> 8);
      puVar2[1] = uVar5;
      uVar5 = FUN_02055a44((_DAT_027ffde8 & 0x3fffff) >> 0x10);
      puVar2[2] = uVar5;
      uVar5 = FUN_02056394(puVar2);
      puVar2[3] = uVar5;
      puVar3 = DAT_020aaf6c;
      uVar4 = FUN_02055a44(_DAT_027ffdec & 0x3f);
      *puVar3 = uVar4;
      uVar4 = FUN_02055a44((_DAT_027ffdec & 0x7fff) >> 8);
      puVar3[1] = uVar4;
      uVar4 = FUN_02055a44((_DAT_027ffdec & 0x7fffff) >> 0x10);
      puVar3[2] = uVar4;
      break;
    case 3:
      break;
    case 4:
      break;
    case 5:
      break;
    case 6:
      if ((_DAT_027ffdea & 0xf) == 4) {
        *DAT_020aaf68 = 1;
      }
      else {
        *DAT_020aaf68 = 0;
      }
      break;
    case 7:
      if ((_DAT_027ffdea & 0x7f) >> 6 == 0) {
        *DAT_020aaf68 = 0;
      }
      else {
        *DAT_020aaf68 = 1;
      }
      break;
    case 8:
      *DAT_020aaf68 = _DAT_027ffdec & 7;
      uVar5 = FUN_02055a44((_DAT_027ffdec & 0x3fff) >> 8);
      puVar2[1] = uVar5;
      uVar5 = FUN_02055a44((_DAT_027ffdec & 0x7fffff) >> 0x10);
      puVar2[2] = uVar5;
      puVar2[3] = 0;
      if ((_DAT_027ffdec & 0xff) >> 7 != 0) {
        puVar2[3] = puVar2[3] + 1;
      }
      if ((_DAT_027ffdec & 0xffff) >> 0xf != 0) {
        puVar2[3] = puVar2[3] + 2;
      }
      if ((_DAT_027ffdec & 0xffffff) >> 0x17 != 0) {
        puVar2[3] = puVar2[3] + 4;
      }
      break;
    case 9:
      if (DAT_020aaf78 == 0) {
        if (*DAT_020aaf68 == 1) {
          if ((_DAT_027ffdea & 0xf) != 4) {
            DAT_020aaf78 = 1;
            _DAT_027ffde8 = _DAT_027ffde8 & 0xfff0ffff | 0x40000;
            iVar6 = FUN_02056354();
            if (iVar6 == 0) {
              uVar7 = 3;
              DAT_020aaf78 = 0;
            }
          }
        }
        else if ((_DAT_027ffde8 & 0xf0000) != 0) {
          DAT_020aaf78 = 1;
          _DAT_027ffde8 = _DAT_027ffde8 & 0xfff0ffff;
          iVar6 = FUN_02056354();
          if (iVar6 == 0) {
            uVar7 = 3;
            DAT_020aaf78 = 0;
          }
        }
      }
      else {
        DAT_020aaf78 = 0;
      }
      break;
    case 10:
      if (DAT_020aaf78 == 0) {
        if (*DAT_020aaf68 == 1) {
          if ((_DAT_027ffdea & 0x7f) >> 6 == 0) {
            DAT_020aaf78 = 1;
            _DAT_027ffde8 = _DAT_027ffde8 | 0x400000;
            iVar6 = FUN_02056354();
            if (iVar6 == 0) {
              uVar7 = 3;
              DAT_020aaf78 = 0;
            }
          }
        }
        else if ((_DAT_027ffdea & 0x7f) >> 6 != 0) {
          DAT_020aaf78 = 1;
          _DAT_027ffde8 = _DAT_027ffde8 & 0xffbfffff;
          iVar6 = FUN_02056354();
          if (iVar6 == 0) {
            uVar7 = 3;
            DAT_020aaf78 = 0;
          }
        }
      }
      else {
        DAT_020aaf78 = 0;
      }
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
    default:
      DAT_020aaf78 = 0;
      uVar7 = 4;
    }
  }
  else {
    DAT_020aaf78 = 0;
    switch(param_2 & 0xff) {
    case 1:
      uVar7 = 4;
      break;
    case 2:
      uVar7 = 5;
      break;
    case 3:
      uVar7 = 1;
      break;
    case 4:
    default:
      uVar7 = 6;
    }
  }
  pcVar1 = DAT_020aaf64;
  if (DAT_020aaf78 != 0) {
    return;
  }
  if (DAT_020aaf60 != 0) {
    DAT_020aaf60 = 0;
  }
  if (DAT_020aaf64 == (code *)0x0) {
    return;
  }
  DAT_020aaf64 = (code *)0x0;
  (*pcVar1)(uVar7,DAT_020aaf70);
  return;
}

