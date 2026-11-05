
undefined4 FUN_0203f440(int param_1,int *param_2,undefined4 param_3,ushort *param_4)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool bVar9;
  
  uVar7 = *(undefined4 *)(param_1 + 0x50);
  iVar2 = (**(code **)(*param_2 + 0x38))(param_2,0);
  uVar8 = 0;
  iVar3 = (**(code **)(*param_2 + 0x20))();
  if (iVar3 == 0x3443464e) {
    iVar5 = (int)*(short *)(param_1 + 0x4a);
    iVar3 = *(int *)(param_1 + 0x58);
    bVar9 = iVar3 == iVar5 + *(short *)(param_1 + 0x4c);
    if (bVar9) {
      iVar5 = *(int *)(param_1 + 0x20);
    }
    if (bVar9) {
      iVar3 = *(int *)(param_1 + 0x5c);
      iVar5 = *(int *)(iVar5 + 8);
    }
    uVar6 = (*(uint *)(iVar2 + (uint)*param_4 * 4) >> 8) + 0x3f & 0xffffffc0;
    if (!bVar9 || iVar3 != iVar5) {
      FUN_020519c8(iVar2 + (uint)*param_4 * 4,uVar7);
      DC_FlushRange(uVar7,uVar6);
    }
    uVar8 = FUN_02045570(param_3,uVar7,uVar6);
  }
  else {
    iVar3 = (**(code **)(*param_2 + 0x20))();
    if (iVar3 == 0x344c4646) {
      iVar5 = (int)*(short *)(param_1 + 0x4a);
      iVar3 = (*param_4 + 1) * 4;
      iVar4 = iVar5 + *(short *)(param_1 + 0x4c);
      bVar9 = *(int *)(param_1 + 0x58) == iVar4;
      if (bVar9) {
        iVar5 = *(int *)(param_1 + 0x5c);
        iVar4 = *(int *)(*(int *)(param_1 + 0x20) + 8);
      }
      uVar1 = *(undefined2 *)(iVar2 + iVar3 + 2);
      if (!bVar9 || iVar5 != iVar4) {
        FUN_020643f4(param_2 + 0xc,param_2[0xb] + (uint)*(ushort *)(iVar2 + iVar3) * 4,0);
        FUN_02064430(param_2 + 0xc,&DAT_020aa2f8,uVar1);
        *(uint *)(param_1 + 0x60) = DAT_020aa2f8 >> 8;
        FUN_020519c8(&DAT_020aa2f8,uVar7);
        DC_FlushRange(uVar7,*(undefined4 *)(param_1 + 0x60));
      }
      uVar8 = FUN_02045570(param_3,uVar7,*(undefined4 *)(param_1 + 0x60));
    }
  }
  return uVar8;
}

