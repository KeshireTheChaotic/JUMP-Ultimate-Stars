
/* WARNING: Removing unreachable block (ram,0x02051824) */
/* WARNING: Removing unreachable block (ram,0x02051800) */

void FUN_021618b8(undefined2 *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  uint uVar3;
  ushort *puVar4;
  
  param_1[1] = 0xfffe;
  uVar3 = 0x1fc;
  puVar1 = param_1 + 2;
  *param_1 = 0;
  if (((uint)puVar1 & 1) != 0) {
    *(ushort *)((int)param_1 + 3) = *(ushort *)((int)param_1 + 3) & 0xff;
    puVar1 = (ushort *)((int)param_1 + 5);
    uVar3 = 0x1fb;
  }
  if (1 < uVar3) {
    puVar2 = puVar1;
    if (((uint)puVar1 & 2) != 0) {
      puVar2 = puVar1 + 1;
      *puVar1 = 0;
      uVar3 = uVar3 - 2;
      if (uVar3 == 0) {
        return;
      }
    }
    if ((uVar3 & 0xfffffffc) != 0) {
      puVar4 = (ushort *)((uVar3 & 0xfffffffc) + (int)puVar2);
      puVar1 = puVar2;
      do {
        puVar2 = puVar1 + 2;
        puVar1[0] = 0;
        puVar1[1] = 0;
        puVar1 = puVar2;
      } while (puVar2 < puVar4);
    }
    puVar1 = puVar2;
    if ((uVar3 & 2) != 0) {
      puVar1 = puVar2 + 1;
      *puVar2 = 0;
    }
  }
  if ((uVar3 & 1) == 0) {
    return;
  }
  *puVar1 = *puVar1 & 0xff00;
  return;
}

