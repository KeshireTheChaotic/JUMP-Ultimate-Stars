
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020627b0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
                    /* JUS-TAG hw={"CARD":1,"IPC_PXI":1} io=["040001a4","04100010"] */
  do {
    while( true ) {
      uVar2 = DAT_020aecbc & 0xfffffe00;
      if (((uVar2 != DAT_020aecbc) || ((DAT_020aecc0 & 3) != 0)) ||
         (uVar4 = DAT_020aecc0, DAT_020aecc4 < 0x200)) {
        *(uint *)(param_1 + 8) = uVar2;
        uVar4 = param_1 + 0x20;
      }
      FUN_02062a84(uVar2 >> 8 | 0xb7000000,0);
      uVar2 = 0;
      _DAT_040001a4 = *(uint *)(param_1 + 4);
      do {
        uVar1 = _DAT_040001a4;
        if (((_DAT_040001a4 & 0x800000) != 0) && (uVar2 < 0x200)) {
          iVar3 = uVar2 * 4;
          uVar2 = uVar2 + 1;
          *(undefined4 *)(uVar4 + iVar3) = _DAT_04100010;
        }
      } while ((uVar1 & 0x80000000) != 0);
      if (uVar4 == DAT_020aecc0) break;
      iVar3 = FUN_02062af8(param_1);
      if (iVar3 == 0) {
        return;
      }
    }
    DAT_020aecbc = DAT_020aecbc + 0x200;
    DAT_020aecc0 = DAT_020aecc0 + 0x200;
    DAT_020aecc4 = DAT_020aecc4 - 0x200;
  } while (DAT_020aecc4 != 0);
  return;
}

