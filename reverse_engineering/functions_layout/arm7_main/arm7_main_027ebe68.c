
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_027ebe68(void)

{
  ushort uVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  uint uVar5;
  undefined2 *puVar6;
  uint uVar7;
  uint uVar8;
  ushort *puVar9;
  
  iVar4 = _DAT_0380fff4;
  uVar1 = *(ushort *)(_DAT_0380fff4 + 0x52c);
  uVar7 = 0;
  uVar8 = 1;
  puVar3 = *(ushort **)(_DAT_0380fff4 + 0x31c);
  do {
    puVar9 = puVar3 + 0xe;
    if (*(ushort *)(iVar4 + 0x322) <= uVar8) {
      return;
    }
    if (*puVar9 == 0) {
LAB_027ec00c:
      if (uVar1 <= uVar7) {
        return;
      }
    }
    else {
      uVar2 = puVar3[0x1a];
      if (((uVar2 == 0) || (uVar2 == 0xffff)) || (puVar3[0x1a] = uVar2 - 1, puVar3[0x1a] != 0)) {
LAB_027ec008:
        uVar7 = uVar7 + 1;
        goto LAB_027ec00c;
      }
      if (*puVar9 < 0x20) {
LAB_027ebff0:
        *puVar9 = 0;
        *(short *)(iVar4 + 0x52c) = *(short *)(iVar4 + 0x52c) + -1;
        goto LAB_027ec008;
      }
      uVar5 = FUN_027ec2bc(uVar8);
      FUN_027ec560(uVar8 & 0xffff,0x20);
      FUN_027f17f8(uVar8);
      if (*(short *)(iVar4 + 0x350) != 1) {
        if (uVar8 == *(ushort *)(iVar4 + 0x3cc)) {
          puVar6 = (undefined2 *)FUN_027f084c(puVar3 + 0x10,1);
          if (puVar6 != (undefined2 *)0x0) {
            *puVar6 = 1;
            FUN_027f15ac();
            uVar7 = uVar7 + 1;
            goto LAB_027ec014;
          }
          FUN_037f9468(0x20);
          FUN_027ea144();
          FUN_027eceac(puVar3 + 0x10,1);
        }
        goto LAB_027ebff0;
      }
      if (uVar5 < 0x21) goto LAB_027ebff0;
      *(ushort *)(_DAT_0380fff4 + 0x534) =
           *(ushort *)(_DAT_0380fff4 + 0x534) | (ushort)(1 << (uVar8 & 0xff));
      FUN_027ec4e4(uVar8 & 0xffff,0);
      FUN_027ec480(uVar8);
      puVar6 = (undefined2 *)FUN_027f084c(puVar3 + 0x10,1);
      if (puVar6 == (undefined2 *)0x0) {
        FUN_027eceac(puVar3 + 0x10,1);
        goto LAB_027ebff0;
      }
      *puVar6 = 1;
      FUN_027f15ac();
      uVar7 = uVar7 + 1;
    }
LAB_027ec014:
    uVar8 = uVar8 + 1;
    puVar3 = puVar9;
  } while( true );
}

