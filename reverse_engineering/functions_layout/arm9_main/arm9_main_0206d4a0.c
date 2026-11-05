
void FUN_0206d4a0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  short *psVar8;
  byte *pbVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  bool bVar13;
  int local_44;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iVar6 = param_1[0x13];
  iVar3 = param_1[0x15];
  bVar13 = iVar3 == iVar6;
  iVar5 = param_2;
  if (bVar13) {
    iVar5 = param_1[0x16];
    iVar3 = param_1[0x14];
  }
  if (!bVar13 || iVar5 != iVar3) {
    param_1[0x15] = iVar6;
    param_1[0x16] = param_1[0x14];
    iVar3 = param_1[0x13];
    bVar13 = iVar3 != 100;
    if (!bVar13) {
      iVar3 = param_1[0x14];
    }
    uStack_28 = param_4;
    if (bVar13 || iVar3 != 100) {
      puVar12 = param_1 + 8;
      iVar3 = param_1[0x12];
      local_44 = 1;
      pbVar9 = (byte *)(param_1 + 0x10);
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        psVar8 = (short *)*puVar12;
        puVar7 = &DAT_020afc7c;
        for (uVar11 = (uint)*pbVar9; uVar11 != 0; uVar11 = uVar11 - 1) {
          iVar5 = FUN_0200d12c((int)psVar8[2] * param_1[0x13],100);
          iVar6 = FUN_0200d12c((int)psVar8[1] * param_1[0x14],100);
          if (iVar6 == 0) {
            uVar2 = (ushort)iVar5 | (ushort)(iVar5 << 5) | (ushort)(iVar5 << 10);
          }
          else {
            local_34 = FUN_0200d12c(iVar5 * (0xff - iVar6),0xff);
            iVar4 = FUN_0200d12c(iVar6 * psVar8[3],0x168);
            local_30 = FUN_0200d12c(iVar5 * (0xff - iVar4),0xff);
            iVar6 = FUN_0200d12c(iVar6 * (0x168 - psVar8[3]),0x168);
            local_2c = FUN_0200d12c(iVar5 * (0xff - iVar6),0xff);
            iVar6 = FUN_0200d12c((int)*psVar8,0x3c);
            uVar2 = (*(code *)(&PTR_LAB_0209e29c)[iVar6])(iVar5,&local_34);
          }
          *puVar7 = uVar2;
          puVar7 = puVar7 + 1;
          psVar8 = psVar8 + 4;
        }
        bVar1 = *pbVar9;
        FUN_0206d42c(auStack_3c,param_2);
        iVar5 = FUN_0206d3e8(auStack_3c);
        FUN_02029c68(*(undefined4 *)(iVar5 + 4),&DAT_020afc7c,local_44,bVar1);
        local_44 = local_44 + 0x10;
        puVar12 = puVar12 + 1;
        pbVar9 = pbVar9 + 1;
      }
    }
    else {
      iVar5 = 1;
      iVar3 = param_1[0x12];
      pbVar9 = (byte *)(param_1 + 0x10);
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        bVar1 = *pbVar9;
        uVar10 = *param_1;
        FUN_0206d42c(auStack_38,param_2);
        iVar6 = FUN_0206d3e8(auStack_38);
        FUN_02029c68(*(undefined4 *)(iVar6 + 4),uVar10,iVar5,bVar1);
        iVar5 = iVar5 + 0x10;
        pbVar9 = pbVar9 + 1;
        param_1 = param_1 + 1;
      }
    }
  }
  return;
}

