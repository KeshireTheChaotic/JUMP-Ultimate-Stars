
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02060f50(undefined4 param_1,uint param_2,int param_3)

{
  ushort uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 local_18;
  undefined4 local_14;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":2} io=["027fffaa","027fffac"] */
  uVar1 = _DAT_027fffac;
  uVar3 = (param_2 & 0x7f00) >> 8;
  if (param_3 != 0) {
    DAT_020aeb94 = DAT_020aeb94 | (ushort)(1 << uVar3);
    if (DAT_020aeb60 == (code *)0x0) {
      return;
    }
    (*DAT_020aeb60)(uVar3,4,0);
    return;
  }
  bVar2 = (byte)(_DAT_027fffac >> 8);
  if (uVar3 == 0x10) {
    DAT_020aeb6c = DAT_020aeb6c + 1;
    if (DAT_020aeb74 <= DAT_020aeb6c) {
      DAT_020aeb6c = 0;
    }
    iVar5 = DAT_020aeb70 + (uint)DAT_020aeb6c * 8;
    local_18 = CONCAT22(_DAT_027fffac,_DAT_027fffaa);
    *(ushort *)(DAT_020aeb70 + (uint)DAT_020aeb6c * 8) = _DAT_027fffaa & 0xfff;
    *(short *)(iVar5 + 2) = (short)((local_18 & 0xffffff) >> 0xc);
    *(ushort *)(iVar5 + 4) = (ushort)(bVar2 & 1);
    *(ushort *)(iVar5 + 6) = (uVar1 & 0x7ff) >> 9;
    if (DAT_020aeb60 == (code *)0x0) {
      return;
    }
    (*DAT_020aeb60)(0x10,0,DAT_020aeb6c & 0xff);
    return;
  }
  if ((param_2 & 0x1000000) == 0) {
    return;
  }
  switch(param_2 & 0xff) {
  case 0:
    if (uVar3 == 0) {
      local_14 = CONCAT22(_DAT_027fffac,_DAT_027fffaa);
      DAT_020aeb64 = _DAT_027fffaa & 0xfff;
      DAT_020aeb66 = (undefined2)((local_14 & 0xffffff) >> 0xc);
      DAT_020aeb68 = (ushort)(bVar2 & 1);
      DAT_020aeb6a = (_DAT_027fffac & 0x7ff) >> 9;
      DAT_020aeb92 = 0;
    }
    else if (uVar3 == 1) {
      DAT_020aeb92 = 2;
    }
    else if (uVar3 == 2) {
      DAT_020aeb92 = 0;
    }
    DAT_020aeb96 = DAT_020aeb96 & ~(ushort)(1 << uVar3);
    if (DAT_020aeb60 == (code *)0x0) {
      return;
    }
    (*DAT_020aeb60)(uVar3,0,0);
    return;
  default:
    FUN_02055684();
    return;
  case 2:
    uVar4 = 1;
    break;
  case 3:
    uVar4 = 2;
    break;
  case 4:
    uVar4 = 3;
  }
  uVar1 = (ushort)(1 << uVar3);
  DAT_020aeb94 = DAT_020aeb94 | uVar1;
  DAT_020aeb96 = DAT_020aeb96 & ~uVar1;
  if (DAT_020aeb60 == (code *)0x0) {
    return;
  }
  (*DAT_020aeb60)(uVar3,uVar4,0);
  return;
}

