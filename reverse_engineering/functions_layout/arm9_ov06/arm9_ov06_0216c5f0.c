
void FUN_0216c5f0(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  ushort uVar1;
  char cVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  undefined1 auStack_34 [4];
  int local_30;
  int local_2c;
  undefined4 local_28;
  
  local_28 = param_5;
  local_30 = param_2;
  local_2c = param_4;
  iVar6 = FUN_02083624(FUN_0216cb04,&local_30,*(uint *)(param_2 + 0x24) & 0xffff | 0x1000,
                       *(uint *)(param_2 + 0x28) & 0xffff,0);
  *param_1 = iVar6;
  if (iVar6 == 0) {
    *(ushort *)(param_4 + 0x26) = *(ushort *)(param_4 + 0x26) | 8;
  }
  else {
    *(undefined2 *)(param_1 + 1) = 0;
    iVar6 = *(int *)(*param_1 + 8);
    if (param_3 != 0) {
      FUN_0216e820(*param_1,param_3,*(undefined4 *)(param_4 + 0x28));
      piVar7 = *(int **)(iVar6 + 4);
      (**(code **)(*piVar7 + 0x94))
                (piVar7,*(uint *)(*(int *)(*(int *)(param_3 + 8) + 4) + 0x3c) & 0x7fffffff);
    }
    if (*param_1 != 0) {
      FUN_0207a878(*(undefined4 *)(*param_1 + 0x14));
    }
    FUN_02023894(*(undefined4 *)(*(int *)(*param_1 + 0xc) + 4),param_5,0);
    (**(code **)(**(int **)(*(int *)(*(int *)(*param_1 + 0xc) + 4) + 0x68) + 0x6c))();
    piVar7 = (int *)FUN_0216b740(*param_1);
    sVar4 = *(short *)(param_2 + 0x2e);
    cVar2 = *(char *)(param_2 + 0x36);
    iVar10 = *(int *)(*(int *)(*param_1 + 0x10) + 0x5c);
    sVar5 = *(short *)(param_2 + 0x2c);
    iVar9 = piVar7[1];
    iVar11 = *piVar7;
    cVar3 = *(char *)(param_2 + 0x35);
    *(undefined4 *)(iVar10 + 0x14) = *(undefined4 *)(iVar10 + 0xc);
    *(undefined4 *)(iVar10 + 0x18) = *(undefined4 *)(iVar10 + 0x10);
    *(int *)(iVar10 + 0xc) = iVar11 - (int)sVar5 * (int)(short)cVar3;
    *(int *)(iVar10 + 0x10) = iVar9 - (int)sVar4 * (int)(short)cVar2;
    piVar7 = *(int **)(param_2 + 4);
    uVar12 = 0x8a;
    uVar13 = 0;
    do {
      if ((*(byte *)((int)piVar7 + 6) & 1) != 0) {
        iVar9 = *(int *)(*piVar7 + 8);
        FUN_02155998(auStack_34,iVar9,0);
        piVar8 = *(int **)(*(int *)(*(int *)(*param_1 + 0xc) + 4) + 0x68);
        (**(code **)(*piVar8 + 0xb8))(piVar8,auStack_34);
        FUN_02155998(&local_38,iVar9,0);
        *(char *)(param_2 + 0x21) =
             (char)((int)(local_38 + ((uint)(local_38 >> 0xb) >> 0x14)) >> 0xc);
        FUN_0216b750(&local_3c,*(undefined4 *)(*(int *)(iVar9 + 4) + 100));
        if ((int)(uVar12 * 0x1000) < local_3c) {
          FUN_0216b750(&local_40,*(undefined4 *)(*(int *)(iVar9 + 4) + 100));
          uVar12 = (int)(local_40 + ((uint)(local_40 >> 0xb) >> 0x14)) >> 0xc & 0xff;
        }
      }
      uVar13 = uVar13 + 1;
      piVar7 = piVar7 + 2;
    } while (uVar13 < 0x20);
    uVar12 = uVar12 + 1 & 0xff;
    if (0xfe < uVar12) {
      uVar12 = 0x8a;
    }
    local_44 = uVar12 << 0xc;
    FUN_021512bc(iVar6,&local_44);
    if ((*(byte *)(param_2 + 0x20) & 4) == 0) {
      *(short *)(param_2 + 0x2c) = *(short *)(param_2 + 0x2c) + *(short *)(param_2 + 0x30);
      *(short *)(param_2 + 0x2e) = *(short *)(param_2 + 0x2e) + *(short *)(param_2 + 0x32);
      uVar1 = *(ushort *)(param_4 + 0x20);
      sVar4 = *(short *)(param_2 + 0x1e);
      cVar2 = *(char *)(param_2 + 0x36);
      iVar6 = *(int *)(*(int *)(*param_1 + 0x10) + 0x5c);
      *(short *)(iVar6 + 0x24) =
           (short)((int)*(char *)(param_2 + 0x35) * (uint)uVar1 * (int)*(short *)(param_2 + 0x1c) >>
                  8);
      *(short *)(iVar6 + 0x26) = (short)((int)cVar2 * (uint)uVar1 * (int)sVar4 >> 8);
    }
    else {
      *(undefined2 *)(*(int *)(*(int *)(*param_1 + 0x10) + 0x5c) + 0x24) = 0;
      *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) | 10;
    }
    FUN_0216ec88(*param_1,param_4,1,0,0);
    if ((*(uint *)(*(int *)(param_4 + 8) + 8) & 0x1000) == 0) {
      FUN_0216b8f4(*param_1,1);
    }
    else {
      FUN_0216b8f4(*param_1,0);
      FUN_0207d11c(*(undefined4 *)(*param_1 + 0x10),1);
    }
    *(uint *)(*(int *)(*param_1 + 0x10) + 0x78) =
         *(uint *)(*(int *)(*param_1 + 0x10) + 0x78) | 0x100000;
    *(undefined2 *)(*(int *)(*(int *)(*param_1 + 0x10) + 0x5c) + 0x3c) = 0;
    *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) | 1;
    *(int *)(*param_1 + 0x30) = param_4;
  }
  return;
}

