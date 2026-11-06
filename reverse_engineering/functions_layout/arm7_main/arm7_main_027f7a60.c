
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* JUS-SDK jus_Rtc_WriteData [behavioral] data line output (0x74); clocks out r1 bytes from the
   buffer r0, LSB first */

void jus_Rtc_WriteData(ushort *param_1,int param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  
  do {
    if (((uint)param_1 & 1) == 0) {
      uVar1 = *param_1;
    }
    else {
      uVar1 = *(ushort *)((int)param_1 + -1) >> 8;
    }
    _DAT_04000138 = _DAT_04000138 & 0xff88 | 0x74;
    uVar2 = 0;
    do {
      iVar3 = 9;
      do {
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      _DAT_04000138 = _DAT_04000138 & 0xfffc | (ushort)((uVar1 >> (uVar2 & 0xff) & 1) != 0) | 2;
      iVar3 = 9;
      do {
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      uVar2 = uVar2 + 1;
    } while (uVar2 != 8);
    param_1 = (ushort *)((int)param_1 + 1);
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  return;
}

