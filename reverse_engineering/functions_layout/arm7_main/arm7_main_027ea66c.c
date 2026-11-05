
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_027ea66c(int param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  uint local_30;
  undefined4 local_2c [2];
  
                    /* JUS-TAG hw={"WIRELESS":4} io=["0480803c","04808040","04808048","04808214"] */
  if (param_2 == 0) {
    pcVar5 = FUN_027f5874;
  }
  else {
    pcVar5 = FUN_027f5824;
  }
  iVar3 = FUN_027e9cdc(param_1);
  uVar2 = _DAT_04808040;
  if (iVar3 == 0) {
    return 5;
  }
  _DAT_04808040 = 0x8001;
  do {
    do {
    } while ((int)(uint)_DAT_0480803c >> 8 != 2);
  } while ((_DAT_04808214 != 0) && (_DAT_04808214 != 9));
  *(short *)(_DAT_0380fff4 + 0x3be) = (short)param_1;
  sVar1 = *(short *)(_DAT_0380fff4 + 0x5f8);
  if (sVar1 != 2) {
    if (sVar1 == 3) {
      iVar3 = *(ushort *)(_DAT_0380fff4 + 0x5fc) + 0xcf;
      for (uVar4 = 0; uVar4 < *(ushort *)(_DAT_0380fff4 + 0x600); uVar4 = uVar4 + 1) {
        local_30 = 0;
        local_2c[0] = 0;
        (*pcVar5)(iVar3,1,local_2c);
        (*pcVar5)(iVar3 + param_1,1,&local_30);
        FUN_027e9b60(local_2c[0],local_30);
        iVar3 = iVar3 + 0xf;
      }
      for (uVar4 = 0; uVar4 < *(ushort *)(_DAT_0380fff4 + 0x5fe); uVar4 = uVar4 + 1) {
        local_30 = 0;
        (*pcVar5)(iVar3,1,&local_30);
        local_30 = local_30 << 8;
        (*pcVar5)(iVar3 + param_1,1,&local_30);
        local_30 = local_30 | 0x50000;
        FUN_027e9b38();
        iVar3 = iVar3 + 0xf;
      }
      _DAT_04808040 = uVar2;
      _DAT_04808048 = 3;
      return 0;
    }
    if (sVar1 != 5) {
      _DAT_04808040 = uVar2;
      _DAT_04808048 = 3;
      return 0;
    }
  }
  local_30 = 0;
  iVar3 = (param_1 + -1) * 6;
  (*pcVar5)(iVar3 + 0xf2,3,&local_30);
  FUN_027e9b38(local_30);
  (*pcVar5)(iVar3 + 0xf5,3,&local_30);
  FUN_027e9b38(local_30);
  local_30 = 0;
  if ((*(uint *)(_DAT_0380fff4 + 0x604) & 0x10000) == 0) {
    (*pcVar5)(param_1 + 0x145,1,&local_30);
    FUN_027e9b60(0x1e,local_30);
  }
  else if ((*(uint *)(_DAT_0380fff4 + 0x604) & 0x8000) == 0) {
    (*pcVar5)(param_1 + 0x153,1,&local_30);
    local_30 = *(uint *)(_DAT_0380fff4 + 0x604) | (local_30 & 0x1f) << 10;
    FUN_027e9b38();
  }
  _DAT_04808048 = 3;
  _DAT_04808040 = uVar2;
  return 0;
}

