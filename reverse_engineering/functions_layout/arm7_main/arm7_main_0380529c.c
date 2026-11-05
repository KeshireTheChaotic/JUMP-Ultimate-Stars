
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0380529c(ushort *param_1,int param_2,int param_3,undefined2 *param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint local_38 [6];
  
                    /* JUS-TAG hw={"SPI":2} io=["040001c0","040001c2"] */
  if (param_3 == 0) {
    uVar1 = 0xd1;
    uVar2 = 1;
  }
  else {
    uVar1 = 0x91;
    uVar2 = 2;
  }
  do {
  } while ((_DAT_040001c0 & 0x80) != 0);
  _DAT_040001c0 = 0;
  iVar3 = 0;
  do {
    do {
    } while ((_DAT_040001c0 & 0x80) != 0);
    local_38[iVar3] = 0;
    do {
    } while ((_DAT_040001c0 & 0x80) != 0);
    local_38[iVar3] = local_38[iVar3] | (uint)uVar1;
    local_38[iVar3] = (int)(local_38[iVar3] & 0x7ff8) >> 3;
    iVar3 = iVar3 + 1;
  } while (iVar3 < 5);
  _DAT_040001c0 = 0x8201;
  _DAT_040001c2 = 0;
  iVar3 = 0;
  iVar4 = 0;
  do {
    iVar6 = iVar4;
    while (iVar6 = iVar6 + 1, iVar6 < 5) {
      iVar7 = local_38[iVar4] - local_38[iVar6];
      if (iVar7 < 0) {
        iVar7 = -iVar7;
      }
      if (iVar3 < iVar7) {
        iVar3 = iVar7;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  *param_4 = (short)iVar3;
  iVar3 = 0;
  do {
    if (2 < iVar3) {
      *param_1 = (ushort)((int)(local_38[0] + local_38[4]) >> 1) & 0xfff8;
      return uVar2;
    }
    uVar5 = local_38[iVar3];
    iVar4 = iVar3;
    while (iVar4 = iVar4 + 1, iVar4 < 4) {
      iVar6 = uVar5 - local_38[iVar4];
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      iVar7 = iVar4;
      if (iVar6 <= param_2) {
        while (iVar7 = iVar7 + 1, iVar7 < 5) {
          iVar6 = uVar5 - local_38[iVar7];
          if (iVar6 < 0) {
            iVar6 = -iVar6;
          }
          if (iVar6 <= param_2) {
            *param_1 = (ushort)((int)(local_38[iVar7] + local_38[iVar4] + uVar5 * 2) >> 2) & 0xfff8;
            return 0;
          }
        }
      }
    }
    iVar3 = iVar3 + 1;
  } while( true );
}

