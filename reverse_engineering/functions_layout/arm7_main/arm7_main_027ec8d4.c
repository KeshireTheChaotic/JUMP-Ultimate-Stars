
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_027ec8d4(ushort *param_1)

{
  short *psVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if ((*param_1 & 1) == 0) {
    if (1 < *(ushort *)(_DAT_0380fff4 + 0x52c)) {
      uVar2 = 0;
      iVar3 = _DAT_0380fff4;
      psVar1 = *(short **)(_DAT_0380fff4 + 0x31c);
      for (uVar4 = 1; uVar4 < *(ushort *)(iVar3 + 0x322); uVar4 = uVar4 + 1) {
        if (psVar1[0xe] != 0) {
          iVar3 = FUN_027e9cfc(psVar1 + 0x10,param_1);
          if (iVar3 != 0) {
            return uVar4;
          }
          uVar2 = uVar2 + 1;
          iVar3 = _DAT_0380fff4;
          if (*(ushort *)(_DAT_0380fff4 + 0x52c) <= uVar2) break;
        }
        psVar1 = psVar1 + 0xe;
      }
    }
    uVar2 = 0xff;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}

