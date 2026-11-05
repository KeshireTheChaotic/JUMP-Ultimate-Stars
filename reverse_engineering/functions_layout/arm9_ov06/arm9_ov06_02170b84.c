
void FUN_02170b84(int *param_1,int *param_2,int param_3)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int extraout_r1;
  int extraout_r1_00;
  int local_44;
  int local_40;
  undefined1 auStack_3c [4];
  undefined1 auStack_38 [16];
  int local_28;
  undefined1 local_20;
  uint local_1c;
  undefined1 local_17;
  
  FUN_020517fc(auStack_3c,0,0x28);
  local_44 = param_2[2];
  local_40 = param_2[3];
  uVar3 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
  FUN_0200d338(uVar3,7);
  local_44 = local_44 + (extraout_r1 + -3) * 0x100;
  uVar3 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
  FUN_0200d338(uVar3,7);
  local_40 = local_40 + (extraout_r1_00 + -3) * 0x100;
  local_17 = *(undefined1 *)((int)param_2 + 0x25);
  local_20 = *(char *)((int)param_2 + 0x26) != '\0';
  FUN_02166a1c(auStack_38,&local_44);
  local_28 = param_2[*(byte *)(param_2 + 10) + 5];
  local_1c = (uint)*(byte *)((int)param_2 + 0x27);
  iVar4 = FUN_02083624(FUN_0216e3d0,auStack_3c,param_2[7] & 0xffffU | 0x1000,
                       param_2[8] & 0xffffU | 0x800,0);
  *param_1 = iVar4;
  if (iVar4 == 0) {
    *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) & 0xfe;
  }
  else {
    iVar4 = *(int *)(iVar4 + 8);
    *(byte *)((int)param_1 + 6) = *(byte *)((int)param_1 + 6) | 1;
    *(undefined2 *)(param_1 + 1) = 0;
    if (*param_2 != 0) {
      FUN_0216e820(*param_1,*param_2,*(undefined4 *)(param_3 + 0x28));
      piVar5 = *(int **)(iVar4 + 4);
      (**(code **)(*piVar5 + 0x94))
                (piVar5,*(uint *)(*(int *)(*(int *)(*param_2 + 8) + 4) + 0x3c) & 0x7fffffff);
    }
    FUN_0216eb8c(*param_1,param_2[*(byte *)(param_2 + 10) + 5]);
    FUN_0216ec88(*param_1,param_3,1,0,0);
    uVar1 = *(ushort *)(param_3 + 0x20);
    sVar2 = *(short *)((int)param_2 + 0x12);
    iVar4 = *(int *)(*(int *)(*param_1 + 0x10) + 0x5c);
    *(short *)(iVar4 + 0x24) = (short)((uint)uVar1 * (int)(short)param_2[4] >> 8);
    *(short *)(iVar4 + 0x26) = (short)((uint)uVar1 * (int)sVar2 >> 8);
    *(uint *)(*(int *)(*param_1 + 0x10) + 0x78) =
         *(uint *)(*(int *)(*param_1 + 0x10) + 0x78) | 0x30000;
    *(uint *)(*(int *)(*param_1 + 0x10) + 0x78) =
         *(uint *)(*(int *)(*param_1 + 0x10) + 0x78) | 0x100000;
    *(int *)(*param_1 + 0x30) = param_3;
  }
  return;
}

