
void FUN_0217f5b8(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  bool bVar8;
  
  if (*(char *)(param_1 + 0x96) != '\0') {
    *(char *)(param_1 + 0x96) = *(char *)(param_1 + 0x96) + -1;
  }
  if (*(char *)(param_1 + 0x105) == '\x02') {
    return;
  }
  uVar1 = FUN_0217f784(*(undefined4 *)(param_1 + 0x24),1);
  if ((uVar1 & 0x700) != 0) {
    uVar1 = FUN_0217f79c(*(undefined4 *)(param_1 + 0x2c),6);
    bVar8 = uVar1 == 0;
    if (bVar8) {
      uVar1 = (uint)*(byte *)(param_1 + 0x96);
    }
    if (bVar8 && uVar1 == 0) {
      *(undefined1 *)(param_1 + 0x96) = 0x1e;
      iVar2 = FUN_02179278(*(undefined4 *)(param_1 + 0x2c));
      if (iVar2 == 0) {
        return;
      }
      iVar2 = FUN_02175628(*(undefined4 *)(param_1 + 0x1c));
      piVar4 = *(int **)(param_1 + 0xd4);
      bVar8 = false;
      iVar2 = *(int *)(*(int *)(iVar2 + 4) + 0x10);
      uVar1 = (uint)piVar4 >> 0x1c;
      uVar6 = (uint)piVar4 & 0x80;
      for (uVar3 = 0; (int)uVar3 < 4; uVar3 = uVar3 + 1) {
        if (uVar3 != uVar1) {
          piVar4 = *(int **)(iVar2 + uVar3 * 4 + 0x98);
        }
        if (uVar3 != uVar1 && piVar4 != (int *)0x0) {
          piVar7 = *(int **)(iVar2 + uVar1 * 4 + 0x98);
          iVar5 = *piVar4 - *piVar7;
          piVar4 = (int *)(piVar4[1] - piVar7[1]);
          if (uVar6 == 0) {
            if (-1 < (int)piVar4) goto LAB_0217f698;
          }
          else if (iVar5 < 1) {
LAB_0217f698:
            if (iVar5 < 0) {
              iVar5 = -iVar5;
            }
            if (iVar5 < 0xa000) {
              if ((int)piVar4 < 0) {
                piVar4 = (int *)-(int)piVar4;
              }
              if ((int)piVar4 < 0x4000) {
                bVar8 = true;
                break;
              }
            }
          }
        }
      }
      if (bVar8) {
        FUN_0217ab84(param_1,8);
        FUN_0217f890(param_1);
        FUN_0217f7c0(*(undefined4 *)(param_1 + 0x24));
        FUN_02176d14();
        return;
      }
    }
  }
  uVar1 = FUN_0217f784(*(undefined4 *)(param_1 + 0x24),0);
  if ((uVar1 & 0x300) == 0) {
    return;
  }
  iVar2 = FUN_0217f79c(*(undefined4 *)(param_1 + 0x2c),0);
  if (iVar2 != 0) {
    return;
  }
  uVar1 = *(byte *)(param_1 + 0x104) + 1 & 0xff;
  if (uVar1 < 8) {
    if (*(uint *)(&DAT_0218190c + uVar1 * 4) < (*(uint *)(*(int *)(param_1 + 0x2c) + 0x38) & 0xff))
    {
      bVar8 = false;
    }
    else {
      bVar8 = true;
    }
  }
  else {
    bVar8 = true;
  }
  if (bVar8) {
    FUN_0217ab84(param_1,1);
    FUN_0217f890(param_1);
    FUN_0217f7c0(*(undefined4 *)(param_1 + 0x24));
    FUN_02176d14();
    return;
  }
  return;
}

