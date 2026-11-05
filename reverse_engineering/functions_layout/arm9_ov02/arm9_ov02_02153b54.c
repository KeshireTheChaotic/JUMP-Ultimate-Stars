
void FUN_02153b54(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  short local_44;
  short local_42;
  undefined1 auStack_40 [12];
  int iStack_34;
  int iStack_30;
  undefined4 uStack_28;
  
  iVar5 = *(int *)(*(int *)(param_1 + 0x330) + 0x34);
  local_48 = 0x1000;
  uStack_28 = param_4;
  FUN_02153d28(*(undefined4 *)(param_1 + 0x338),&local_48);
  uVar2 = FUN_02153588(*(undefined4 *)(param_1 + 0x14));
  iVar3 = FUN_02153010(uVar2,0x31305053);
  FUN_02023894(*(undefined4 *)(iVar3 + 4),0x1100f,0);
  (**(code **)(**(int **)(*(int *)(iVar3 + 4) + 0x68) + 0x6c))();
  if (*(char *)(param_2 * 0x48 + iVar5 + 0x44) == '\x01') {
    local_4c = 0x20000;
    FUN_0214f244(iVar3,&local_4c);
  }
  else {
    local_50 = 0x30000;
    FUN_0214f244(iVar3,&local_50);
  }
  FUN_021518d4(&iStack_34);
  local_44 = *(short *)(param_1 + 0x354);
  local_42 = *(short *)(param_1 + 0x356);
  iVar10 = (int)local_44;
  iVar5 = (int)local_42;
  for (iVar3 = 0; iVar3 < (int)(uint)*(byte *)(param_1 + 0x35f); iVar3 = iVar3 + 1) {
    iVar9 = iVar3 * 0x28 + param_1;
    iVar6 = *(int *)(*(int *)(*(int *)(iVar9 + 0xd8) + 4) + 0x124) * 0x48 +
            *(int *)(*(int *)(param_1 + 0x330) + 0x34);
    iStack_34 = (*(short *)(iVar6 + 0x2c) - iVar10) * 0x1000;
    iStack_30 = (*(short *)(iVar6 + 0x2e) - iVar5) * 0x1000;
    FUN_0214f960(*(int *)(iVar9 + 0xd8),&iStack_34);
    for (iVar7 = 0; iVar7 < (int)(uint)*(byte *)(iVar6 + 0x44); iVar7 = iVar7 + 1) {
      iVar4 = iVar9 + iVar7 * 4;
      uVar2 = *(undefined4 *)(iVar4 + 0xdc);
      iVar8 = *(int *)(iVar4 + 0xec);
      bVar1 = *(byte *)(iVar9 + iVar7 + 0xfc);
      FUN_0214fa00(auStack_40,iVar7 * 0xc + (*(byte *)(iVar6 + 0x44) - 1) * 0x30 + iRam02153d24);
      FUN_0214f960(uVar2,auStack_40);
      iVar4 = *(int *)(iVar8 + 4);
      FUN_02023894(iVar4,(uint)bVar1 * 2 + 0x30001 + *(int *)(iVar4 + 0x10) * 0x10,0);
      (**(code **)(**(int **)(*(int *)(iVar8 + 4) + 0x68) + 0x6c))();
    }
  }
  return;
}

