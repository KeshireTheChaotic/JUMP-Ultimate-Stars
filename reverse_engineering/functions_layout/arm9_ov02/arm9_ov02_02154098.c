
void FUN_02154098(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30 [2];
  short local_28;
  short local_26;
  int local_24;
  int local_20;
  undefined4 uStack_18;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  iVar5 = *(int *)(*(int *)(iVar4 + 0x330) + 0x38) + *(int *)(*(int *)(param_1 + 4) + 0x124) * 0x40;
  iVar6 = (uint)*(byte *)(iVar5 + 0x2c) * 0x48 + *(int *)(*(int *)(iVar4 + 0x330) + 0x34);
  uStack_18 = param_4;
  iVar1 = FUN_02153808(iVar4);
  func_0x021b6214(*(undefined4 *)(*(int *)(iVar1 * 0x28 + iVar4 + 0xd8) + 4),1);
  *(undefined1 *)(iVar4 + 0x35c) = *(undefined1 *)(iVar5 + 0x2c);
  *(char *)(iVar4 + 0x35e) = (char)*(undefined4 *)(*(int *)(param_1 + 4) + 0x124);
  FUN_02154354(*(undefined4 *)(iVar4 + 0x20));
  piVar2 = *(int **)(*(int *)(*(int *)(iVar4 + 0x20) + 4) + 100);
  (**(code **)(*piVar2 + 0x68))(piVar2,iVar5);
  local_30[1] = 0x18000;
  FUN_0214ef60(*(undefined4 *)(iVar4 + 0x20),local_30 + 1);
  piVar2 = *(int **)(*(int *)(iVar4 + 0x4c) + 4);
  (**(code **)(*piVar2 + 0xd8))(piVar2,1);
  uVar3 = FUN_0214dfa8(iVar5);
  FUN_02023894(*(undefined4 *)(*(int *)(iVar4 + 0x4c) + 4),uVar3,0);
  (**(code **)(**(int **)(*(int *)(*(int *)(iVar4 + 0x4c) + 4) + 0x68) + 0x6c))();
  local_28 = *(short *)(iVar6 + 0x2c);
  iVar1 = 0;
  local_26 = *(short *)(iVar6 + 0x2e);
  do {
    if ((int)(uint)*(byte *)(iVar6 + 0x44) <= iVar1) {
LAB_0215422c:
      uVar3 = FUN_02154380(*(undefined4 *)(iVar4 + 8));
      FUN_0214fa00(&local_24,uVar3);
      local_34 = -*(int *)(iVar4 + 0x344);
      local_30[0] = local_24 + ((int)local_28 - (int)*(short *)(iVar4 + 0x354)) * 0x1000;
      FUN_02153260(local_30,&local_34);
      local_24 = local_30[0];
      local_3c = -*(int *)(iVar4 + 0x344);
      local_38 = local_20 + ((int)local_26 - (int)*(short *)(iVar4 + 0x356)) * 0x1000;
      FUN_02153260(&local_38,&local_3c);
      local_20 = local_38;
      FUN_02154390(iVar4 + 0x348,&local_24);
      iVar1 = FUN_02151454(*(undefined4 *)(iVar4 + 8),0x564d5049,0);
      FUN_02013c48(*(undefined4 *)(iVar1 + 4),&local_24,0);
      iVar1 = *(short *)(iVar4 + 0x358) * 0x1000 - local_24;
      *(short *)(iVar4 + 0x358) = (short)((int)(iVar1 + ((uint)(iVar1 >> 0xb) >> 0x14)) >> 0xc);
      iVar1 = *(short *)(iVar4 + 0x35a) * 0x1000 - local_20;
      *(short *)(iVar4 + 0x35a) = (short)((int)(iVar1 + ((uint)(iVar1 >> 0xb) >> 0x14)) >> 0xc);
      local_40 = 0x1000;
      FUN_021539d4(iVar4,*(undefined1 *)(iVar4 + 0x35c),&local_40,&local_28);
      FUN_0215384c(iVar4);
      return;
    }
    if ((uint)*(byte *)(iVar6 + iVar1 + 0x38) == *(uint *)(*(int *)(param_1 + 4) + 0x124)) {
      iVar5 = *(int *)(&DAT_0215c228 + iVar1 * 0xc + (*(byte *)(iVar6 + 0x44) - 1) * 0x30) +
              local_28 * 0x1000;
      local_28 = (short)((int)(iVar5 + ((uint)(iVar5 >> 0xb) >> 0x14)) >> 0xc);
      iVar1 = *(int *)(&DAT_0215c22c + iVar1 * 0xc + (*(byte *)(iVar6 + 0x44) - 1) * 0x30) +
              local_26 * 0x1000;
      local_26 = (short)((int)(iVar1 + ((uint)(iVar1 >> 0xb) >> 0x14)) >> 0xc);
      goto LAB_0215422c;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

