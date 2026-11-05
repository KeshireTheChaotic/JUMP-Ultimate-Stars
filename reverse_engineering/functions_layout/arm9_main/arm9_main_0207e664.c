
void FUN_0207e664(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  short *psVar13;
  int iVar14;
  bool bVar15;
  int local_38 [2];
  int local_30;
  undefined4 uStack_28;
  
  puVar10 = *(undefined4 **)(param_1 + 0x70);
  uStack_28 = param_4;
  do {
    if (puVar10 == (undefined4 *)0x0) {
      return;
    }
    iVar12 = puVar10[2];
    iVar1 = *(int *)(iVar12 + 0xc);
    iVar9 = *(int *)(iVar1 + 0x5c);
    for (uVar11 = 0; uVar11 < *(ushort *)(*(int *)(iVar12 + 8) + 0xc); uVar11 = uVar11 + 1 & 0xffff)
    {
      bVar15 = *(short *)(iVar12 + 0x26) != 1;
      iVar2 = 1;
      if (bVar15) {
        iVar2 = *(int *)(iVar12 + 0xc);
      }
      psVar13 = (short *)(*(int *)(iVar12 + 8) + 0x3c + (uVar11 & 0xff) * 8);
      if (bVar15) {
        uVar6 = (uint)*(ushort *)(iVar2 + 0x184);
        iVar2 = (int)*(char *)(*(int *)(iVar12 + 0x10) + 4);
      }
      else {
        uVar6 = (uint)*(short *)(iVar1 + 0x180);
        iVar2 = *(int *)(&DAT_0209fb64 + ((int)*(short *)(iVar1 + 0x16e) >> 6) * 4);
      }
      iVar2 = (int)(uVar6 * iVar2 * 0x100) >> 0x10;
      if ((*(uint *)(iVar12 + 0x18) & 0x40000) != 0) {
        iVar2 = 0x7fff;
      }
      iVar5 = *(int *)(iVar9 + 0xc) + ((int)*psVar13 - (int)psVar13[2]) * 0x100;
      iVar8 = *(int *)(iVar9 + 0xc) + ((int)*psVar13 + (int)psVar13[2]) * 0x100;
      iVar7 = *(int *)(iVar9 + 0x10) + ((int)psVar13[1] - (int)psVar13[3]) * 0x100;
      if (iVar5 < 0) {
        iVar5 = 0;
      }
      if (iVar7 < 0) {
        iVar7 = 0;
      }
      iVar14 = *(int *)(iVar9 + 0x10) + ((int)psVar13[1] + (int)psVar13[3]) * 0x100;
      if (0x40000 < iVar8) {
        iVar8 = 0x3ff00;
      }
      if (0x40000 < iVar14) {
        iVar14 = 0x3ff00;
      }
      iVar2 = func_0x02166fd4(*(undefined4 *)(param_1 + 0xf8),iVar5,iVar7,iVar8,iVar14,iVar2);
      if (-1 < iVar2) {
        *(byte *)(iVar12 + 0x2a) = *(byte *)(iVar12 + 0x2a) | 1;
        *(uint *)(*(int *)(iVar12 + 0xc) + 0x40) =
             *(uint *)(*(int *)(iVar12 + 0xc) + 0x40) | 0x40000;
        if (*(short *)(iVar12 + 0x26) == 1) {
          func_0x0216293c(*(undefined4 *)(param_1 + 0xf8),iVar2,local_38);
          iVar1 = *(int *)(iVar9 + 0xc) >> 8;
          iVar2 = *(int *)(iVar9 + 0xc);
          if (local_38[0] <= iVar1) {
            iVar2 = local_30;
          }
          iVar5 = local_38[0];
          if (local_38[0] <= iVar1) {
            iVar5 = local_38[0] + iVar2;
          }
          iVar1 = FUN_0206c7fc(0x210012,iVar5,(int)psVar13[1] + (*(int *)(iVar9 + 0x10) >> 8),0);
          uVar3 = FUN_0206cf28(*(undefined4 *)(*(int *)(iVar12 + 0xc) + 0x30));
          piVar4 = *(int **)(*(int *)(iVar1 + 4) + 100);
          (**(code **)(*piVar4 + 0x5c))(piVar4,uVar3);
          func_0x021520dc(8,8,0);
          FUN_0207342c(0x7a,0x29);
        }
        else if (((*(uint *)(iVar12 + 0x14) & 0x1000) != 0) && ((*(uint *)(iVar12 + 0x18) & 1) != 0)
                ) {
          *(byte *)(*(int *)(iVar12 + 8) + 0x18) = *(byte *)(*(int *)(iVar12 + 8) + 0x18) | 2;
        }
        break;
      }
    }
    puVar10 = (undefined4 *)*puVar10;
  } while( true );
}

