
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01ff9044(uint param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
                    /* JUS-TAG hw={"SYSTEM_SHARED":1,"CARD":10,"IPC_PXI":1}
                       io=["027ffe60","040001a1","040001a4","040001a8","040001a9","040001aa","040001ab","040001ac","040001ad","040001ae","040001af","04100010"]
                        */
  uVar2 = _DAT_027ffe60 & 0xf8ffffff;
  iVar4 = -(param_1 & 0x1ff);
  do {
  } while ((_DAT_040001a4 & 0x80000000) != 0);
  DAT_040001a1 = 0x80;
  param_1 = param_1 + iVar4;
  if (param_3 <= iVar4) {
    return;
  }
  uVar3 = param_1 >> 8;
  do {
    DAT_040001a8 = 0xb7;
    DAT_040001a9 = (undefined1)(param_1 >> 0x18);
    DAT_040001aa = (undefined1)(param_1 >> 0x10);
    DAT_040001ab = (undefined1)uVar3;
    DAT_040001ac = (undefined1)param_1;
    DAT_040001ad = 0;
    DAT_040001ae = 0;
    DAT_040001af = 0;
    _DAT_040001a4 = uVar2 | 0xa1000000;
    do {
      uVar1 = _DAT_040001a4;
      if ((_DAT_040001a4 & 0x800000) != 0) {
        if ((-1 < iVar4) && (iVar4 < param_3)) {
          *(undefined4 *)(param_2 + iVar4) = _DAT_04100010;
        }
        iVar4 = iVar4 + 4;
      }
    } while ((uVar1 & 0x80000000) != 0);
    uVar3 = uVar3 + 2;
    param_1 = param_1 + 0x200;
  } while (iVar4 < param_3);
  return;
}

