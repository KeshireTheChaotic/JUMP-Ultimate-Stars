
void FUN_02082780(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  piVar5 = *(int **)(param_1 + 0xb8);
  do {
    if (piVar5 == (int *)0x0) {
      for (puVar10 = *(undefined4 **)(param_1 + 0xb8); puVar10 != (undefined4 *)0x0;
          puVar10 = (undefined4 *)*puVar10) {
        iVar4 = *(int *)(puVar10[2] + 0xc);
        iVar2 = *(int *)(puVar10[2] + 8);
        iVar7 = *(int *)(iVar4 + 0x1c);
        iVar6 = *(int *)(iVar2 + 0x1c);
        uVar3 = FUN_0207bf50(*(undefined4 *)(iVar7 + 0xc),*(undefined4 *)(iVar6 + 0xc),1,iVar4,iVar2
                             ,(int)*(char *)(*(int *)(iVar7 + 0x10) + 0xc),
                             (int)*(char *)(*(int *)(iVar7 + 0x10) + 0xd));
        iVar2 = *(int *)(param_1 + 0xd8);
        FUN_02037c24(param_1 + 0xd8,iVar2);
        *(undefined4 *)(iVar2 + 8) = uVar3;
        FUN_02037b98(*(int *)(iVar6 + 0xc) + 0x28,iVar2);
        iVar2 = *(int *)(param_1 + 0xd8);
        FUN_02037c24(param_1 + 0xd8,iVar2);
        *(undefined4 *)(iVar2 + 8) = uVar3;
        FUN_02037b98(*(int *)(iVar7 + 0xc) + 0x28,iVar2);
      }
      return;
    }
    iVar2 = piVar5[2];
    puVar10 = (undefined4 *)*piVar5;
    if (iVar2 == 0) {
      FUN_02037c24(param_1 + 0xb8,piVar5);
      piVar5[2] = 0;
      FUN_02037b98(param_1 + 0xd8,piVar5);
    }
    else {
      iVar4 = *(int *)(*(int *)(iVar2 + 8) + 0x1c);
      iVar2 = *(int *)(*(int *)(iVar2 + 0xc) + 0x1c);
      puVar8 = *(undefined4 **)(param_1 + 0xb8);
      while (puVar8 != (undefined4 *)0x0) {
        puVar9 = (undefined4 *)*puVar8;
        if (piVar5 != puVar8) {
          iVar6 = puVar8[2];
          if (iVar6 == 0) {
            FUN_02037c24(param_1 + 0xb8,puVar8);
            puVar8[2] = 0;
            FUN_02037b98(param_1 + 0xd8,puVar8);
          }
          else {
            iVar7 = *(int *)(*(int *)(iVar6 + 8) + 0x1c);
            bVar11 = false;
            if (iVar2 == *(int *)(*(int *)(iVar6 + 0xc) + 0x1c)) {
              bVar11 = iVar4 != iVar7;
            }
            else if (iVar4 == iVar7) {
              bVar11 = true;
            }
            if (bVar11) {
              uVar1 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
              if ((uVar1 >> 3 & 1) == 0) {
                FUN_02037c24(param_1 + 0xb8,piVar5);
                piVar5[2] = 0;
                FUN_02037b98(param_1 + 0xd8,piVar5);
                break;
              }
              if (puVar8 == puVar10) {
                puVar10 = (undefined4 *)*puVar10;
              }
              FUN_02037c24(param_1 + 0xb8,puVar8);
              puVar8[2] = 0;
              FUN_02037b98(param_1 + 0xd8,puVar8);
            }
          }
        }
        puVar8 = puVar9;
      }
    }
    piVar5 = puVar10;
  } while( true );
}

