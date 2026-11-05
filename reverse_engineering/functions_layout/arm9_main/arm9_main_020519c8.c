
void FUN_020519c8(uint *param_1,byte *param_2)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  
  uVar6 = *param_1 >> 8;
  puVar5 = param_1 + 1;
  do {
    if ((int)uVar6 < 1) {
      return;
    }
    bVar10 = (byte)*puVar5;
    puVar4 = (uint *)((int)puVar5 + 1);
    iVar9 = 8;
    while (puVar5 = puVar4, 0 < iVar9) {
      if ((bVar10 & 0x80) == 0) {
        puVar5 = (uint *)((int)puVar4 + 1);
        *param_2 = (byte)*puVar4;
        param_2 = param_2 + 1;
        uVar6 = uVar6 - 1;
      }
      else {
        iVar7 = ((int)(uint)(byte)*puVar4 >> 4) + 3;
        uVar3 = *puVar4;
        puVar5 = (uint *)((int)puVar4 + 2);
        bVar2 = *(byte *)((int)puVar4 + 1);
        uVar6 = uVar6 - iVar7;
        do {
          *param_2 = param_2[-(((uint)bVar2 | ((byte)uVar3 & 0xf) << 8) + 1)];
          param_2 = param_2 + 1;
          iVar8 = iVar7 + -1;
          bVar1 = 0 < iVar7;
          iVar7 = iVar8;
        } while (iVar8 != 0 && bVar1);
      }
      if ((int)uVar6 < 1) break;
      bVar10 = bVar10 << 1;
      puVar4 = puVar5;
      iVar9 = iVar9 + -1;
    }
  } while( true );
}

