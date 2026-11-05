
void FUN_02085314(int param_1)

{
  int iVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int local_2c;
  int local_28;
  
  iVar9 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  pbVar6 = *(byte **)(iVar9 + 0xc);
  FUN_02084e90(&local_28,*(undefined4 *)(*(int *)(iVar9 + 4) + 0x40));
  bVar7 = pbVar6[1];
  iVar1 = (int)(-local_28 + ((uint)(-local_28 >> 0xb) >> 0x14)) >> 0xc;
  iVar8 = *(int *)(iVar9 + 0x10);
  for (iVar10 = 0; iVar10 < (int)(uint)*pbVar6; iVar10 = iVar10 + 1) {
    uVar2 = *(ushort *)(pbVar6 + iVar10 * 4 + 4);
    FUN_02084e90(&local_2c,*(undefined4 *)(iVar9 + 8));
    iVar4 = local_2c + (uint)uVar2 * 0x1000;
    iVar4 = (int)(iVar4 + ((uint)(iVar4 >> 0xb) >> 0x14)) >> 0xc;
    if ((iVar1 < iVar4) && (iVar4 <= iVar1 + 0xc0)) {
      iVar5 = *(int *)(iVar8 + iVar10 * 4);
      if (iVar5 == 0) {
        if (*(char *)(iVar9 + 0x15) == '\x02') {
          uVar3 = FUN_02042460(DAT_020a0f64,iVar4 - iVar1,&LAB_0208546c,pbVar6[iVar10 * 4 + 6]);
          *(undefined4 *)(iVar8 + iVar10 * 4) = uVar3;
        }
        else {
          uVar3 = FUN_02042460(DAT_020a0f64,iVar4 - iVar1,&LAB_02085488,pbVar6[iVar10 * 4 + 6]);
          *(undefined4 *)(iVar8 + iVar10 * 4) = uVar3;
        }
      }
      else {
        FUN_020425bc(DAT_020a0f64,iVar5,iVar4 - iVar1);
      }
    }
    else {
      if (iVar4 <= iVar1) {
        bVar7 = pbVar6[iVar10 * 4 + 6];
      }
      if (*(int *)(iVar8 + iVar10 * 4) != 0) {
        FUN_02042660(DAT_020a0f64);
        *(undefined4 *)(iVar8 + iVar10 * 4) = 0;
      }
    }
  }
  *(byte *)(iVar9 + 0x18) = bVar7;
  return;
}

