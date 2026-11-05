
/* WARNING: Removing unreachable block (ram,0x037fa6f0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_037fa5e4(void)

{
  int iVar1;
  short sVar2;
  int iVar3;
  ushort *puVar4;
  short *psVar5;
  short *psVar6;
  uint uVar7;
  uint uVar8;
  
                    /* JUS-TAG hw={"WIRELESS":11}
                       io=["04808010","04808028","04808050","04808054","04808098","048080b4","048080f8","0480819c","04808228","04808244","04808268"]
                        */
  iVar1 = _DAT_0380fff4;
  _DAT_04808010 = 0x40;
  if (((((*(ushort *)(_DAT_0380fff4 + 0x690) & 0x20) != 0) &&
       (*(short *)(_DAT_0380fff4 + 0x4d0) == -1)) && ((_DAT_0480819c & 3) == 3)) &&
     ((_DAT_04808050 >> 1 & 0xfff) <= _DAT_04808268)) {
    uVar7 = (uint)_DAT_04808054;
    iVar3 = FUN_037fa998(&DAT_04804008 + uVar7 * 2);
    puVar4 = (ushort *)FUN_037fa998(iVar3 + 4);
    if ((*puVar4 & 0xe7ff) == 0x228) {
      iVar3 = FUN_037fa998(puVar4 + 1);
      sVar2 = _DAT_048080f8;
      do {
        uVar8 = _DAT_04808268 - uVar7 & 0xffff;
        if ((_DAT_04808268 - uVar7 & 0x8000) != 0) {
          uVar8 = uVar8 + (*(ushort *)(iVar1 + 0x3de) >> 1) & 0xffff;
        }
      } while (uVar8 < 0xf);
      psVar5 = (short *)(iVar3 + 8);
      for (uVar8 = 0; uVar8 < 3; uVar8 = uVar8 + 1) {
        psVar6 = (short *)FUN_037fa998(psVar5);
        psVar5 = psVar6 + 1;
        if (*psVar6 != *(short *)(iVar1 + uVar8 * 2 + 0x3a8)) {
          return;
        }
      }
      puVar4 = (ushort *)FUN_037fa998(psVar5 + 5);
      do {
        uVar8 = _DAT_04808268 - uVar7 & 0xffff;
        if ((_DAT_04808268 - uVar7 & 0x8000) != 0) {
          uVar8 = uVar8 + (*(ushort *)(iVar1 + 0x3de) >> 1) & 0xffff;
        }
        if (0x14 < uVar8) {
          if (((uint)*puVar4 & 1 << (_DAT_04808028 & 0xff)) != 0) {
            return;
          }
          *(undefined2 *)(iVar1 + 0x4d0) = _DAT_04808098;
          _DAT_048080b4 = 0x40;
          *(short *)(iVar1 + 0x402) = *(short *)(iVar1 + 0x402) + 1;
          do {
          } while ((_DAT_0480819c & 3) == 3);
          _DAT_04808244 = _DAT_04808244 & 0xffbf;
          _DAT_04808228 = 0;
          FUN_027ebb98();
          return;
        }
      } while ((ushort)(_DAT_048080f8 - sVar2) < 0x71);
    }
  }
  return;
}

