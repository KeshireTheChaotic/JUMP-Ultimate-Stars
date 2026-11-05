
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027f17f8(uint param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  bVar1 = false;
  iVar2 = FUN_027ec1c8();
  if (iVar2 != 0) {
    uVar4 = 0;
    do {
      iVar2 = *(int *)(_DAT_0380fff4 + uVar4 * 0xc + 0x194);
      if (iVar2 != -1) {
        do {
          iVar3 = FUN_037f8b44(iVar2);
          iVar5 = iVar2 + 0x10;
          if (*(ushort *)(iVar2 + 0x12) == param_1) {
            if ((uVar4 == 1) || (iVar5 == *(int *)(uVar4 * 0x14 + _DAT_0380fff4 + 0x438))) {
              FUN_027ec62c(iVar5);
              *(undefined2 *)(iVar2 + 0x12) = 0;
              FUN_027ec698(iVar5);
            }
            else {
              *(undefined2 *)(iVar2 + 0x18) = 2;
              FUN_027ec62c(iVar5);
              FUN_027efb30(_DAT_0380fff4 + 0x194 + uVar4 * 0xc,iVar2);
              if (!bVar1) {
                bVar1 = true;
              }
            }
          }
          iVar2 = iVar3;
        } while (iVar3 != -1);
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < 3);
  }
  return;
}

