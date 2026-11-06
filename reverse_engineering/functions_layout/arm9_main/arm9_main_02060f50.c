
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02060f50(undefined4 param_1,uint param_2,int param_3)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_18;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":2} io=["027fffaa","027fffac"] */
  uVar1 = _DAT_027fffac;
  uVar2 = (param_2 & 0x7f00) >> 8;
  if (param_3 == 0) {
    if (uVar2 == 0x10) {
      DAT_020aeb6c = DAT_020aeb6c + 1;
      if (DAT_020aeb74 <= DAT_020aeb6c) {
        DAT_020aeb6c = 0;
      }
      iVar3 = DAT_020aeb70 + (uint)DAT_020aeb6c * 8;
      local_18 = CONCAT22(_DAT_027fffac,_DAT_027fffaa);
      *(ushort *)(DAT_020aeb70 + (uint)DAT_020aeb6c * 8) = _DAT_027fffaa & 0xfff;
      *(short *)(iVar3 + 2) = (short)((local_18 & 0xffffff) >> 0xc);
      *(ushort *)(iVar3 + 4) = (ushort)((byte)(uVar1 >> 8) & 1);
      *(ushort *)(iVar3 + 6) = (uVar1 & 0x7ff) >> 9;
      if (DAT_020aeb60 != (code *)0x0) {
        (*DAT_020aeb60)(0x10,0,DAT_020aeb6c & 0xff);
        return;
      }
    }
    else if ((param_2 & 0x1000000) != 0) {
      if ((param_2 & 0xff) < 5) {
        (*(code *)((int)&switchD_02061014::switchdataD_02061016 +
                  (int)(short)(&switchD_02061014::switchdataD_02061016)[param_2 & 0xff]))();
        return;
      }
      FUN_02055684();
    }
  }
  else {
    DAT_020aeb94 = DAT_020aeb94 | (ushort)(1 << uVar2);
    if (DAT_020aeb60 != (code *)0x0) {
      (*DAT_020aeb60)(uVar2,4,0);
      return;
    }
  }
  return;
}

