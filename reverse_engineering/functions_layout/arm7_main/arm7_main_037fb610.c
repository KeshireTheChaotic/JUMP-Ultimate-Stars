
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fb610(void)

{
  int iVar1;
  uint unaff_r4;
  undefined2 *puVar2;
  
                    /* JUS-TAG hw={"WIRELESS":12}
                       io=["04805f70","04805f72","04805f76","04805f7e","04808030","04808050","04808052","04808056","0480805a","04808062","0480824c","0480824e"]
                        */
  iVar1 = _DAT_0380fff4;
  puVar2 = (undefined2 *)(_DAT_0380fff4 + 0x4dc);
  MIi_CpuClear32(0,puVar2,0x50);
  switch(*(undefined2 *)(_DAT_0380fff4 + 0x350)) {
  case 0:
    unaff_r4 = 0x794;
    break;
  case 1:
    unaff_r4 = 0x10c4;
    break;
  case 2:
    unaff_r4 = 0xbfc;
    break;
  case 3:
    unaff_r4 = 0x794;
  }
  _DAT_04808050 = (short)unaff_r4 + 0x4000;
  _DAT_04808056 = (undefined2)((unaff_r4 & 0x1ffff) >> 1);
  _DAT_04808052 = 0x5f60;
  _DAT_0480805a = _DAT_04808056;
  *(undefined2 *)(iVar1 + 0x4e0) = _DAT_04808056;
  *puVar2 = 0xffff;
  *(short *)(iVar1 + 0x3de) = 0x1f60 - (short)unaff_r4;
  _DAT_04808062 = 0x5f5e;
  _DAT_04808030 = 0x8001;
  _DAT_0480824c = 0xffff;
  _DAT_0480824e = 0xffff;
  _DAT_04805f70 = 0xffff;
  _DAT_04805f72 = 0xffff;
  _DAT_04805f7e = 0xffff;
  _DAT_04805f76 = 0xffff;
  return;
}

