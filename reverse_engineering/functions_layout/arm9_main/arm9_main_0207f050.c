
void FUN_0207f050(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  short *psVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_78 [16];
  undefined1 auStack_68 [16];
  int local_58 [2];
  int local_50;
  int local_48 [2];
  int local_40;
  int local_38 [2];
  int local_30;
  undefined4 uStack_28;
  
  puVar7 = *(undefined4 **)(param_1 + 0x90);
  uStack_28 = param_4;
  do {
    if (puVar7 == (undefined4 *)0x0) {
      return;
    }
    iVar10 = puVar7[2];
    iVar6 = *(int *)(iVar10 + 0x5c);
    psVar8 = (short *)(iVar10 + 0x94);
    iVar2 = (int)*(short *)(iVar6 + 0x3a);
    psVar9 = (short *)(iVar10 + 0x90);
    *(undefined4 *)(iVar10 + 0x8c) = 0xffffffff;
    *(undefined4 *)(iVar10 + 0x88) = 0xffffffff;
    iVar3 = iVar2;
    for (iVar12 = 0; iVar12 < 2; iVar12 = iVar12 + 1) {
      iVar11 = (int)*psVar8;
      if (iVar11 < 0) {
        iVar3 = (int)*psVar9;
      }
      if (iVar11 < 0 && iVar3 < 0) break;
      if (iVar11 < 0) {
        iVar11 = (int)*psVar9;
      }
      func_0x0216293c(*(undefined4 *)(param_1 + 0xf8),iVar11,local_38);
      bVar1 = *(byte *)((short)iVar11 * 0x18 + *(int *)(*(int *)(param_1 + 0xf8) + 0x18) + 0x15);
      if ((bVar1 & 1) == 0) {
        iVar3 = *(int *)(iVar6 + 0xc) - local_38[0];
        *(int *)(iVar10 + 0x88) = iVar3;
        if (iVar3 < 0x401) {
          uVar5 = *(uint *)(iVar10 + 0x78);
          *(uint *)(iVar10 + 0x78) = uVar5 | 0x8000000;
          if ((uVar5 & 0x4000000) != 0) {
            iVar12 = (int)*(short *)(iVar6 + 0x24);
            iVar3 = iVar12;
            if (-1 < iVar12) {
              iVar3 = iVar2;
            }
            if (-1 >= iVar12 || iVar3 < 0) {
              if (*(int *)(iVar10 + 0x88) < 0) {
                FUN_0207e538(auStack_68,*(undefined4 *)(param_1 + 0xf8),iVar11,1);
                FUN_0207e594(local_48,auStack_68);
                *psVar9 = *psVar8;
                uVar4 = *(undefined4 *)(iVar6 + 0x10);
                iVar3 = *(int *)(iVar10 + 0x5c);
                *(int *)(iVar3 + 0xc) = local_48[0];
                *(undefined4 *)(iVar3 + 0x10) = uVar4;
                *(undefined4 *)(iVar10 + 0x88) = 0;
              }
              *(uint *)(*(int *)(iVar10 + 0x5c) + 0x34) =
                   *(uint *)(*(int *)(iVar10 + 0x5c) + 0x34) | 0x40;
            }
          }
          break;
        }
      }
      else {
        uVar4 = func_0x02162dc4(*(int *)(param_1 + 0xf8),iVar11);
        func_0x0216293c(*(undefined4 *)(param_1 + 0xf8),uVar4,local_58);
        *(int *)(iVar10 + 0x88) = *(int *)(iVar6 + 0xc) - local_58[0];
      }
      if ((bVar1 & 2) == 0) {
        iVar3 = (local_38[0] + local_30) - *(int *)(iVar6 + 0xc);
        *(int *)(iVar10 + 0x8c) = iVar3;
        if (iVar3 < 0x401) {
          uVar5 = *(uint *)(iVar10 + 0x78);
          *(uint *)(iVar10 + 0x78) = uVar5 | 0x8000000;
          if ((uVar5 & 0x4000000) != 0) {
            iVar3 = (int)*(short *)(iVar6 + 0x24);
            if (*(short *)(iVar6 + 0x24) < 1) {
              iVar3 = iVar2;
            }
            if (0 < iVar3) {
              if (*(int *)(iVar10 + 0x8c) < 0) {
                FUN_0207e538(auStack_78,*(undefined4 *)(param_1 + 0xf8),iVar11,1);
                FUN_0207e594(local_48,auStack_78);
                *psVar9 = *psVar8;
                uVar4 = *(undefined4 *)(iVar6 + 0x10);
                iVar3 = *(int *)(iVar10 + 0x5c);
                *(int *)(iVar3 + 0xc) = local_48[0] + local_40;
                *(undefined4 *)(iVar3 + 0x10) = uVar4;
                *(undefined4 *)(iVar10 + 0x8c) = 0;
              }
              *(uint *)(*(int *)(iVar10 + 0x5c) + 0x34) =
                   *(uint *)(*(int *)(iVar10 + 0x5c) + 0x34) | 0x80;
            }
          }
          break;
        }
      }
      else {
        uVar4 = func_0x02162e0c(*(undefined4 *)(param_1 + 0xf8),iVar11);
        func_0x0216293c(*(undefined4 *)(param_1 + 0xf8),uVar4,local_58);
        iVar3 = (local_58[0] + local_50) - *(int *)(iVar6 + 0xc);
        *(int *)(iVar10 + 0x8c) = iVar3;
      }
      psVar8 = psVar8 + 1;
      psVar9 = psVar9 + 1;
    }
    puVar7 = (undefined4 *)*puVar7;
  } while( true );
}

