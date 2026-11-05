
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0380504c(uint *param_1,int param_2,ushort *param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ushort local_20;
  ushort local_1e;
  ushort local_1c [4];
  
                    /* JUS-TAG hw={"SPI":2} io=["040001c0","040001c2"] */
  *param_3 = 0;
  if (param_2 < 0) {
    param_2 = -param_2;
  }
  iVar1 = FUN_03805494();
  if (iVar1 == 0) {
    *param_1 = *param_1 & 0xfffff000;
    *param_1 = *param_1 & 0xff000fff;
    *param_1 = *param_1 & 0xfeffffff;
    *param_1 = *param_1 & 0xf9ffffff | 0x6000000;
    DAT_0380aa68 = 0;
  }
  else {
    uVar2 = FUN_0380529c(&local_20,param_2,0,&local_1e);
    *param_1 = *param_1 & 0xf9ffffff | (uVar2 & 3) << 0x19;
    *param_1 = *param_1 & 0xfffff000 | local_20 & 0xfff;
    iVar3 = FUN_0380529c(&local_20,param_2,1,local_1c);
    if (iVar3 == 2) {
      *param_1 = *param_1 & 0xf9ffffff | ((*param_1 & 0x7ffffff) >> 0x19 | 2) << 0x19;
    }
    *param_1 = *param_1 & 0xff000fff | (local_20 & 0xfff) << 0xc;
    iVar3 = 0;
    do {
      iVar3 = iVar3 + 1;
    } while (iVar3 < 0xc);
    _DAT_040001c0 = 0x8201;
    _DAT_040001c2 = 0;
    if (iVar1 == 2) {
      *param_1 = *param_1 & 0xf9ffffff | 0x6000000;
    }
    iVar1 = FUN_03805494();
    if (iVar1 == 0) {
      *param_1 = *param_1 & 0xfeffffff;
      DAT_0380aa68 = 0;
    }
    else if (iVar1 == 1) {
      *param_1 = *param_1 | 0x1000000;
      DAT_0380aa68 = 1;
      if (local_1e < local_1c[0]) {
        local_1e = local_1c[0];
      }
      *param_3 = local_1e;
    }
    else if (iVar1 == 2) {
      *param_1 = *param_1 | 0x1000000;
      *param_1 = *param_1 & 0xf9ffffff | 0x6000000;
      DAT_0380aa68 = 0;
    }
    else {
      FUN_037fe538();
    }
  }
  return;
}

